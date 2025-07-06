import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from std_msgs.msg import String
from std_msgs.msg import Float32
from roomba_msgs.msg import Movement, Security, Power, Misc, State  # Mensajes personalizados que se definirán
from roomba_msgs.srv import Connect, Priority, Reconfigure
import threading
import queue
from lib_irobot import connect_robot, leer_sensores_basicos, leer_estado_bateria, leer_estado_movimiento, leer_proximidad, mover_adelante, girar, moverse_manual, activar_motor, detener_motor, encender_led, reproducir_musica

    
class CommunicationNode(Node):
    def __init__(self):
        super().__init__('communication_node')

        # Inicializamos el Robot
        self.robot = Robot()

        # Inicializar colas de prioridad
        self.message_queue = queue.PriorityQueue()

        # Configurar niveles de prioridad
        self.priority_levels = {
            "security": 1,  # Alta prioridad
            "movement": 2,  # Media prioridad
            "misc": 3,      # Baja prioridad
        }

        # Parámetros configurables
        self.declare_parameter('connection_serial', '/dev/roomba')
        self.declare_parameter('connection_mode', 'FULL')
        self.declare_parameter('movement_frequency', 10.0)
        self.declare_parameter('security_frequency', 5.0)
        self.declare_parameter('power_frequency', 1.0)
        self.declare_parameter('misc_frequency', 1.0)
        self.declare_parameter('state_communication_frequency', 1.0)
        self.declare_parameter('movement_filter', [])
        self.declare_parameter('security_filter', [])
        self.declare_parameter('power_filter', [])
        self.declare_parameter('misc_filter', [])

        # Publicadores
        self.movement_pub = self.create_publisher(Movement, '/roomba/communication/movement', 10)
        self.security_pub = self.create_publisher(Security, '/roomba/communication/security', 10)
        self.power_pub = self.create_publisher(Power, '/roomba/communication/power', 10)
        self.misc_pub = self.create_publisher(Misc, '/roomba/communication/misc', 10)
        self.state_pub = self.create_publisher(State, '/roomba/communication/state', 10)

        # Suscriptores
        self.create_subscription(String, '/roomba/motion/motors_command', self.motors_command_callback, 10)
        self.create_subscription(String, '/roomba/misc/leds_command', self.leds_command_callback, 10)
        self.create_subscription(String, '/roomba/misc/song_command', self.song_command_callback, 10)

        # Servicios
        self.connect_service = self.create_service(Connect, '/roomba/communication/connect', self.connect_callback)
        self.priority_service = self.create_service(Priority, '/roomba/communication/priority', self.priority_callback)
        self.reconfigure_service = self.create_service(Reconfigure, '/roomba/system/reconfigure', self.reconfigure_callback)

        # Timers de publicación
        self.create_timer(1.0 / self.get_parameter('movement_frequency').value, self.publish_movement_data)
        self.create_timer(1.0 / self.get_parameter('security_frequency').value, self.publish_security_data)
        self.create_timer(1.0 / self.get_parameter('power_frequency').value, self.publish_power_data)
        self.create_timer(1.0 / self.get_parameter('misc_frequency').value, self.publish_misc_data)
        self.create_timer(1.0 / self.get_parameter('state_communication_frequency').value, self.publish_state_data)

        # Timer para procesar la cola de mensajes
        self.create_timer(0.1, self.process_message_queue)

        #Iniciamos conexion serial con el robot
        self.initialize_connection()

    # Inicializar conexión ###################################################################
    def initialize_connection(self):
        serial_port = self.get_parameter('connection_serial').get_parameter_value().string_value
        mode = self.get_parameter('connection_mode').get_parameter_value().string_value
        try:
            self.robot.connected = True
            self.get_logger().info(f'Conectado al robot en {serial_port} en modo {mode}')
            self.start_timers()
        except Exception as e:
            self.get_logger().error(f'Error al conectar con el robot: {e}')

    def publish_movement_data(self):
        sensors = self.robot.read_sensors() ###################################################################
        msg = Movement()
        msg.distance = sensors['distance']
        msg.angle = sensors['angle']
        msg.left_encoder_counts = sensors['left_encoder_counts']
        msg.right_encoder_counts = sensors['right_encoder_counts']
        self.movement_pub.publish(msg)

    def publish_security_data(self):
        sensors = self.robot.read_sensors() ###################################################################
        msg = Security()
        msg.bump_left = sensors['bump_left']
        msg.bump_right = sensors['bump_right']
        msg.wheel_drop_left = sensors['wheel_drop_left']
        msg.wheel_drop_right = sensors['wheel_drop_right']
        msg.wall = sensors['wall']
        msg.virtual_wall = sensors['virtual_wall']
        self.security_pub.publish(msg)

    def publish_power_data(self):
        sensors = self.robot.read_sensors() ###################################################################
        msg = Power()
        msg.voltage = sensors['voltage']
        msg.current = sensors['current']
        msg.temperature = sensors['temperature']
        msg.charge = sensors['charge']
        msg.capacity = sensors['capacity']
        self.power_pub.publish(msg)

    def publish_misc_data(self):
        sensors = self.robot.read_sensors() ###################################################################
        msg = Misc()
        msg.cliff_left_signal = sensors['cliff_left_signal']
        msg.cliff_front_left_signal = sensors['cliff_front_left_signal']
        msg.cliff_front_right_signal = sensors['cliff_front_right_signal']
        msg.cliff_right_signal = sensors['cliff_right_signal']
        msg.wall_signal = sensors['wall_signal']
        self.misc_pub.publish(msg)

    def publish_state_data(self): ###################################################################
        msg = State()
        msg.oi_mode = self.robot.oi_mode
        msg.is_charging = False  # Placeholder
        msg.battery_charge = self.robot.read_sensors()['charge']
        self.state_pub.publish(msg)