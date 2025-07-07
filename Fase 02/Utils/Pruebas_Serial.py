#!/usr/bin/env python3
"""
Script de pruebas para el simulador de Roomba
Demuestra el funcionamiento de la librería irobot con el simulador
Compatible con el nodo ROS2 y la librería lib_robot_roomba
"""

import sys
import os
from pathlib import Path

# Añadir el directorio padre al path para acceder a las librerías
current_dir = Path(__file__).parent
parent_dir = current_dir.parent
sys.path.insert(0, str(parent_dir))

from Librerias.irobot.robots.create2 import Create2
from Librerias.irobot.openinterface.constants import MODES
import time
import json
import logging

# Configurar logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

def test_connection():
    """Prueba la conexión con el simulador"""
    logger.info("=== Prueba de Conexión ===")
    
    try:
        # Conectar al simulador
        robot = Create2("/tmp/roomba_front")
        logger.info("✓ Conexión exitosa al simulador")
        
        # Verificar modo inicial
        logger.info(f"Modo inicial: {robot.oi_mode}")
        
        # Cambiar a modo FULL
        robot.oi_mode = MODES.FULL
        logger.info(f"Modo después de cambiar a FULL: {robot.oi_mode}")
        
        return robot
        
    except Exception as e:
        logger.error(f"✗ Error de conexión: {e}")
        return None

def test_sensors(robot):
    """Prueba la lectura de sensores"""
    logger.info("=== Prueba de Sensores ===")
    
    try:
        # Sensores básicos
        logger.info("Sensores básicos:")
        logger.info(f"  Modo OI: {robot.oi_mode}")
        logger.info(f"  Batería: {robot.battery_charge} mAh / {robot.battery_capacity} mAh")
        logger.info(f"  Voltaje: {robot.voltage} mV")
        logger.info(f"  Corriente: {robot.current} mA")
        logger.info(f"  Temperatura: {robot.temperature}°C")
        
        # Sensores de movimiento
        logger.info("Sensores de movimiento:")
        logger.info(f"  Distancia: {robot.distance} mm")
        logger.info(f"  Ángulo: {robot.angle}°")
        logger.info(f"  Velocidad solicitada: {robot.requested_velocity} mm/s")
        logger.info(f"  Radio solicitado: {robot.requested_radius} mm")
        
        # Sensores de bumper
        logger.info("Sensores de bumper:")
        logger.info(f"  Bump izquierdo: {robot.bumps_and_wheel_drops.bump_left}")
        logger.info(f"  Bump derecho: {robot.bumps_and_wheel_drops.bump_right}")
        logger.info(f"  Caída rueda izquierda: {robot.bumps_and_wheel_drops.wheel_drop_left}")
        logger.info(f"  Caída rueda derecha: {robot.bumps_and_wheel_drops.wheel_drop_right}")
        
        # Sensores de cliff
        logger.info("Sensores de cliff:")
        logger.info(f"  Cliff izquierdo: {robot.cliff_left}")
        logger.info(f"  Cliff frontal izquierdo: {robot.cliff_front_left}")
        logger.info(f"  Cliff frontal derecho: {robot.cliff_front_right}")
        logger.info(f"  Cliff derecho: {robot.cliff_right}")
        
        # Sensores de pared
        logger.info("Sensores de pared:")
        logger.info(f"  Sensor de pared: {robot.wall_sensor}")
        logger.info(f"  Señal de pared: {robot.wall_signal}")
        logger.info(f"  Pared virtual: {robot.virtual_wall}")
        
        # Botones
        logger.info("Botones:")
        logger.info(f"  Clean: {robot.buttons.clean}")
        logger.info(f"  Spot: {robot.buttons.spot}")
        logger.info(f"  Dock: {robot.buttons.dock}")
        
        logger.info("✓ Lectura de sensores exitosa")
        
    except Exception as e:
        logger.error(f"✗ Error leyendo sensores: {e}")

def test_movement(robot):
    """Prueba comandos de movimiento"""
    logger.info("=== Prueba de Movimiento ===")
    
    try:
        # Movimiento hacia adelante
        logger.info("Moviendo hacia adelante...")
        robot.drive_straight(200)  # 200 mm/s
        time.sleep(2)
        logger.info(f"Distancia después del movimiento: {robot.distance} mm")
        
        # Parar
        logger.info("Parando...")
        robot.drive_straight(0)
        time.sleep(1)
        
        # Giro a la izquierda
        logger.info("Girando a la izquierda...")
        robot.spin_left(100)
        time.sleep(2)
        logger.info(f"Ángulo después del giro: {robot.angle}°")
        
        # Parar
        robot.drive_straight(0)
        time.sleep(1)
        
        # Movimiento directo de ruedas
        logger.info("Movimiento directo de ruedas...")
        robot.drive_direct(100, 200)  # Derecha: 100, Izquierda: 200
        time.sleep(2)
        logger.info(f"Velocidad derecha: {robot.requested_right_velocity}")
        logger.info(f"Velocidad izquierda: {robot.requested_left_velocity}")
        
        # Parar
        robot.drive_direct(0, 0)
        
        logger.info("✓ Pruebas de movimiento exitosas")
        
    except Exception as e:
        logger.error(f"✗ Error en movimiento: {e}")

