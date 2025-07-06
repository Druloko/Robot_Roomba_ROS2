#!/usr/bin/env python3
import subprocess

def main():
    print("Lanzando socat...")
    process = subprocess.Popen([
        "socat",
        "-d", "-d",
        "PTY,link=/tmp/roomba_front,raw",
        "PTY,link=/tmp/roomba_back,raw"
    ], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)

    # Leer TODA la salida en tiempo real
    try:
        while True:
            line = process.stdout.readline()
            if not line:
                break
            print("[SOCAT]", line.strip())
    except KeyboardInterrupt:
        print("Terminando...")
    finally:
        process.terminate()
        process.wait()
        print("Socat terminado.")

if __name__ == "__main__":
    main()
