#!/usr/bin/env python3
"""
Test completo para el nodo ROS2 Communication_Node_v0.1.0.py
Verifica todas las funcionalidades del nodo de comunicación con Roomba
Compatible con el sistema Robot_Roomba_ROS2
"""

import sys
import os
import unittest
import time
import json
import queue
from pathlib import Path
from unittest.mock import Mock, MagicMock, patch, call
import threading

# Añadir el directorio padre al path para acceder a los módulos
current_dir = Path(__file__).parent
parent_dir = current_dir.parent
sys.path.insert(0, str(parent_dir))

# Mock de ROS2 antes de importar el nodo
class MockParameter:
    def __init__(self, name, type_=None, value=None):
        self.name = name
        self.type_ = type_
        self.value = value
    
    class Type:
        DOUBLE = 'double'
        INTEGER = 'integer'
        STRING = 'string'

class MockParameterValue:
    def __init__(self, value):
        self._value = value
    
    @property
    def string_value(self):
        return str(self._value)
    
    @property
    def double_value(self):
        return float(self._value)
    
    @property
    def integer_value(self):
        return int(self._value)

class MockROS2Parameter:
    def __init__(self, value):
        self._value = value
    
    def get_parameter_value(self):
        return MockParameterValue(self._value)
    
    @property
    def value(self):
        return self._value

class MockNode:
    def __init__(self, name):
        self.name = name
        self.parameters = {}
        self.publishers = {}
        self.subscribers = {}
        self.services = {}
        self.timers = []
        self.logger = Mock()
        self.destroyed = False
    
    def get_logger(self):
        return self.logger
    
    def declare_parameter(self, name, default_value):
        self.parameters[name] = MockROS2Parameter(default_value)
    
    def get_parameter(self, name):
        return self.parameters.get(name, MockROS2Parameter(None))
    
    def set_parameters(self, parameters):
        for param in parameters:
            self.parameters[param.name] = MockROS2Parameter(param.value)
    
    def create_publisher(self, msg_type, topic, qos):
        publisher = Mock()
        publisher.msg_type = msg_type
        publisher.topic = topic
        publisher.qos = qos
        self.publishers[topic] = publisher
        return publisher
    
    def create_subscription(self, msg_type, topic, callback, qos):
        subscription = Mock()
        subscription.msg_type = msg_type
        subscription.topic = topic
        subscription.callback = callback
        subscription.qos = qos
        self.subscribers[topic] = subscription
        return subscription
    
    def create_service(self, srv_type, name, callback):
        service = Mock()
        service.srv_type = srv_type
        service.name = name
        service.callback = callback
        self.services[name] = service
        return service
    
    def create_timer(self, period, callback):
        timer = Mock()
        timer.period = period
        timer.callback = callback
        self.timers.append(timer)
        return timer
    
    def destroy_node(self):
        self.destroyed = True

# Mock de mensajes ROS2
class MockMessage:
    def __init__(self, **kwargs):
        for key, value in kwargs.items():
            setattr(self, key, value)

class MockMovement(MockMessage):
    def __init__(self):
        super().__init__(
            distance=0.0, angle=0.0, left_encoder_counts=0, right_encoder_counts=0,
            requested_left_velocity=0, requested_right_velocity=0,
            requested_radius=0, requested_velocity=0
        )

class MockSecurity(MockMessage):
    def __init__(self):
        super().__init__(
            bump_left=False, bump_right=False, wheel_drop_left=False, wheel_drop_right=False,
            wall=False, virtual_wall=False, cliff_left=0, cliff_right=0,
            cliff_front_left=0, cliff_front_right=0, cliff_left_signal=0, cliff_right_signal=0,
            cliff_front_left_signal=0, cliff_front_right_signal=0, wall_signal=0,
            light_bumper_left=0, light_bumper_right=0, light_bumper_center_left=0,
            light_bumper_center_right=0, light_bumper_front_left=0, light_bumper_front_right=0,
            dirt_detect=0
        )

class MockPower(MockMessage):
    def __init__(self):
        super().__init__(
            voltage=0.0, current=0.0, temperature=0.0, charge=0.0, capacity=0.0,
            home_base=False, internal_charger=False, ir_char_omni=0, ir_char_left=0,
            ir_char_right=0, left_wheel_overcurrent=False, right_wheel_overcurrent=False,
            main_brush_overcurrent=False, side_brush_overcurrent=False,
            left_motor_current=0, right_motor_current=0, main_brush_motor_current=0,
            side_brush_motor_current=0
        )