def test_actuators(robot):
    """Prueba actuadores (LEDs, motores, etc.)"""
    logger.info("=== Prueba de Actuadores ===")
    
    try:
        # LEDs
        logger.info("Probando LEDs...")
        robot.set_leds(debris=True, spot=True, dock=False, check_robot=True, 
                      power_color=255, power_intensity=255)
        time.sleep(2)
        
        # Apagar LEDs
        robot.set_leds(debris=False, spot=False, dock=False, check_robot=False, 
                      power_color=0, power_intensity=0)
        time.sleep(1)
        
        # Motores de limpieza
        logger.info("Probando motores de limpieza...")
        robot.set_motors(main_brush_on=True, side_brush=True, vacuum=True)
        time.sleep(2)
        
        # Parar motores
        robot.set_motors(main_brush_on=False, side_brush=False, vacuum=False)
        time.sleep(1)
        
        logger.info("✓ Pruebas de actuadores exitosas")
        
    except Exception as e:
        logger.error(f"✗ Error en actuadores: {e}")

def test_songs(robot):
    """Prueba sistema de canciones"""
    logger.info("=== Prueba de Canciones ===")
    
    try:
        # Crear canción simple
        logger.info("Creando canción...")
        notes = [(60, 32), (62, 32), (64, 32), (65, 32)]  # Do, Re, Mi, Fa
        robot.set_song(1, notes)
        time.sleep(1)
        
        # Reproducir canción
        logger.info("Reproduciendo canción...")
        robot.play_song(1)
        logger.info(f"Canción reproduciéndose: {robot.is_song_playing}")
        logger.info(f"Número de canción: {robot.song_number}")
        
        # Esperar a que termine
        time.sleep(4)
        logger.info(f"Canción terminada: {not robot.is_song_playing}")
        
        logger.info("✓ Pruebas de canciones exitosas")
        
    except Exception as e:
        logger.error(f"✗ Error en canciones: {e}")

def test_cleaning_modes(robot):
    """Prueba modos de limpieza"""
    logger.info("=== Prueba de Modos de Limpieza ===")
    
    try:
        # Modo FULL para poder limpiar
        robot.oi_mode = MODES.FULL
        logger.info(f"Modo actual: {robot.oi_mode}")
        
        # Limpieza spot
        logger.info("Iniciando limpieza spot...")
        robot.clean_spot()
        time.sleep(1)
        logger.info(f"Modo después de clean_spot: {robot.oi_mode}")
        
        # Volver a modo FULL
        robot.oi_mode = MODES.FULL
        
        # Limpieza normal
        logger.info("Iniciando limpieza normal...")
        robot.clean()
        time.sleep(1)
        logger.info(f"Modo después de clean: {robot.oi_mode}")
        
        # Volver a modo FULL
        robot.oi_mode = MODES.FULL
        
        logger.info("✓ Pruebas de modos de limpieza exitosas")
        
    except Exception as e:
        logger.error(f"✗ Error en modos de limpieza: {e}")

def test_sensor_groups(robot):
    """Prueba grupos de sensores"""
    logger.info("=== Prueba de Grupos de Sensores ===")
    
    try:
        # Grupo 0 - Sensores básicos
        logger.info("Probando grupo 0 (sensores básicos)...")
        group0 = robot.sensor_group0
        logger.info(f"  Batería: {group0.battery_charge} mAh")
        logger.info(f"  Voltaje: {group0.voltage} mV")
        logger.info(f"  Distancia: {group0.distance} mm")
        logger.info(f"  Ángulo: {group0.angle}°")
        
        # Grupo 1 - Sensores de seguridad
        logger.info("Probando grupo 1 (sensores de seguridad)...")
        group1 = robot.sensor_group1
        logger.info(f"  Bumper izquierdo: {group1.bumps_and_wheel_drops.bump_left}")
        logger.info(f"  Bumper derecho: {group1.bumps_and_wheel_drops.bump_right}")
        logger.info(f"  Cliff izquierdo: {group1.cliff_left_sensor}")
        logger.info(f"  Sensor de pared: {group1.wall_sensor}")
        
        # Grupo 2 - Sensores de movimiento
        logger.info("Probando grupo 2 (sensores de movimiento)...")
        group2 = robot.sensor_group2
        logger.info(f"  Distancia: {group2.distance} mm")
        logger.info(f"  Ángulo: {group2.angle}°")
        logger.info(f"  Botón clean: {group2.buttons.clean}")
        
        # Grupo 3 - Sensores de energía
        logger.info("Probando grupo 3 (sensores de energía)...")
        group3 = robot.sensor_group3
        logger.info(f"  Estado de carga: {group3.charging_state}")
        logger.info(f"  Batería: {group3.battery_charge} mAh")
        logger.info(f"  Temperatura: {group3.temperature}°C")
        
        logger.info("✓ Pruebas de grupos de sensores exitosas")
        
    except Exception as e:
        logger.error(f"✗ Error en grupos de sensores: {e}")

