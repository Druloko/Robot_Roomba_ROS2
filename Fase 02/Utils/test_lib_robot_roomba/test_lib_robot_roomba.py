#!/usr/bin/env python3
"""
Test completo para la librería lib_robot_roomba.py
Verifica todas las funcionalidades de la librería usando el simulador de Roomba
Compatible con el nodo ROS2 Communication_Node_v0.1.0.py
"""

import sys
import os
from pathlib import Path
import unittest
import time
import json
import threading
import subprocess
from unittest.mock import MagicMock, patch

# Añadir el directorio padre al path para acceder a las librerías
current_dir = Path(__file__).parent
parent_dir = current_dir.parent
sys.path.insert(0, str(parent_dir))

from Librerias.roomba.lib_robot_roomba import Robot
import logging

# Configurar logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

class MockROS2Node:
    """Mock del nodo ROS2 para pruebas"""
    def __init__(self):
        self.logger = logging.getLogger(__name__)
    
    def get_logger(self):
        return self.logger

class TestLibRobotRoomba(unittest.TestCase):
    """Test suite para la librería lib_robot_roomba.py"""
    
    @classmethod
    def setUpClass(cls):
        """Configuración inicial para todas las pruebas"""
        logger.info("=== Iniciando Test Suite para lib_robot_roomba.py ===")
        
        # Verificar que los puertos virtuales existen
        if not (os.path.exists("/tmp/roomba_front") and os.path.exists("/tmp/roomba_back")):
            logger.warning("Los puertos virtuales no existen. Intentando iniciar simulador...")
            cls.start_simulator()
            time.sleep(3)
        
        # Verificar nuevamente
        if not (os.path.exists("/tmp/roomba_front") and os.path.exists("/tmp/roomba_back")):
            raise RuntimeError("No se pudieron crear los puertos virtuales. Inicia el simulador manualmente.")
        
        logger.info("✓ Puertos virtuales disponibles")
    
    @classmethod
    def start_simulator(cls):
        """Inicia el simulador si no está ejecutándose"""
        try:
            simulator_path = current_dir.parent / "simulador" / "simulador_roomba.py"
            if simulator_path.exists():
                cls.simulator_process = subprocess.Popen([sys.executable, str(simulator_path)])
                logger.info("Simulador iniciado")
            else:
                logger.error("Simulador no encontrado")
        except Exception as e:
            logger.error(f"Error iniciando simulador: {e}")
    
    def setUp(self):
        """Configuración para cada prueba"""
        self.mock_node = MockROS2Node()
        self.robot = Robot(self.mock_node)
        
    def tearDown(self):
        """Limpieza después de cada prueba"""
        if self.robot and self.robot.connected:
            self.robot.disconnect()
        time.sleep(0.5)
    
    def test_01_initialization(self):
        """Test: Inicialización correcta de la librería"""
        logger.info("Test 01: Inicialización de la librería")
        
        # Verificar que la instancia se crea correctamente
        self.assertIsNotNone(self.robot)
        self.assertFalse(self.robot.connected)
        self.assertEqual(self.robot.oi_mode, "FULL")
        
        # Verificar que los sensores se inicializan correctamente
        self.assertIsNotNone(self.robot._sensors)
        self.assertIn('movement', self.robot._sensors)
        self.assertIn('security', self.robot._sensors)
        self.assertIn('power', self.robot._sensors)
        self.assertIn('misc', self.robot._sensors)
        self.assertIn('state', self.robot._sensors)
        
        # Verificar que los actuadores se inicializan correctamente
        self.assertIsNotNone(self.robot._actuators)
        self.assertIn('movement', self.robot._actuators)
        self.assertIn('cleaning', self.robot._actuators)
        self.assertIn('brushes', self.robot._actuators)
        self.assertIn('leds', self.robot._actuators)
        
        logger.info("✓ Inicialización correcta")
    
    def test_02_connection_tcp(self):
        """Test: Conexión TCP con el simulador"""
        logger.info("Test 02: Conexión TCP")
        
        # Conectar usando TCP
        result = self.robot.connect_robot(
            connection_type='TCP',
            address='localhost',
            port=9001,
            connection_mode='FULL'
        )
        
        self.assertTrue(result)
        self.assertTrue(self.robot.connected)
        
        # Verificar que el robot responde
        status = self.robot.get_status()
        self.assertIsNotNone(status)
        self.assertTrue(status['connected'])
        
        logger.info("✓ Conexión TCP exitosa")
    
    def test_03_connection_serial(self):
        """Test: Conexión Serial con el simulador"""
        logger.info("Test 03: Conexión Serial")
        
        # Conectar usando Serial
        result = self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        self.assertTrue(result)
        self.assertTrue(self.robot.connected)
        
        logger.info("✓ Conexión Serial exitosa")
    
    def test_04_sensor_reading(self):
        """Test: Lectura de sensores"""
        logger.info("Test 04: Lectura de sensores")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Actualizar sensores
        self.robot.update_sensors()
        
        # Leer sensores
        sensors = self.robot.read_sensors()
        
        # Verificar estructura de datos
        self.assertIsInstance(sensors, dict)
        self.assertIn('movement', sensors)
        self.assertIn('security', sensors)
        self.assertIn('power', sensors)
        self.assertIn('misc', sensors)
        self.assertIn('state', sensors)
        
        # Verificar algunos valores específicos
        movement = sensors['movement']
        self.assertIn('distance', movement)
        self.assertIn('angle', movement)
        self.assertIn('left_encoder_counts', movement)
        self.assertIn('right_encoder_counts', movement)
        
        security = sensors['security']
        self.assertIn('bump_left', security)
        self.assertIn('bump_right', security)
        self.assertIn('wall_sensor', security)
        
        power = sensors['power']
        self.assertIn('voltage', power)
        self.assertIn('current', power)
        self.assertIn('battery_charge', power)
        
        logger.info("✓ Lectura de sensores exitosa")
    
    def test_05_movement_commands(self):
        """Test: Comandos de movimiento"""
        logger.info("Test 05: Comandos de movimiento")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test drive_forward
        result = self.robot.drive_forward(speed=200, duration=1)
        self.assertTrue(result)
        time.sleep(1.5)
        
        # Test drive_backward
        result = self.robot.drive_backward(speed=200, duration=1)
        self.assertTrue(result)
        time.sleep(1.5)
        
        # Test spin
        result = self.robot.spin(direction='left', speed=100, duration=1)
        self.assertTrue(result)
        time.sleep(1.5)
        
        result = self.robot.spin(direction='right', speed=100, duration=1)
        self.assertTrue(result)
        time.sleep(1.5)
        
        # Test drive_manual
        result = self.robot.drive_manual(left_speed=100, right_speed=150, duration=1)
        self.assertTrue(result)
        time.sleep(1.5)
        
        logger.info("✓ Comandos de movimiento exitosos")
    
    def test_06_cleaning_commands(self):
        """Test: Comandos de limpieza"""
        logger.info("Test 06: Comandos de limpieza")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test start_cleaning
        result = self.robot.start_cleaning()
        self.assertTrue(result)
        time.sleep(1)
        
        # Test start_max_cleaning
        result = self.robot.start_max_cleaning()
        self.assertTrue(result)
        time.sleep(1)
        
        # Test stop_cleaning
        result = self.robot.stop_cleaning()
        self.assertTrue(result)
        time.sleep(1)
        
        logger.info("✓ Comandos de limpieza exitosos")
    
    def test_07_brush_commands(self):
        """Test: Comandos de cepillos"""
        logger.info("Test 07: Comandos de cepillos")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test set_brushes
        result = self.robot.set_brushes(main_brush=True, side_brush=True, vacuum=True)
        self.assertTrue(result)
        time.sleep(1)
        
        # Test stop_brushes
        result = self.robot.stop_brushes()
        self.assertTrue(result)
        time.sleep(1)
        
        logger.info("✓ Comandos de cepillos exitosos")
    
    def test_08_led_commands(self):
        """Test: Comandos de LEDs"""
        logger.info("Test 08: Comandos de LEDs")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test set_leds con diferentes colores
        result = self.robot.set_leds(color=255, intensity=255)
        self.assertTrue(result)
        time.sleep(1)
        
        result = self.robot.set_leds(color=0, intensity=128)
        self.assertTrue(result)
        time.sleep(1)
        
        result = self.robot.set_leds(color=128, intensity=0)
        self.assertTrue(result)
        time.sleep(1)
        
        logger.info("✓ Comandos de LEDs exitosos")
    
    def test_09_song_commands(self):
        """Test: Comandos de canciones"""
        logger.info("Test 09: Comandos de canciones")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test play_song
        notes = [(60, 32), (62, 32), (64, 32), (65, 32)]  # Do, Re, Mi, Fa
        result = self.robot.play_song(song_number=1, notes=notes)
        self.assertTrue(result)
        time.sleep(2)
        
        # Test stop_song
        result = self.robot.stop_song()
        self.assertTrue(result)
        time.sleep(1)
        
        logger.info("✓ Comandos de canciones exitosos")
    
    def test_10_dock_commands(self):
        """Test: Comandos de dock"""
        logger.info("Test 10: Comandos de dock")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test seek_dock
        result = self.robot.seek_dock()
        self.assertTrue(result)
        time.sleep(1)
        
        logger.info("✓ Comandos de dock exitosos")
    
    def test_11_wake_command(self):
        """Test: Comando wake"""
        logger.info("Test 11: Comando wake")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test wake
        result = self.robot.wake()
        self.assertTrue(result)
        time.sleep(1)
        
        logger.info("✓ Comando wake exitoso")
    
    def test_12_status_reporting(self):
        """Test: Reporte de estado"""
        logger.info("Test 12: Reporte de estado")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test get_status sin sensores
        status = self.robot.get_status(include_sensors=False)
        self.assertIsInstance(status, dict)
        self.assertIn('connected', status)
        self.assertIn('oi_mode', status)
        self.assertIn('connection_details', status)
        
        # Test get_status con sensores
        status = self.robot.get_status(include_sensors=True)
        self.assertIsInstance(status, dict)
        self.assertIn('connected', status)
        self.assertIn('sensors', status)
        self.assertIn('actuators', status)
        
        logger.info("✓ Reporte de estado exitoso")
    
    def test_13_reconnection(self):
        """Test: Reconexión"""
        logger.info("Test 13: Reconexión")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Desconectar
        self.robot.disconnect()
        self.assertFalse(self.robot.connected)
        
        # Reconectar
        result = self.robot.reconnect()
        self.assertTrue(result)
        self.assertTrue(self.robot.connected)
        
        logger.info("✓ Reconexión exitosa")
    
    def test_14_error_handling(self):
        """Test: Manejo de errores"""
        logger.info("Test 14: Manejo de errores")
        
        # Test conexión a puerto inexistente
        result = self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/puerto_inexistente',
            connection_mode='FULL'
        )
        self.assertFalse(result)
        
        # Test comandos sin conexión
        result = self.robot.drive_forward(speed=200, duration=1)
        self.assertFalse(result)
        
        result = self.robot.set_leds(color=255, intensity=255)
        self.assertFalse(result)
        
        logger.info("✓ Manejo de errores exitoso")
    
    def test_15_sensor_filtering(self):
        """Test: Filtrado de sensores"""
        logger.info("Test 15: Filtrado de sensores")
        
        # Conectar primero
        self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        
        # Test update_sensors con categorías específicas
        self.robot.update_sensors(categories=['movement'])
        sensors = self.robot.read_sensors()
        
        # Verificar que solo se actualizan las categorías solicitadas
        self.assertIn('movement', sensors)
        
        # Test update_sensors con múltiples categorías
        self.robot.update_sensors(categories=['movement', 'security'])
        sensors = self.robot.read_sensors()
        
        self.assertIn('movement', sensors)
        self.assertIn('security', sensors)
        
        logger.info("✓ Filtrado de sensores exitoso")
    
    def test_16_integration_with_ros2_node(self):
        """Test: Integración con nodo ROS2"""
        logger.info("Test 16: Integración con nodo ROS2")
        
        # Simular uso desde el nodo ROS2
        mock_node = MockROS2Node()
        robot = Robot(mock_node)
        
        # Conectar
        result = robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        self.assertTrue(result)
        
        # Simular el workflow del nodo ROS2
        robot.update_sensors(categories=['movement'])
        sensors = robot.read_sensors()
        
        # Verificar que los datos son compatibles con los mensajes ROS2
        movement = sensors.get('movement', {})
        self.assertIn('distance', movement)
        self.assertIn('angle', movement)
        self.assertIn('requested_left_velocity', movement)
        self.assertIn('requested_right_velocity', movement)
        
        # Ejecutar comandos como lo haría el nodo ROS2
        result = robot.drive_manual(left_speed=100, right_speed=150, duration=1)
        self.assertTrue(result)
        
        robot.disconnect()
        logger.info("✓ Integración con nodo ROS2 exitosa")
    
    def test_17_comprehensive_workflow(self):
        """Test: Workflow completo"""
        logger.info("Test 17: Workflow completo")
        
        # 1. Conexión
        result = self.robot.connect_robot(
            connection_type='Serial',
            serial_port='/tmp/roomba_front',
            connection_mode='FULL'
        )
        self.assertTrue(result)
        
        # 2. Verificar estado inicial
        status = self.robot.get_status(include_sensors=True)
        self.assertTrue(status['connected'])
        
        # 3. Configurar actuadores
        self.robot.set_leds(color=255, intensity=255)
        self.robot.set_brushes(main_brush=True, side_brush=True, vacuum=True)
        
        # 4. Ejecutar secuencia de movimiento
        self.robot.drive_forward(speed=200, duration=1)
        time.sleep(1.5)
        
        self.robot.spin(direction='left', speed=100, duration=1)
        time.sleep(1.5)
        
        self.robot.drive_backward(speed=200, duration=1)
        time.sleep(1.5)
        
        # 5. Leer sensores después del movimiento
        self.robot.update_sensors()
        sensors = self.robot.read_sensors()
        
        # 6. Verificar datos de sensores
        self.assertIsInstance(sensors, dict)
        self.assertIn('movement', sensors)
        
        # 7. Limpiar y desconectar
        self.robot.stop_brushes()
        self.robot.set_leds(color=0, intensity=0)
        self.robot.disconnect()
        
        logger.info("✓ Workflow completo exitoso")