class MockMisc(MockMessage):
    def __init__(self):
        super().__init__(
            is_song_playing=False, song_number=0, button_clean=False, button_clock=False,
            button_day=False, button_dock=False, button_hour=False, button_minute=False,
            button_schedule=False, button_spot=False
        )

class MockState(MockMessage):
    def __init__(self):
        super().__init__(
            oi_mode="UNKNOWN", is_charging=False, battery_charge=0.0
        )

class MockString(MockMessage):
    def __init__(self, data=""):
        super().__init__(data=data)

class MockServiceRequest:
    def __init__(self, **kwargs):
        for key, value in kwargs.items():
            setattr(self, key, value)

class MockServiceResponse:
    def __init__(self, **kwargs):
        for key, value in kwargs.items():
            setattr(self, key, value)

# Configurar mocks globales
sys.modules['rclpy'] = Mock()
sys.modules['rclpy.node'] = Mock()
sys.modules['rclpy.parameter'] = Mock()
sys.modules['std_msgs'] = Mock()
sys.modules['std_msgs.msg'] = Mock()
sys.modules['roomba_msgs'] = Mock()
sys.modules['roomba_msgs.msg'] = Mock()
sys.modules['roomba_msgs.srv'] = Mock()

# Mock las clases que necesitamos
rclpy_mock = Mock()
rclpy_mock.init = Mock()
rclpy_mock.spin = Mock()
rclpy_mock.shutdown = Mock()
sys.modules['rclpy'] = rclpy_mock

# Mock las clases de mensajes
std_msgs_mock = Mock()
std_msgs_mock.String = MockString
sys.modules['std_msgs.msg'] = std_msgs_mock

roomba_msgs_mock = Mock()
roomba_msgs_mock.Movement = MockMovement
roomba_msgs_mock.Security = MockSecurity
roomba_msgs_mock.Power = MockPower
roomba_msgs_mock.Misc = MockMisc
roomba_msgs_mock.State = MockState
sys.modules['roomba_msgs.msg'] = roomba_msgs_mock

roomba_srv_mock = Mock()
roomba_srv_mock.Connect = Mock()
roomba_srv_mock.Priority = Mock()
roomba_srv_mock.Reconfigure = Mock()
sys.modules['roomba_msgs.srv'] = roomba_srv_mock

# Mock Parameter
parameter_mock = Mock()
parameter_mock.Parameter = MockParameter
sys.modules['rclpy.parameter'] = parameter_mock

# Mock Node
node_mock = Mock()
node_mock.Node = MockNode
sys.modules['rclpy.node'] = node_mock

# Ahora importar el nodo
from Communication_Node_v0_1_0 import CommunicationNode

import logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

