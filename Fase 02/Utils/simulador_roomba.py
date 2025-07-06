#!/usr/bin/env python3
import os
import subprocess
import time
import serial
import struct
import random

SENSOR_RANGES = {
    "distance": (-100, 100),
    "angle": (-180, 180),
    "battery_charge": (0, 2000),
    "battery_capacity": (0, 2000),
    "voltage": (12000, 16000),
    "current": (-2000, 2000),
    "temperature": (10, 40),
}

RESPONSE_SIZES = {
    0:26,
    7:1,8:1,9:1,10:1,11:1,12:1,13:1,14:1,15:1,19:2,20:2,22:2,23:2,24:1,25:2,26:2,
    27:2,28:2,29:2,30:2,31:2,35:1,36:1,37:1,38:1,39:2,40:2,41:2,42:2,43:2,44:2,
    46:2,47:2,48:2,49:2,50:2,51:2,54:2,55:2,56:2,57:2,58:1
}

current_mode = 1

def create_virtual_ports():
    for link in ["/tmp/roomba_front", "/tmp/roomba_back"]:
        if os.path.exists(link):
            os.remove(link)
            print(f"Borrado enlace previo: {link}")

    print("Lanzando socat...")
    process = subprocess.Popen([
        "socat",
        "-d",
        "-d",
        "PTY,link=/tmp/roomba_front,raw",
        "PTY,link=/tmp/roomba_back,raw"
    ])
    time.sleep(1)

    if not os.path.exists("/tmp/roomba_front") or not os.path.exists("/tmp/roomba_back"):
        process.terminate()
        process.wait()
        raise RuntimeError("No se crearon los puertos virtuales.")

    return process

def get_response(sensor_id):
    if sensor_id == 35:
        return bytes([current_mode])
    if sensor_id == 0:
        return b'\x00' * 26
    size = RESPONSE_SIZES.get(sensor_id,1)
    if sensor_id == 19:
        val = random.randint(*SENSOR_RANGES["distance"])
        return struct.pack(">h", val)
    if sensor_id == 20:
        val = random.randint(*SENSOR_RANGES["angle"])
        return struct.pack(">h", val)
    if sensor_id == 22:
        val = random.randint(*SENSOR_RANGES["voltage"])
        return struct.pack(">H", val)
    if sensor_id == 23:
        val = random.randint(*SENSOR_RANGES["current"])
        return struct.pack(">h", val)
    if sensor_id == 24:
        val = random.randint(*SENSOR_RANGES["temperature"])
        return bytes([val])
    if sensor_id in [25,26]:
        val = random.randint(*SENSOR_RANGES["battery_charge"])
        return struct.pack(">H", val)
    if size == 1:
        return bytes([random.choice([0,1])])
    if size == 2:
        val = random.randint(0,500)
        return struct.pack(">H", val)
    return b'\x00'*size

def main():
    global current_mode
    socat_process = create_virtual_ports()
    print("Puertos creados:")
    print("  /tmp/roomba_front --> Tu librería Create2")
    print("  /tmp/roomba_back  --> Este simulador")

    ser = serial.Serial('/tmp/roomba_back', baudrate=115200, timeout=0.1)
    print("Simulador conectado, esperando comandos...")

    buffer = bytearray()

    try:
        while True:
            data = ser.read(64)
            if data:
                buffer.extend(data)

            i = 0
            while i < len(buffer):
                cmd = buffer[i]

                if cmd == 142:  # Request Sensor
                    if i+1 >= len(buffer):
                        break
                    sensor_id = buffer[i+1]
                    i +=2
                    response = get_response(sensor_id)
                    ser.write(response)
                    print(f"[SENSOR] ID={sensor_id}, response={response.hex()}")

                elif cmd == 132:  # Request Group
                    if i+1 >= len(buffer):
                        break
                    group_id = buffer[i+1]
                    i +=2
                    if group_id ==0:
                        response = b'\x00'*26
                    else:
                        response = b'\x00'
                    ser.write(response)
                    print(f"[SENSOR GROUP] Group ID={group_id}, response={response.hex()}")

                elif cmd == 149:  # Stream
                    if i+1 >= len(buffer):
                        break
                    sensor_id = buffer[i+1]
                    i +=2
                    response = b'\x00'
                    ser.write(response)
                    print(f"[STREAM] Sensor ID={sensor_id}")

                elif cmd == 137:
                    if i+4 >= len(buffer):
                        break
                    payload = buffer[i+1:i+5]
                    v,r = struct.unpack(">hh", payload)
                    print(f"[COMMAND] DRIVE velocity={v}, radius={r}")
                    i+=5

                elif cmd == 145:
                    if i+4 >= len(buffer):
                        break
                    payload = buffer[i+1:i+5]
                    r,l = struct.unpack(">hh", payload)
                    print(f"[COMMAND] DRIVE_DIRECT right={r}, left={l}")
                    i+=5

                elif cmd == 139:
                    if i+3 >= len(buffer):
                        break
                    payload = buffer[i+1:i+4]
                    print(f"[COMMAND] SET_LEDS payload={payload.hex()}")
                    i+=4

                elif cmd == 128:
                    current_mode=1
                    print("[COMMAND] START")
                    i+=1

                elif cmd == 130:
                    current_mode=2
                    print("[COMMAND] SAFE")
                    i+=1

                elif cmd ==131:
                    current_mode=3
                    print("[COMMAND] FULL")
                    i+=1

                elif cmd ==135:
                    print("[COMMAND] SEEK DOCK")
                    i+=1

                elif cmd ==136:
                    print("[COMMAND] SPOT CLEAN")
                    i+=1

                elif cmd ==133:
                    print("[COMMAND] CLEAN")
                    i+=1

                elif cmd ==138:
                    if i+1 >= len(buffer):
                        break
                    payload = buffer[i+1]
                    print(f"[COMMAND] MOTORS payload={payload:02x}")
                    i+=2

                elif cmd ==140:
                    if i+2 >= len(buffer):
                        break
                    song_num = buffer[i+1]
                    num_notes = buffer[i+2]
                    expected = i+3+(num_notes*2)
                    if expected > len(buffer):
                        break
                    notes_data = buffer[i+3:expected]
                    print(f"[COMMAND] SET SONG number={song_num} notes={notes_data.hex()}")
                    i=expected

                elif cmd ==141:
                    if i+1 >= len(buffer):
                        break
                    song_num = buffer[i+1]
                    print(f"[COMMAND] PLAY SONG number={song_num}")
                    i+=2

                else:
                    print(f"[UNKNOWN COMMAND] {cmd}")
                    i+=1

            if i >0:
                buffer=buffer[i:]

    except KeyboardInterrupt:
        print("Cerrando simulador...")
    finally:
        socat_process.terminate()
        socat_process.wait()
        ser.close()
        print("Simulador detenido.")

if __name__ == "__main__":
    main()