def test_compatibility_with_ros2_node(robot):
    """Prueba compatibilidad con el nodo ROS2"""
    logger.info("=== Prueba de Compatibilidad con Nodo ROS2 ===")
    
    try:
        # Simular los datos que el nodo ROS2 necesita
        logger.info("Simulando datos para nodo ROS2...")
        
        # Datos de movimiento
        movement_data = {
            "distance": robot.distance,
            "angle": robot.angle,
            "left_encoder_counts": robot.left_encoder_counts,
            "right_encoder_counts": robot.right_encoder_counts,
            "requested_left_velocity": robot.requested_left_velocity,
            "requested_right_velocity": robot.requested_right_velocity,
            "requested_radius": robot.requested_radius,
            "requested_velocity": robot.requested_velocity,
        }
        
        # Datos de seguridad
        security_data = {
            "bump_left": robot.bumps_and_wheel_drops.bump_left,
            "bump_right": robot.bumps_and_wheel_drops.bump_right,
            "wheel_drop_left": robot.bumps_and_wheel_drops.wheel_drop_left,
            "wheel_drop_right": robot.bumps_and_wheel_drops.wheel_drop_right,
            "wall_sensor": robot.wall_sensor,
            "virtual_wall": robot.virtual_wall,
            "cliff_left": robot.cliff_left,
            "cliff_right": robot.cliff_right,
            "cliff_front_left": robot.cliff_front_left,
            "cliff_front_right": robot.cliff_front_right,
        }
        
        # Datos de energía
        power_data = {
            "voltage": robot.voltage,
            "current": robot.current,
            "temperature": robot.temperature,
            "battery_charge": robot.battery_charge,
            "battery_capacity": robot.battery_capacity,
            "home_base": robot.charging_sources.home_base,
            "internal_charger": robot.charging_sources.internal_charger,
        }
        
        # Datos misceláneos
        misc_data = {
            "is_song_playing": robot.is_song_playing,
            "song_number": robot.song_number,
            "buttons": {
                "clean": robot.buttons.clean,
                "spot": robot.buttons.spot,
                "dock": robot.buttons.dock,
            }
        }
        
        # Datos de estado
        state_data = {
            "oi_mode": str(robot.oi_mode),
            "is_charging": robot.charging_sources.internal_charger or robot.charging_sources.home_base,
            "battery_charge": robot.battery_charge,
        }
        
        logger.info("Datos de movimiento:")
        logger.info(f"  {json.dumps(movement_data, indent=2)}")
        
        logger.info("Datos de seguridad:")
        logger.info(f"  {json.dumps(security_data, indent=2)}")
        
        logger.info("Datos de energía:")
        logger.info(f"  {json.dumps(power_data, indent=2)}")
        
        logger.info("Datos misceláneos:")
        logger.info(f"  {json.dumps(misc_data, indent=2)}")
        
        logger.info("Datos de estado:")
        logger.info(f"  {json.dumps(state_data, indent=2)}")
        
        logger.info("✓ Datos compatibles con nodo ROS2")
        
    except Exception as e:
        logger.error(f"✗ Error en compatibilidad ROS2: {e}")

def main():
    """Función principal de pruebas"""
    logger.info("=== Pruebas del Simulador de Roomba ===")
    logger.info("Asegúrate de que el simulador esté ejecutándose")
    
    # Conectar al robot
    robot = test_connection()
    if not robot:
        logger.error("No se pudo conectar al simulador. Terminando pruebas.")
        return
    
    try:
        # Ejecutar todas las pruebas
        test_sensors(robot)
        time.sleep(1)
        
        test_movement(robot)
        time.sleep(1)
        
        test_actuators(robot)
        time.sleep(1)
        
        test_songs(robot)
        time.sleep(1)
        
        test_cleaning_modes(robot)
        time.sleep(1)
        
        test_sensor_groups(robot)
        time.sleep(1)
        
        test_compatibility_with_ros2_node(robot)
        
        logger.info("=== Todas las pruebas completadas ===")
        
    except KeyboardInterrupt:
        logger.info("Pruebas interrumpidas por el usuario")
    except Exception as e:
        logger.error(f"Error durante las pruebas: {e}")
    finally:
        # Volver a modo pasivo y parar
        try:
            robot.oi_mode = MODES.PASSIVE
            robot.stop()
            logger.info("Robot detenido correctamente")
        except:
            pass

if __name__ == "__main__":
    main()