class TestCommunicationNode(unittest.TestCase):
    """Test suite para el nodo ROS2 Communication_Node_v0.1.0.py"""
    
    def setUp(self):
        """Configuración para cada prueba"""
        self.mock_robot = Mock()
        self.mock_robot.connected = False
        self.mock_robot.connect_robot = Mock(return_value=True)
        self.mock_robot.disconnect = Mock()
        self.mock_robot.update_sensors = Mock()
        self.mock_robot.read_sensors = Mock(return_value={
            'movement': {
                'distance': 100.0, 'angle': 45.0, 'left_encoder_counts': 1000,
                'right_encoder_counts': 1000, 'requested_left_velocity': 100,
                'requested_right_velocity': 100, 'requested_radius': 500,
                'requested_velocity': 100
            },
            'security': {
                'bump_left': False, 'bump_right': False, 'wheel_drop_left': False,
                'wheel_drop_right': False, 'wall_sensor': False, 'virtual_wall': False,
                'cliff_left': 0, 'cliff_right': 0, 'cliff_front_left': 0,
                'cliff_front_right': 0, 'cliff_left_signal': 0, 'cliff_right_signal': 0,
                'cliff_front_left_signal': 0, 'cliff_front_right_signal': 0,
                'wall_signal': 0, 'light_bumper_left': 0, 'light_bumper_right': 0,
                'light_bumper_center_left': 0, 'light_bumper_center_right': 0,
                'light_bumper_front_left': 0, 'light_bumper_front_right': 0,
                'dirt_detect': 0
            },
            'power': {
                'voltage': 12.0, 'current': 1.0, 'temperature': 25.0,
                'battery_charge': 100.0, 'battery_capacity': 2000.0,
                'home_base': False, 'internal_charger': False, 'ir_char_omni': 0,
                'ir_char_left': 0, 'ir_char_right': 0, 'left_wheel_overcurrent': False,
                'right_wheel_overcurrent': False, 'main_brush_overcurrent': False,
                'side_brush_overcurrent': False, 'left_motor_current': 0,
                'right_motor_current': 0, 'main_brush_motor_current': 0,
                'side_brush_motor_current': 0
            },
            'misc': {
                'is_song_playing': False, 'song_number': 0,
                'botones': {
                    'clean': False, 'clock': False, 'day': False, 'dock': False,
                    'hour': False, 'minute': False, 'schedule': False, 'spot': False
                }
            }
        })
        self.mock_robot.get_status = Mock(return_value={
            'connected': True, 'oi_mode': 'FULL', 'connection_details': {}
        })
        self.mock_robot.drive_manual = Mock()
        self.mock_robot.set_leds = Mock()
        self.mock_robot.play_song = Mock()
        
    def tearDown(self):
        """Limpieza después de cada prueba"""
        pass
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_01_node_initialization(self, mock_robot_class):
        """Test: Inicialización correcta del nodo"""
        logger.info("Test 01: Inicialización del nodo")
        
        mock_robot_class.return_value = self.mock_robot
        
        # Crear nodo
        node = CommunicationNode()
        
        # Verificar que el nodo se crea correctamente
        self.assertIsNotNone(node)
        self.assertEqual(node.name, 'communication_node')
        
        # Verificar que se declaran los parámetros correctos
        expected_params = [
            'connection_serial', 'connection_mode', 'movement_frequency',
            'security_frequency', 'power_frequency', 'misc_frequency',
            'state_communication_frequency', 'movement_filter', 'security_filter',
            'power_filter', 'misc_filter'
        ]
        
        for param in expected_params:
            self.assertIn(param, node.parameters)
        
        # Verificar que se crean los publicadores correctos
        expected_publishers = [
            '/roomba/communication/movement', '/roomba/communication/security',
            '/roomba/communication/power', '/roomba/communication/misc',
            '/roomba/communication/state'
        ]
        
        for topic in expected_publishers:
            self.assertIn(topic, node.publishers)
        
        # Verificar que se crean los suscriptores correctos
        expected_subscribers = [
            '/roomba/motion/motors_command', '/roomba/misc/leds_command',
            '/roomba/misc/song_command'
        ]
        
        for topic in expected_subscribers:
            self.assertIn(topic, node.subscribers)
        
        # Verificar que se crean los servicios correctos
        expected_services = [
            '/roomba/communication/connect', '/roomba/communication/priority',
            '/roomba/system/reconfigure'
        ]
        
        for service in expected_services:
            self.assertIn(service, node.services)
        
        # Verificar que se inicializa la cola de mensajes
        self.assertIsInstance(node.message_queue, queue.PriorityQueue)
        
        # Verificar que se configuran los niveles de prioridad
        self.assertEqual(node.priority_levels["security"], 1)
        self.assertEqual(node.priority_levels["movement"], 2)
        self.assertEqual(node.priority_levels["misc"], 3)
        
        logger.info("✓ Inicialización del nodo correcta")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_02_parameter_configuration(self, mock_robot_class):
        """Test: Configuración de parámetros"""
        logger.info("Test 02: Configuración de parámetros")
        
        mock_robot_class.return_value = self.mock_robot
        
        # Crear nodo
        node = CommunicationNode()
        
        # Verificar valores por defecto
        self.assertEqual(node.get_parameter('connection_serial').value, '/dev/roomba')
        self.assertEqual(node.get_parameter('connection_mode').value, 'FULL')
        self.assertEqual(node.get_parameter('movement_frequency').value, 10.0)
        self.assertEqual(node.get_parameter('security_frequency').value, 5.0)
        self.assertEqual(node.get_parameter('power_frequency').value, 1.0)
        self.assertEqual(node.get_parameter('misc_frequency').value, 1.0)
        self.assertEqual(node.get_parameter('state_communication_frequency').value, 1.0)
        
        logger.info("✓ Configuración de parámetros correcta")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_03_message_queue_system(self, mock_robot_class):
        """Test: Sistema de cola de mensajes con prioridades"""
        logger.info("Test 03: Sistema de cola de mensajes")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # Crear nodo
        node = CommunicationNode()
        
        # Agregar mensajes con diferentes prioridades
        node.enqueue_message(3, {"type": "misc_leds", "content": '{"color": 255, "intensity": 255}'})
        node.enqueue_message(1, {"type": "movement", "content": '{"left_speed": 100, "right_speed": 100}'})
        node.enqueue_message(2, {"type": "misc_song", "content": '{"song_number": 1, "notes": []}'})
        
        # Verificar que los mensajes se agregan a la cola
        self.assertEqual(node.message_queue.qsize(), 3)
        
        # Procesar cola (el mensaje de prioridad 1 debe procesarse primero)
        node.process_message_queue()
        
        # Verificar que los métodos del robot se llamaron
        self.mock_robot.drive_manual.assert_called()
        self.mock_robot.set_leds.assert_called()
        self.mock_robot.play_song.assert_called()
        
        logger.info("✓ Sistema de cola de mensajes correcto")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_04_robot_connection(self, mock_robot_class):
        """Test: Conexión con el robot"""
        logger.info("Test 04: Conexión con el robot")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # Crear nodo
        node = CommunicationNode()
        
        # Verificar que se intenta conectar con el robot
        mock_robot_class.assert_called_once_with(node=node)
        self.mock_robot.connect_robot.assert_called_once()
        
        # Verificar que se llama con los parámetros correctos
        call_args = self.mock_robot.connect_robot.call_args
        self.assertEqual(call_args[1]['connection_type'], 'Serial')
        self.assertEqual(call_args[1]['serial_port'], '/dev/roomba')
        self.assertEqual(call_args[1]['connection_mode'], 'FULL')
        
        logger.info("✓ Conexión con el robot correcta")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_05_sensor_data_publishing(self, mock_robot_class):
        """Test: Publicación de datos de sensores"""
        logger.info("Test 05: Publicación de datos de sensores")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # Crear nodo
        node = CommunicationNode()
        
        # Test publish_movement_data
        node.publish_movement_data()
        self.mock_robot.update_sensors.assert_called_with(categories=["movement"])
        self.mock_robot.read_sensors.assert_called()
        node.movement_pub.publish.assert_called()
        
        # Test publish_security_data
        node.publish_security_data()
        self.mock_robot.update_sensors.assert_called_with(categories=["security"])
        node.security_pub.publish.assert_called()
        
        # Test publish_power_data
        node.publish_power_data()
        self.mock_robot.update_sensors.assert_called_with(categories=["power"])
        node.power_pub.publish.assert_called()
        
        # Test publish_misc_data
        node.publish_misc_data()
        self.mock_robot.update_sensors.assert_called_with(categories=["misc"])
        node.misc_pub.publish.assert_called()
        
        # Test publish_state_data
        node.publish_state_data()
        self.mock_robot.get_status.assert_called()
        node.state_pub.publish.assert_called()
        
        logger.info("✓ Publicación de datos de sensores correcta")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_06_subscription_callbacks(self, mock_robot_class):
        """Test: Callbacks de suscriptores"""
        logger.info("Test 06: Callbacks de suscriptores")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # Crear nodo
        node = CommunicationNode()
        
        # Test motors_command_callback
        msg = MockString(data='{"left_speed": 100, "right_speed": 150, "duration": 2}')
        node.motors_command_callback(msg)
        
        # Verificar que se agrega a la cola con prioridad correcta
        self.assertEqual(node.message_queue.qsize(), 1)
        priority, data = node.message_queue.get()
        self.assertEqual(priority, 2)  # movement priority
        self.assertEqual(data["type"], "movement")
        
        # Test leds_command_callback
        msg = MockString(data='{"color": 255, "intensity": 128}')
        node.leds_command_callback(msg)
        
        # Test song_command_callback
        msg = MockString(data='{"song_number": 1, "notes": [(60, 32)]}')
        node.song_command_callback(msg)
        
        # Verificar que se agregaron a la cola
        self.assertEqual(node.message_queue.qsize(), 2)
        
        logger.info("✓ Callbacks de suscriptores correctos")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_07_service_callbacks(self, mock_robot_class):
        """Test: Callbacks de servicios"""
        logger.info("Test 07: Callbacks de servicios")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # Crear nodo
        node = CommunicationNode()
        
        # Test connect_callback
        request = MockServiceRequest(port='/tmp/roomba_front', mode='FULL')
        response = MockServiceResponse()
        result = node.connect_callback(request, response)
        
        self.assertTrue(result.success)
        self.assertEqual(result.message, "Conexión exitosa")
        
        # Test priority_callback
        request = MockServiceRequest(message_type='movement', priority=1)
        response = MockServiceResponse()
        result = node.priority_callback(request, response)
        
        self.assertTrue(result.success)
        
        # Test reconfigure_callback
        request = MockServiceRequest(parameter='movement_frequency', value='15.0')
        response = MockServiceResponse()
        result = node.reconfigure_callback(request, response)
        
        self.assertTrue(result.success)
        self.assertIn('movement_frequency', node.parameters)
        
        logger.info("✓ Callbacks de servicios correctos")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_08_error_handling(self, mock_robot_class):
        """Test: Manejo de errores"""
        logger.info("Test 08: Manejo de errores")
        
        # Simular error en conexión
        mock_robot_instance = Mock()
        mock_robot_instance.connect_robot.side_effect = Exception("Connection error")
        mock_robot_class.return_value = mock_robot_instance
        
        # Crear nodo (debe manejar el error de conexión)
        node = CommunicationNode()
        
        # Verificar que el nodo se crea a pesar del error
        self.assertIsNotNone(node)
        
        # Test manejo de JSON inválido en process_message_queue
        node.robot = self.mock_robot
        node.robot.connected = True
        
        node.enqueue_message(2, {"type": "movement", "content": "invalid json"})
        node.process_message_queue()
        
        # El robot no debe ser llamado con JSON inválido
        self.mock_robot.drive_manual.assert_not_called()
        
        logger.info("✓ Manejo de errores correcto")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_09_timer_creation(self, mock_robot_class):
        """Test: Creación de timers"""
        logger.info("Test 09: Creación de timers")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # Crear nodo
        node = CommunicationNode()
        
        # Verificar que se crean los timers correctos
        # Debería haber 6 timers: 5 para publicación + 1 para procesar cola
        self.assertEqual(len(node.timers), 6)
        
        # Verificar que se configuran las frecuencias correctas
        expected_periods = [
            0.1,  # message queue processing
            1.0 / 10.0,  # movement
            1.0 / 5.0,   # security
            1.0 / 1.0,   # power
            1.0 / 1.0,   # misc
            1.0 / 1.0,   # state
        ]
        
        actual_periods = [timer.period for timer in node.timers]
        for period in expected_periods:
            self.assertIn(period, actual_periods)
        
        logger.info("✓ Creación de timers correcta")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_10_message_processing_without_connection(self, mock_robot_class):
        """Test: Procesamiento de mensajes sin conexión"""
        logger.info("Test 10: Procesamiento sin conexión")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = False
        
        # Crear nodo
        node = CommunicationNode()
        
        # Agregar mensaje a la cola
        node.enqueue_message(2, {"type": "movement", "content": '{"left_speed": 100}'})
        
        # Procesar cola (no debe hacer nada si no hay conexión)
        node.process_message_queue()
        
        # Verificar que no se llama al robot
        self.mock_robot.drive_manual.assert_not_called()
        
        logger.info("✓ Procesamiento sin conexión correcto")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_11_sensor_data_without_connection(self, mock_robot_class):
        """Test: Publicación de datos de sensores sin conexión"""
        logger.info("Test 11: Publicación sin conexión")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = False
        
        # Crear nodo
        node = CommunicationNode()
        
        # Intentar publicar datos (no debe hacer nada sin conexión)
        node.publish_movement_data()
        node.publish_security_data()
        node.publish_power_data()
        node.publish_misc_data()
        node.publish_state_data()
        
        # Verificar que no se llama al robot
        self.mock_robot.update_sensors.assert_not_called()
        self.mock_robot.read_sensors.assert_not_called()
        self.mock_robot.get_status.assert_not_called()
        
        logger.info("✓ Publicación sin conexión correcta")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_12_connection_service_error_handling(self, mock_robot_class):
        """Test: Manejo de errores en servicio de conexión"""
        logger.info("Test 12: Manejo de errores en servicio de conexión")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connect_robot.side_effect = Exception("Connection failed")
        
        # Crear nodo
        node = CommunicationNode()
        
        # Test connect_callback con error
        request = MockServiceRequest(port='/tmp/invalid_port', mode='FULL')
        response = MockServiceResponse()
        result = node.connect_callback(request, response)
        
        self.assertFalse(result.success)
        self.assertEqual(result.message, "Connection failed")
        
        logger.info("✓ Manejo de errores en servicio de conexión correcto")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_13_reconfigure_service_parameter_types(self, mock_robot_class):
        """Test: Tipos de parámetros en servicio de reconfiguración"""
        logger.info("Test 13: Tipos de parámetros en reconfiguración")
        
        mock_robot_class.return_value = self.mock_robot
        
        # Crear nodo
        node = CommunicationNode()
        
        # Test parámetro tipo double
        request = MockServiceRequest(parameter='movement_frequency', value='15.5')
        response = MockServiceResponse()
        result = node.reconfigure_callback(request, response)
        
        self.assertTrue(result.success)
        self.assertEqual(node.get_parameter('movement_frequency').value, 15.5)
        
        # Test parámetro tipo integer
        request = MockServiceRequest(parameter='test_int', value='42')
        response = MockServiceResponse()
        result = node.reconfigure_callback(request, response)
        
        self.assertTrue(result.success)
        
        # Test parámetro tipo string
        request = MockServiceRequest(parameter='test_string', value='hello')
        response = MockServiceResponse()
        result = node.reconfigure_callback(request, response)
        
        self.assertTrue(result.success)
        
        logger.info("✓ Tipos de parámetros en reconfiguración correctos")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_14_node_destruction(self, mock_robot_class):
        """Test: Destrucción del nodo"""
        logger.info("Test 14: Destrucción del nodo")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # Crear nodo
        node = CommunicationNode()
        
        # Destruir nodo
        node.destroy_node()
        
        # Verificar que se desconecta del robot
        self.mock_robot.disconnect.assert_called_once()
        
        # Verificar que se marca como destruido
        self.assertTrue(node.destroyed)
        
        logger.info("✓ Destrucción del nodo correcta")
    
    @patch('Communication_Node_v0_1_0.Robot')
    def test_15_comprehensive_workflow(self, mock_robot_class):
        """Test: Workflow completo del nodo"""
        logger.info("Test 15: Workflow completo")
        
        mock_robot_class.return_value = self.mock_robot
        self.mock_robot.connected = True
        
        # 1. Crear nodo
        node = CommunicationNode()
        
        # 2. Verificar inicialización
        self.assertIsNotNone(node)
        self.assertEqual(node.name, 'communication_node')
        
        # 3. Simular recepción de comandos
        msg = MockString(data='{"left_speed": 100, "right_speed": 150, "duration": 2}')
        node.motors_command_callback(msg)
        
        msg = MockString(data='{"color": 255, "intensity": 128}')
        node.leds_command_callback(msg)
        
        # 4. Procesar cola de mensajes
        node.process_message_queue()
        
        # 5. Verificar que se ejecutaron los comandos
        self.mock_robot.drive_manual.assert_called()
        self.mock_robot.set_leds.assert_called()
        
        # 6. Publicar datos de sensores
        node.publish_movement_data()
        node.publish_security_data()
        node.publish_power_data()
        node.publish_misc_data()
        node.publish_state_data()
        
        # 7. Verificar publicaciones
        node.movement_pub.publish.assert_called()
        node.security_pub.publish.assert_called()
        node.power_pub.publish.assert_called()
        node.misc_pub.publish.assert_called()
        node.state_pub.publish.assert_called()
        
        # 8. Probar servicios
        request = MockServiceRequest(port='/tmp/roomba_front', mode='FULL')
        response = MockServiceResponse()
        result = node.connect_callback(request, response)
        self.assertTrue(result.success)
        
        # 9. Destruir nodo
        node.destroy_node()
        self.assertTrue(node.destroyed)
        
        logger.info("✓ Workflow completo exitoso")

def run_tests():
    """Ejecutar todos los tests"""
    logger.info("=== Iniciando Test Suite para Communication_Node_v0.1.0.py ===")
    
    # Verificar prerrequisitos
    logger.info("Verificando prerrequisitos...")
    
    # Verificar que el nodo esté disponible
    node_path = parent_dir / "Communication_Node_v0.1.0.py"
    if not node_path.exists():
        logger.error(f"Nodo no encontrado: {node_path}")
        return False
    
    # Verificar que las librerías estén disponibles
    lib_path = parent_dir / "Librerias" / "roomba" / "lib_robot_roomba.py"
    if not lib_path.exists():
        logger.error(f"Librería roomba no encontrada: {lib_path}")
        return False
    
    logger.info("✓ Prerrequisitos verificados")
    
    # Ejecutar tests
    suite = unittest.TestLoader().loadTestsFromTestCase(TestCommunicationNode)
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