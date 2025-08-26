#!/usr/bin/env python3
"""
Simulador de Roomba - Protocolo Open Interface
Simula un robot Roomba Create2 para pruebas de desarrollo
Compatible con la librería irobot y el nodo ROS2
"""

import os
import subprocess
import time
import serial
import struct
import random
import threading
import logging
from datetime import datetime
from enum import IntEnum

# Configurar logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

class OIMode(IntEnum):
    """Modos del Open Interface"""
    OFF = 0
    PASSIVE = 1
    SAFE = 2
    FULL = 3

class RoombaSimulator:
    """Simulador del robot Roomba Create2"""
    
    def __init__(self):
        # Estado del robot
        self.oi_mode = OIMode.OFF
        self.current_mode = OIMode.OFF
        self.is_charging = False
        self.is_docked = False
        self.is_cleaning = False
        self.song_playing = False
        self.current_song = 0
        
        # Sensores de movimiento
        self.distance = 0
        self.angle = 0
        self.left_encoder = 0
        self.right_encoder = 0
        self.requested_velocity = 0
        self.requested_radius = 0
        self.requested_left_velocity = 0
        self.requested_right_velocity = 0
        
        # Sensores de bumpers y wheel drops
        self.bump_left = False
        self.bump_right = False
        self.wheel_drop_left = False
        self.wheel_drop_right = False
        
        # Sensores de cliff
        self.cliff_left = False
        self.cliff_front_left = False
        self.cliff_front_right = False
        self.cliff_right = False
        self.cliff_left_signal = 0
        self.cliff_front_left_signal = 0
        self.cliff_front_right_signal = 0
        self.cliff_right_signal = 0
        
        # Sensores de pared
        self.wall_sensor = False
        self.wall_signal = 0
        self.virtual_wall = False
        
        # Sensores de dirt
        self.dirt_detect = 0
        
        # Sensores de IR
        self.ir_char_omni = 0
        self.ir_char_left = 0
        self.ir_char_right = 0
        
        # Botones
        self.button_clean = False
        self.button_spot = False
        self.button_dock = False
        self.button_minute = False
        self.button_hour = False
        self.button_day = False
        self.button_schedule = False
        self.button_clock = False
        
        # Sensores de energía
        self.charging_state = 0  # 0=Not charging, 1=Recond charging, 2=Full charging, 3=Trickle charging, 4=Waiting, 5=Charging fault
        self.voltage = 16000  # mV
        self.current = -200   # mA
        self.temperature = 25  # °C
        self.battery_charge = 2000  # mAh
        self.battery_capacity = 2000  # mAh
        
        # Fuentes de carga
        self.home_base = False
        self.internal_charger = False
        
        # Overcurrent
        self.left_wheel_overcurrent = False
        self.right_wheel_overcurrent = False
        self.main_brush_overcurrent = False
        self.side_brush_overcurrent = False
        
        # Light bumper
        self.light_bumper_left = False
        self.light_bumper_front_left = False
        self.light_bumper_center_left = False
        self.light_bumper_center_right = False
        self.light_bumper_front_right = False
        self.light_bumper_right = False
        
        # Light bumper signals
        self.light_bump_left_signal = 0
        self.light_bump_front_left_signal = 0
        self.light_bump_center_left_signal = 0
        self.light_bump_center_right_signal = 0
        self.light_bump_front_right_signal = 0
        self.light_bump_right_signal = 0
        
        # Motor currents
        self.left_motor_current = 0
        self.right_motor_current = 0
        self.main_brush_motor_current = 0
        self.side_brush_motor_current = 0
        
        # Stasis
        self.stasis_disabled = False
        self.stasis_toggling = False
        
        # Stream
        self.number_stream_packets = 0
        
        # Canciones almacenadas
        self.songs = {}
        
        # Timers para simular comportamiento
        self.last_command_time = time.time()
        self.movement_start_time = None
        self.movement_duration = 0
        
        # Tamaños de respuesta según protocolo Open Interface
        self.RESPONSE_SIZES = {
            0: 26, 1: 10, 2: 6, 3: 10, 4: 14, 5: 12, 6: 52,
            7: 1, 8: 1, 9: 1, 10: 1, 11: 1, 12: 1, 13: 1, 14: 1, 15: 1, 16: 1, 17: 1, 18: 1, 19: 2, 20: 2, 21: 1,
            22: 2, 23: 2, 24: 1, 25: 2, 26: 2, 27: 2, 28: 2, 29: 2, 30: 2, 31: 2, 32: 3, 33: 3, 34: 1, 35: 1,
            36: 1, 37: 1, 38: 1, 39: 2, 40: 2, 41: 2, 42: 2, 43: 2, 44: 2, 45: 1, 46: 2, 47: 2, 48: 2, 49: 2,
            50: 2, 51: 2, 52: 1, 53: 1, 54: 2, 55: 2, 56: 2, 57: 2, 58: 1,
            100: 80, 101: 28, 106: 12, 107: 9
        }
        
        logger.info("Simulador de Roomba inicializado")
    
    def update_simulation(self):
        """Actualiza el estado del simulador"""
        current_time = time.time()
        
        # Simular descarga de batería
        if not self.is_charging and current_time - self.last_command_time > 1:
            self.battery_charge = max(0, self.battery_charge - 0.1)
            if self.battery_charge < 100:
                self.charging_state = 1  # Necesita carga
        
        # Simular carga de batería
        if self.is_charging:
            self.battery_charge = min(self.battery_capacity, self.battery_charge + 2)
            if self.battery_charge >= self.battery_capacity:
                self.charging_state = 3  # Trickle charging
            else:
                self.charging_state = 2  # Full charging
        
        # Simular movimiento
        if self.movement_start_time and current_time - self.movement_start_time < self.movement_duration:
            # Simular cambios en distancia y ángulo durante el movimiento
            if self.requested_velocity != 0:
                time_elapsed = current_time - self.movement_start_time
                self.distance += int(self.requested_velocity * time_elapsed * 0.1)
                if self.requested_radius != 0 and self.requested_radius != 32768:  # No straight
                    self.angle += int((self.requested_velocity / self.requested_radius) * time_elapsed * 10)
        elif self.movement_start_time and current_time - self.movement_start_time >= self.movement_duration:
            # Parar movimiento
            self.movement_start_time = None
            self.requested_velocity = 0
            self.requested_radius = 0
            self.requested_left_velocity = 0
            self.requested_right_velocity = 0
        
        # Simular bumpers ocasionales
        if random.random() < 0.001:  # 0.1% chance per update
            self.bump_left = random.choice([True, False])
            self.bump_right = random.choice([True, False])
            if self.bump_left or self.bump_right:
                logger.info(f"Simulando bumper: left={self.bump_left}, right={self.bump_right}")
        
        # Simular cliff sensors
        if random.random() < 0.0005:  # 0.05% chance per update
            self.cliff_left = random.choice([True, False])
            self.cliff_front_left = random.choice([True, False])
    
    def get_sensor_data(self, sensor_id):
        """Obtiene datos de un sensor específico"""
        self.update_simulation()
        
        if sensor_id == 7:  # Bumps and wheel drops
            value = 0
            if self.bump_right: value |= 0x01
            if self.bump_left: value |= 0x02
            if self.wheel_drop_right: value |= 0x04
            if self.wheel_drop_left: value |= 0x08
            return struct.pack('B', value)
        
        elif sensor_id == 8:  # Wall sensor
            return struct.pack('B', 1 if self.wall_sensor else 0)
        
        elif sensor_id == 9:  # Cliff left
            return struct.pack('B', 1 if self.cliff_left else 0)
        
        elif sensor_id == 10:  # Cliff front left
            return struct.pack('B', 1 if self.cliff_front_left else 0)
        
        elif sensor_id == 11:  # Cliff front right
            return struct.pack('B', 1 if self.cliff_front_right else 0)
        
        elif sensor_id == 12:  # Cliff right
            return struct.pack('B', 1 if self.cliff_right else 0)
        
        elif sensor_id == 13:  # Virtual wall
            return struct.pack('B', 1 if self.virtual_wall else 0)
        
        elif sensor_id == 14:  # Wheel overcurrents
            value = 0
            if self.side_brush_overcurrent: value |= 0x01
            if self.main_brush_overcurrent: value |= 0x02
            if self.right_wheel_overcurrent: value |= 0x04
            if self.left_wheel_overcurrent: value |= 0x08
            return struct.pack('B', value)
        
        elif sensor_id == 15:  # Dirt detect
            return struct.pack('B', self.dirt_detect)
        
        elif sensor_id == 17:  # IR char omni
            return struct.pack('B', self.ir_char_omni)
        
        elif sensor_id == 18:  # Buttons
            value = 0
            if self.button_clean: value |= 0x01
            if self.button_spot: value |= 0x02
            if self.button_dock: value |= 0x04
            if self.button_minute: value |= 0x08
            if self.button_hour: value |= 0x10
            if self.button_day: value |= 0x20
            if self.button_schedule: value |= 0x40
            if self.button_clock: value |= 0x80
            return struct.pack('B', value)
        
        elif sensor_id == 19:  # Distance
            return struct.pack('>h', self.distance)
        
        elif sensor_id == 20:  # Angle
            return struct.pack('>h', self.angle)
        
        elif sensor_id == 21:  # Charging state
            return struct.pack('B', self.charging_state)
        
        elif sensor_id == 22:  # Voltage
            return struct.pack('>H', self.voltage)
        
        elif sensor_id == 23:  # Current
            return struct.pack('>h', self.current)
        
        elif sensor_id == 24:  # Temperature
            return struct.pack('b', self.temperature)
        
        elif sensor_id == 25:  # Battery charge
            return struct.pack('>H', int(self.battery_charge))
        
        elif sensor_id == 26:  # Battery capacity
            return struct.pack('>H', int(self.battery_capacity))
        
        elif sensor_id == 27:  # Wall signal
            return struct.pack('>H', self.wall_signal)
        
        elif sensor_id == 28:  # Cliff left signal
            return struct.pack('>H', self.cliff_left_signal)
        
        elif sensor_id == 29:  # Cliff front left signal
            return struct.pack('>H', self.cliff_front_left_signal)
        
        elif sensor_id == 30:  # Cliff front right signal
            return struct.pack('>H', self.cliff_front_right_signal)
        
        elif sensor_id == 31:  # Cliff right signal
            return struct.pack('>H', self.cliff_right_signal)
        
        elif sensor_id == 32:  # Charging sources
            value = 0
            if self.internal_charger: value |= 0x01
            if self.home_base: value |= 0x02
            return struct.pack('B', value)
        
        elif sensor_id == 35:  # OI Mode
            return struct.pack('B', self.oi_mode)
        
        elif sensor_id == 36:  # Song number
            return struct.pack('B', self.current_song)
        
        elif sensor_id == 37:  # Song playing
            return struct.pack('B', 1 if self.song_playing else 0)
        
        elif sensor_id == 38:  # Stream packets
            return struct.pack('B', self.number_stream_packets)
        
        elif sensor_id == 39:  # Requested velocity
            return struct.pack('>h', self.requested_velocity)
        
        elif sensor_id == 40:  # Requested radius
            return struct.pack('>h', self.requested_radius)
        
        elif sensor_id == 41:  # Requested right velocity
            return struct.pack('>h', self.requested_right_velocity)
        
        elif sensor_id == 42:  # Requested left velocity
            return struct.pack('>h', self.requested_left_velocity)
        
        elif sensor_id == 43:  # Left encoder counts
            return struct.pack('>H', self.left_encoder)
        
        elif sensor_id == 44:  # Right encoder counts
            return struct.pack('>H', self.right_encoder)
        
        elif sensor_id == 45:  # Light bumper
            value = 0
            if self.light_bumper_left: value |= 0x01
            if self.light_bumper_front_left: value |= 0x02
            if self.light_bumper_center_left: value |= 0x04
            if self.light_bumper_center_right: value |= 0x08
            if self.light_bumper_front_right: value |= 0x10
            if self.light_bumper_right: value |= 0x20
            return struct.pack('B', value)
        
        elif sensor_id == 46:  # Light bump left signal
            return struct.pack('>H', self.light_bump_left_signal)
        
        elif sensor_id == 47:  # Light bump front left signal
            return struct.pack('>H', self.light_bump_front_left_signal)
        
        elif sensor_id == 48:  # Light bump center left signal
            return struct.pack('>H', self.light_bump_center_left_signal)
        
        elif sensor_id == 49:  # Light bump center right signal
            return struct.pack('>H', self.light_bump_center_right_signal)
        
        elif sensor_id == 50:  # Light bump front right signal
            return struct.pack('>H', self.light_bump_front_right_signal)
        
        elif sensor_id == 51:  # Light bump right signal
            return struct.pack('>H', self.light_bump_right_signal)
        
        elif sensor_id == 52:  # IR char left
            return struct.pack('B', self.ir_char_left)
        
        elif sensor_id == 53:  # IR char right
            return struct.pack('B', self.ir_char_right)
        
        elif sensor_id == 54:  # Left motor current
            return struct.pack('>h', self.left_motor_current)
        
        elif sensor_id == 55:  # Right motor current
            return struct.pack('>h', self.right_motor_current)
        
        elif sensor_id == 56:  # Main brush motor current
            return struct.pack('>h', self.main_brush_motor_current)
        
        elif sensor_id == 57:  # Side brush motor current
            return struct.pack('>h', self.side_brush_motor_current)
        
        elif sensor_id == 58:  # Stasis
            value = 0
            if self.stasis_toggling: value |= 0x01
            if self.stasis_disabled: value |= 0x02
            return struct.pack('B', value)
        
        else:
            # Sensor desconocido, devolver datos por defecto
            size = self.RESPONSE_SIZES.get(sensor_id, 1)
            return b'\x00' * size
    
    def get_sensor_group(self, group_id):
        """Obtiene datos de un grupo de sensores"""
        if group_id == 0:  # Sensor group 0 (26 bytes)
            data = bytearray()
            data.extend(self.get_sensor_data(7))   # Bumps and wheel drops
            data.extend(self.get_sensor_data(8))   # Wall sensor
            data.extend(self.get_sensor_data(9))   # Cliff left
            data.extend(self.get_sensor_data(10))  # Cliff front left
            data.extend(self.get_sensor_data(11))  # Cliff front right
            data.extend(self.get_sensor_data(12))  # Cliff right
            data.extend(self.get_sensor_data(13))  # Virtual wall
            data.extend(self.get_sensor_data(14))  # Wheel overcurrents
            data.extend(self.get_sensor_data(15))  # Dirt detect
            data.extend(b'\x00')                   # Unused byte
            data.extend(self.get_sensor_data(17))  # IR char omni
            data.extend(self.get_sensor_data(18))  # Buttons
            data.extend(self.get_sensor_data(19))  # Distance
            data.extend(self.get_sensor_data(20))  # Angle
            data.extend(self.get_sensor_data(21))  # Charging state
            data.extend(self.get_sensor_data(22))  # Voltage
            data.extend(self.get_sensor_data(23))  # Current
            data.extend(self.get_sensor_data(24))  # Temperature
            data.extend(self.get_sensor_data(25))  # Battery charge
            data.extend(self.get_sensor_data(26))  # Battery capacity
            return bytes(data)
        
        elif group_id == 1:  # Sensor group 1 (10 bytes)
            data = bytearray()
            data.extend(self.get_sensor_data(7))   # Bumps and wheel drops
            data.extend(self.get_sensor_data(8))   # Wall sensor
            data.extend(self.get_sensor_data(9))   # Cliff left
            data.extend(self.get_sensor_data(10))  # Cliff front left
            data.extend(self.get_sensor_data(11))  # Cliff front right
            data.extend(self.get_sensor_data(12))  # Cliff right
            data.extend(self.get_sensor_data(13))  # Virtual wall
            data.extend(self.get_sensor_data(14))  # Wheel overcurrents
            data.extend(self.get_sensor_data(15))  # Dirt detect
            data.extend(b'\x00')                   # Unused byte
            return bytes(data)
        
        elif group_id == 2:  # Sensor group 2 (6 bytes)
            data = bytearray()
            data.extend(self.get_sensor_data(17))  # IR char omni
            data.extend(self.get_sensor_data(18))  # Buttons
            data.extend(self.get_sensor_data(19))  # Distance
            data.extend(self.get_sensor_data(20))  # Angle
            return bytes(data)
        
        elif group_id == 3:  # Sensor group 3 (10 bytes)
            data = bytearray()
            data.extend(self.get_sensor_data(21))  # Charging state
            data.extend(self.get_sensor_data(22))  # Voltage
            data.extend(self.get_sensor_data(23))  # Current
            data.extend(self.get_sensor_data(24))  # Temperature
            data.extend(self.get_sensor_data(25))  # Battery charge
            data.extend(self.get_sensor_data(26))  # Battery capacity
            return bytes(data)
        
        elif group_id == 4:  # Sensor group 4 (14 bytes)
            data = bytearray()
            data.extend(self.get_sensor_data(27))  # Wall signal
            data.extend(self.get_sensor_data(28))  # Cliff left signal
            data.extend(self.get_sensor_data(29))  # Cliff front left signal
            data.extend(self.get_sensor_data(30))  # Cliff front right signal
            data.extend(self.get_sensor_data(31))  # Cliff right signal
            data.extend(self.get_sensor_data(32))  # Charging sources
            data.extend(b'\x00' * 8)               # Unused bytes
            return bytes(data)
        
        elif group_id == 5:  # Sensor group 5 (12 bytes)
            data = bytearray()
            data.extend(self.get_sensor_data(35))  # OI Mode
            data.extend(self.get_sensor_data(36))  # Song number
            data.extend(self.get_sensor_data(37))  # Song playing
            data.extend(self.get_sensor_data(38))  # Stream packets
            data.extend(self.get_sensor_data(39))  # Requested velocity
            data.extend(self.get_sensor_data(40))  # Requested radius
            data.extend(self.get_sensor_data(41))  # Requested right velocity
            data.extend(self.get_sensor_data(42))  # Requested left velocity
            return bytes(data)
        
        elif group_id == 6:  # Sensor group 6 (52 bytes) - All sensors
            data = bytearray()
            data.extend(self.get_sensor_group(0))  # Group 0
            data.extend(self.get_sensor_group(1))  # Group 1 (skip group 0 data)
            data.extend(self.get_sensor_group(2))  # Group 2 (skip overlapping data)
            data.extend(self.get_sensor_group(3))  # Group 3 (skip overlapping data)  
            data.extend(self.get_sensor_group(4))  # Group 4
            data.extend(self.get_sensor_group(5))  # Group 5
            return bytes(data[:52])  # Truncate to 52 bytes
        
        else:
            # Grupo desconocido
            return b'\x00' * self.RESPONSE_SIZES.get(group_id, 1)
    
    def handle_command(self, command, data):
        """Maneja un comando del Open Interface"""
        self.last_command_time = time.time()
        
        if command == 128:  # START
            self.oi_mode = OIMode.PASSIVE
            logger.info("Comando START - Modo PASSIVE")
            return b"iRobot Create 2\r\n"
        
        elif command == 129:  # BAUD
            if data:
                baud_code = data[0]
                logger.info(f"Comando BAUD - Código: {baud_code}")
        
        elif command == 130:  # CONTROL (deprecated, use SAFE)
            if self.oi_mode == OIMode.PASSIVE:
                self.oi_mode = OIMode.SAFE
                logger.info("Comando CONTROL - Modo SAFE")
        
        elif command == 131:  # SAFE
            if self.oi_mode == OIMode.PASSIVE:
                self.oi_mode = OIMode.SAFE
                logger.info("Comando SAFE - Modo SAFE")
        
        elif command == 132:  # FULL
            if self.oi_mode in [OIMode.PASSIVE, OIMode.SAFE]:
                self.oi_mode = OIMode.FULL
                logger.info("Comando FULL - Modo FULL")
        
        elif command == 133:  # POWER
            logger.info("Comando POWER - Apagando robot")
            self.oi_mode = OIMode.OFF
        
        elif command == 134:  # SPOT
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL]:
                self.is_cleaning = True
                self.oi_mode = OIMode.PASSIVE
                logger.info("Comando SPOT - Limpieza localizada")
        
        elif command == 135:  # CLEAN
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL]:
                self.is_cleaning = True
                self.oi_mode = OIMode.PASSIVE
                logger.info("Comando CLEAN - Limpieza normal")
        
        elif command == 136:  # MAX
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL]:
                self.is_cleaning = True
                self.oi_mode = OIMode.PASSIVE
                logger.info("Comando MAX - Limpieza máxima")
        
        elif command == 137:  # DRIVE
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL] and len(data) >= 4:
                velocity, radius = struct.unpack('>hh', data[:4])
                self.requested_velocity = velocity
                self.requested_radius = radius
                self.movement_start_time = time.time()
                self.movement_duration = 2.0  # Simular movimiento por 2 segundos
                logger.info(f"Comando DRIVE - Velocidad: {velocity}, Radio: {radius}")
        
        elif command == 138:  # MOTORS
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL] and data:
                motor_bits = data[0]
                logger.info(f"Comando MOTORS - Bits: {motor_bits:08b}")
        
        elif command == 139:  # LEDS
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL] and len(data) >= 3:
                led_bits, power_color, power_intensity = struct.unpack('BBB', data[:3])
                logger.info(f"Comando LEDS - Bits: {led_bits:08b}, Color: {power_color}, Intensidad: {power_intensity}")
        
        elif command == 140:  # SONG
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL] and len(data) >= 2:
                song_number = data[0]
                song_length = data[1]
                if len(data) >= 2 + song_length * 2:
                    notes = []
                    for i in range(song_length):
                        note = data[2 + i * 2]
                        duration = data[2 + i * 2 + 1]
                        notes.append((note, duration))
                    self.songs[song_number] = notes
                    logger.info(f"Comando SONG - Número: {song_number}, Notas: {len(notes)}")
        
        elif command == 141:  # PLAY
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL] and data:
                song_number = data[0]
                if song_number in self.songs:
                    self.current_song = song_number
                    self.song_playing = True
                    # Simular que la canción termina después de un tiempo
                    threading.Timer(3.0, self._stop_song).start()
                    logger.info(f"Comando PLAY - Canción: {song_number}")
        
        elif command == 142:  # SENSORS
            if data:
                sensor_id = data[0]
                response = self.get_sensor_data(sensor_id)
                logger.info(f"Comando SENSORS - ID: {sensor_id}, Respuesta: {response.hex()}")
                return response
        
        elif command == 143:  # QUERY LIST
            if data:
                packet_id = data[0]
                if packet_id <= 6:  # Sensor group
                    response = self.get_sensor_group(packet_id)
                else:  # Individual sensor
                    response = self.get_sensor_data(packet_id)
                logger.info(f"Comando QUERY LIST - ID: {packet_id}, Respuesta: {response.hex()}")
                return response
        
        elif command == 144:  # DOCK
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL]:
                self.is_docked = True
                self.is_charging = True
                self.oi_mode = OIMode.PASSIVE
                logger.info("Comando DOCK - Buscando base")
        
        elif command == 145:  # DRIVE DIRECT
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL] and len(data) >= 4:
                right_velocity, left_velocity = struct.unpack('>hh', data[:4])
                self.requested_right_velocity = right_velocity
                self.requested_left_velocity = left_velocity
                self.movement_start_time = time.time()
                self.movement_duration = 2.0
                logger.info(f"Comando DRIVE DIRECT - Derecha: {right_velocity}, Izquierda: {left_velocity}")
        
        elif command == 146:  # DRIVE PWM
            if self.oi_mode in [OIMode.SAFE, OIMode.FULL] and len(data) >= 4:
                right_pwm, left_pwm = struct.unpack('>hh', data[:4])
                # Simular PWM como velocidad
                self.requested_right_velocity = right_pwm * 5
                self.requested_left_velocity = left_pwm * 5
                self.movement_start_time = time.time()
                self.movement_duration = 2.0
                logger.info(f"Comando DRIVE PWM - Derecha: {right_pwm}, Izquierda: {left_pwm}")
        
        elif command == 173:  # STOP
            self.oi_mode = OIMode.OFF
            logger.info("Comando STOP - Robot detenido")
        
        else:
            logger.warning(f"Comando desconocido: {command}")
        
        return b''
    
    def _stop_song(self):
        """Para la reproducción de la canción"""
        self.song_playing = False
        self.current_song = 0
        logger.info("Canción terminada")


