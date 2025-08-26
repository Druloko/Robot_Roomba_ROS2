import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from std_msgs.msg import String
from std_msgs.msg import Float32
from roomba_msgs.msg import Movement, Security, Power, Misc, State  # Mensajes personalizados que se definirán
from roomba_msgs.srv import Connect, Priority, Reconfigure
import threading
from lib_irobot import connect_robot, leer_sensores_basicos, leer_estado_bateria, leer_estado_movimiento, leer_proximidad, mover_adelante, girar, moverse_manual, activar_motor, detener_motor, encender_led, reproducir_musica

class CommunicationNode(Node):
    def __init__(self):
        super().__init__('communication_node')

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

        # Conexión inicial
        self.robot = None
        self.connection_thread = None
        self.stop_threads = threading.Event()

        # Timers de publicación
        self.movement_timer = None
        self.security_timer = None
        self.power_timer = None
        self.misc_timer = None
        self.state_timer = None

        # Inicializar conexión
        self.initialize_connection()

    def initialize_connection(self):
        serial_port = self.get_parameter('connection_serial').get_parameter_value().string_value
        mode = self.get_parameter('connection_mode').get_parameter_value().string_value

        try:
            self.robot = connect_robot(serial_port)
            if mode == 'FULL':
                self.robot.start()
                self.robot.oi_mode = MODES.FULL
            elif mode == 'SAFE':
                self.robot.start()
                self.robot.oi_mode = MODES.SAFE
            self.get_logger().info(f'Conectado al robot en {serial_port} en modo {mode}')

            # Iniciar publicación de datos
            self.start_timers()

        except Exception as e:
            self.get_logger().error(f'Error al conectar con el robot: {e}')

    def start_timers(self):
        self.movement_timer = self.create_timer(1.0 / self.get_parameter('movement_frequency').value, self.publish_movement_data)
        self.security_timer = self.create_timer(1.0 / self.get_parameter('security_frequency').value, self.publish_security_data)
        self.power_timer = self.create_timer(1.0 / self.get_parameter('power_frequency').value, self.publish_power_data)
        self.misc_timer = self.create_timer(1.0 / self.get_parameter('misc_frequency').value, self.publish_misc_data)
        self.state_timer = self.create_timer(1.0 / self.get_parameter('state_communication_frequency').value, self.publish_state_data)

    def publish_movement_data(self):
        if self.robot:
            data = leer_estado_movimiento(self.robot)
            msg = Movement()
            msg.distance = data['distance']
            msg.angle = data['angle']
            msg.left_encoder_counts = data['left_encoder_counts']
            msg.right_encoder_counts = data['right_encoder_counts']
            self.movement_pub.publish(msg)

    def publish_security_data(self):
        if self.robot:
            data = leer_sensores_basicos(self.robot)
            msg = Security()
            msg.bump_left = data['bump_left']
            msg.bump_right = data['bump_right']
            msg.wheel_drop_left = data['wheel_drop_left']
            msg.wheel_drop_right = data['wheel_drop_right']
            msg.wall = data['wall']
            msg.virtual_wall = data['virtual_wall']
            self.security_pub.publish(msg)

    def publish_power_data(self):
        if self.robot:
            data = leer_estado_bateria(self.robot)
            msg = Power()
            msg.voltage = data['voltage']
            msg.current = data['current']
            msg.temperature = data['temperature']
            msg.charge = data['charge']
            msg.capacity = data['capacity']
            self.power_pub.publish(msg)

    def publish_misc_data(self):
        if self.robot:
            data = leer_proximidad(self.robot)
            msg = Misc()
            msg.cliff_left_signal = data['cliff_left_signal']
            msg.cliff_front_left_signal = data['cliff_front_left_signal']
            msg.cliff_front_right_signal = data['cliff_front_right_signal']
            msg.cliff_right_signal = data['cliff_right_signal']
            msg.wall_signal = data['wall_signal']
            self.misc_pub.publish(msg)

    def publish_state_data(self):
        if self.robot:
            msg = State()
            msg.oi_mode = self.robot.oi_mode
            msg.is_charging = self.robot.charging_state
            msg.battery_charge = self.robot.battery_charge
            self.state_pub.publish(msg)

    def motors_command_callback(self, msg):
        if self.robot:
            # Procesar comando de movimiento
            command = msg.data.split(',')
            if len(command) == 3:
                action, left_speed, right_speed = command
                if action == 'drive':
                    moverse_manual(self.robot, int(left_speed), int(right_speed), 1)

    def leds_command_callback(self, msg):
        if self.robot:
            # Procesar comando de LEDs
            command = msg.data.split(',')
            if len(command) == 2:
                color, intensity = map(int, command)
                encender_led(self.robot, color, intensity)

    def song_command_callback(self, msg):
        if self.robot:
            # Procesar comando de canciones
            command = msg.data.split(',')
            if len(command) >= 2:
                song_number = int(command[0])
                notes = [(int(note.split(':')[0]), int(note.split(':')[1])) for note in command[1:]]
                reproducir_musica(self.robot, song_number, notes)

    def connect_callback(self, request, response):
        try:
            if self.robot:
                self.robot.stop()
            self.robot = connect_robot(request.port)
            if request.mode == 'FULL':
                self.robot.start()
                self.robot.oi_mode = MODES.FULL
            elif request.mode == 'SAFE':
                self.robot.start()
                self.robot.oi_mode = MODES.SAFE
            response.success = True
            response.message = 'Conexión exitosa'
        except Exception as e:
            response.success = False
            response.message = str(e)
        return response

    def priority_callback(self, request, response):
        # Implementar manejo de prioridades según request.message_type y request.priority
        response.success = True
        response.message = 'Prioridad actualizada'
        return response

    def reconfigure_callback(self, request, response):
        try:
            if hasattr(self, request.parameter):
                self.set_parameter(Parameter(request.parameter, Parameter.Type.DOUBLE, request.value))
                response.success = True
                response.message = 'Parámetro reconfigurado'
            else:
                response.success = False
                response.message = 'Parámetro no encontrado'
        except Exception as e:
            response.success = False
            response.message = str(e)
        return response

    def destroy_node(self):
        self.stop_threads.set()
        if self.robot:
            self.robot.stop()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = CommunicationNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()