def run_tests():
    """Ejecutar todos los tests"""
    logger.info("=== Iniciando Test Suite Completo ===")
    
    # Verificar prerrequisitos
    logger.info("Verificando prerrequisitos...")
    
    # Verificar que el simulador esté disponible
    simulator_path = current_dir.parent / "simulador" / "simulador_roomba.py"
    if not simulator_path.exists():
        logger.error(f"Simulador no encontrado: {simulator_path}")
        return False
    
    # Verificar que las librerías estén disponibles
    lib_path = parent_dir / "Librerias" / "roomba" / "lib_robot_roomba.py"
    if not lib_path.exists():
        logger.error(f"Librería no encontrada: {lib_path}")
        return False
    
    logger.info("✓ Prerrequisitos verificados")
    
    # Ejecutar tests
    suite = unittest.TestLoader().loadTestsFromTestCase(TestLibRobotRoomba)
    runner = unittest.TextTestRunner(verbosity=2)
    result = runner.run(suite)
    
    # Resumen de resultados
    logger.info("=== Resumen de Resultados ===")
    logger.info(f"Tests ejecutados: {result.testsRun}")
    logger.info(f"Errores: {len(result.errors)}")
    logger.info(f"Fallos: {len(result.failures)}")
    
    if result.errors:
        logger.error("Errores encontrados:")
        for test, error in result.errors:
            logger.error(f"  {test}: {error}")
    
    if result.failures:
        logger.error("Fallos encontrados:")
        for test, failure in result.failures:
            logger.error(f"  {test}: {failure}")
    
    if result.wasSuccessful():
        logger.info("✅ TODOS LOS TESTS PASARON EXITOSAMENTE")
        return True
    else:
        logger.error("❌ ALGUNOS TESTS FALLARON")
        return False

if __name__ == '__main__':
    success = run_tests()
    sys.exit(0 if success else 1) 