def create_virtual_ports():
    """Crea puertos virtuales usando socat"""
    for link in ["/tmp/roomba_front", "/tmp/roomba_back"]:
        if os.path.exists(link):
            os.remove(link)
            logger.info(f"Eliminado enlace previo: {link}")

    logger.info("Creando puertos virtuales con socat...")
    process = subprocess.Popen([
        "socat",
        "-d", "-d",
        "PTY,link=/tmp/roomba_front,raw,echo=0",
        "PTY,link=/tmp/roomba_back,raw,echo=0"
    ], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
    time.sleep(2)  # Esperar a que se creen los puertos

    if not os.path.exists("/tmp/roomba_front") or not os.path.exists("/tmp/roomba_back"):
        process.terminate()
        process.wait()
        raise RuntimeError("No se pudieron crear los puertos virtuales")

    logger.info("Puertos virtuales creados:")
    logger.info("  /tmp/roomba_front -> Cliente (librería Create2)")
    logger.info("  /tmp/roomba_back  -> Simulador")
    
    return process


def main():
    """Función principal del simulador"""
    logger.info("=== Simulador de Roomba Create2 ===")
    logger.info("Protocolo Open Interface compatible")
    
    # Crear puertos virtuales
    try:
        socat_process = create_virtual_ports()
    except RuntimeError as e:
        logger.error(f"Error creando puertos: {e}")
        return
    
    # Inicializar simulador
    simulator = RoombaSimulator()
    
    # Conectar al puerto del simulador
    try:
        ser = serial.Serial('/tmp/roomba_back', baudrate=115200, timeout=0.1)
        logger.info("Simulador conectado al puerto serie")
    except Exception as e:
        logger.error(f"Error conectando al puerto serie: {e}")
        socat_process.terminate()
        return
    
    # Buffer para manejar comandos
    buffer = bytearray()
    
    logger.info("Simulador iniciado - Esperando comandos...")
    
    try:
        while True:
            # Leer datos del puerto serie
            data = ser.read(64)
            if data:
                buffer.extend(data)
                logger.debug(f"Datos recibidos: {data.hex()}")
            
            # Procesar comandos en el buffer
            i = 0
            while i < len(buffer):
                command = buffer[i]
                
                # Determinar cuántos bytes necesita el comando
                command_data = b''
                bytes_needed = 1
                
                if command == 129:  # BAUD
                    bytes_needed = 2
                elif command in [136, 144, 145]:  # DRIVE, DRIVE_DIRECT, DRIVE_PWM
                    bytes_needed = 5
                elif command == 138:  # LEDS
                    bytes_needed = 4
                elif command == 139:  # SONG
                    if i + 2 < len(buffer):
                        song_length = buffer[i + 2]
                        bytes_needed = 3 + song_length * 2
                    else:
                        break  # Esperar más datos
                elif command in [140, 141, 142]:  # PLAY, SENSORS, QUERY_LIST
                    bytes_needed = 2
                
                # Verificar si tenemos suficientes datos
                if i + bytes_needed > len(buffer):
                    break
                
                # Extraer datos del comando
                if bytes_needed > 1:
                    command_data = buffer[i+1:i+bytes_needed]
                
                # Procesar comando
                response = simulator.handle_command(command, command_data)
                
                # Enviar respuesta si es necesaria
                if response:
                    ser.write(response)
                    logger.debug(f"Respuesta enviada: {response.hex()}")
                
                i += bytes_needed
            
            # Remover datos procesados del buffer
            if i > 0:
                buffer = buffer[i:]
            
            # Pequeña pausa para no saturar la CPU
            time.sleep(0.001)
    
    except KeyboardInterrupt:
        logger.info("Cerrando simulador...")
    except Exception as e:
        logger.error(f"Error en el simulador: {e}")
    finally:
        # Limpiar recursos
        try:
            ser.close()
        except:
            pass
        try:
            socat_process.terminate()
            socat_process.wait()
        except:
            pass
        logger.info("Simulador detenido")


if __name__ == "__main__":
    main()
