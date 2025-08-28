# Version para implantar la nueva libreria irobot Rommba


import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from std_msgs.msg import String
from roomba_msgs.msg import Movement, Security, Power, Misc, State  # Mensajes personalizados que se definirán
from roomba_msgs.srv import Connect, Priority, Reconfigure
import json
import threading
import queue
from robot_roomba.roomba.lib_robot_roomba import Robot

class CommunicationNode(Node):
    def __init__(self):
        super().__init__('communication_node')

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

        # Timer para procesar la cola de mensajes
        self.create_timer(0.1, self.process_message_queue)

        # Inicializar conexión
        self.initialize_connection()

        self.publisher_state = self.create_publisher(State, '/roomba/communication/state', 10)

    def enqueue_message(self, priority, data):
        """Agregar un mensaje a la cola con su prioridad."""
        self.get_logger().debug(f"Encolando mensaje con prioridad {priority}: {data}")
        self.message_queue.put((priority, data))

    def process_message_queue(self):
        self.get_logger().debug(f"Procesando mensajes en la cola, tamaño actual: {self.message_queue.qsize()}")
        while not self.message_queue.empty():
            priority, data = self.message_queue.get()
            msg_type = data.get("type")
            content = data.get("content")

            self.get_logger().info(f"Procesando mensaje prioridad {priority}: {msg_type}")

            try:
                if msg_type == "movement":
                    # Ejecutar movimiento
                    try:
                        cmd = json.loads(content)
                        self.get_logger().debug(f"Comando de movimiento recibido: {cmd}")
                    except json.JSONDecodeError as e:
                        self.get_logger().error(f"JSON inválido: {e}")
                        continue
                    self.robot.drive_manual(
                        left_speed=cmd.get("left_speed", 0),
                        right_speed=cmd.get("right_speed", 0),
                        duration=cmd.get("duration", 1)
                    )
                elif msg_type == "misc_leds":
                    try:
                        self.get_logger().debug(f"Comando de LEDs recibido: {content}")
                        cmd = json.loads(content)
                    except json.JSONDecodeError as e:
                        self.get_logger().error(f"JSON inválido: {e}")
                        continue
                    self.robot.set_leds(
                        color=cmd.get("color", 0),
                        intensity=cmd.get("intensity", 0)
                    )
                elif msg_type == "misc_song":
                    try:
                        self.get_logger().debug(f"Comando de canción recibido: {content}")
                        cmd = json.loads(content)
                    except json.JSONDecodeError as e:
                        self.get_logger().error(f"JSON inválido: {e}")
                        continue
                    self.robot.play_song(
                        song_number=cmd.get("song_number", 1),
                        notes=cmd.get("notes", [])
                    )
            except Exception as e:
                self.get_logger().error(f"Error al procesar mensaje: {e}")

    def initialize_connection(self):
        serial_port = self.get_parameter('connection_serial').get_parameter_value().string_value
        mode = self.get_parameter('connection_mode').get_parameter_value().string_value
        self.get_logger().info(f'Iniciando conexión con el robot en {serial_port} en modo {mode}')

        try:
            self.robot = Robot(node=self)

            # Conectar con la nueva librería
            self.robot.connect_robot(
                connection_type='Serial',
                serial_port=serial_port,
                connection_mode=mode
            )

            self.get_logger().info(f'Conectado al robot en {serial_port} en modo {mode}')

            # Iniciar timers
            self.start_timers()

        except Exception as e:
            self.get_logger().error(f'Error al conectar con el robot: {e}')

    def start_timers(self):
        self.get_logger().debug(f"Iniciando timers con frecuencias configuradas")
        self.movement_timer = self.create_timer(1.0 / self.get_parameter('movement_frequency').value, self.publish_movement_data)
        self.security_timer = self.create_timer(1.0 / self.get_parameter('security_frequency').value, self.publish_security_data)
        self.power_timer = self.create_timer(1.0 / self.get_parameter('power_frequency').value, self.publish_power_data)
        self.misc_timer = self.create_timer(1.0 / self.get_parameter('misc_frequency').value, self.publish_misc_data)
        self.state_timer = self.create_timer(1.0 / self.get_parameter('state_communication_frequency').value, self.publish_state_data)

    def publish_movement_data(self):
        self.get_logger().debug("Publicando datos de movimiento")
        if self.robot and self.robot.connected:
            self.robot.update_sensors(categories=["movement"])
            sensors = self.robot.read_sensors()
            movement = sensors.get("movement", {})

            msg = Movement()
            msg.distance = movement.get("distance", 0.0)
            msg.angle = movement.get("angle", 0.0)
            msg.left_encoder_counts = movement.get("left_encoder_counts", 0)
            msg.right_encoder_counts = movement.get("right_encoder_counts", 0)
            msg.requested_left_velocity = movement.get("requested_left_velocity", 0)
            msg.requested_right_velocity = movement.get("requested_right_velocity", 0)
            msg.requested_radius = movement.get("requested_radius", 0)
            msg.requested_velocity = movement.get("requested_velocity", 0)

            self.get_logger().debug(f"Datos de movimiento: {msg}")
            self.movement_pub.publish(msg)

    def publish_security_data(self):
        self.get_logger().debug("Publicando datos de seguridad")
        if self.robot and self.robot.connected:
            self.robot.update_sensors(categories=["security"])
            sensors = self.robot.read_sensors()
            security = sensors.get("security", {})

            msg = Security()
            msg.bump_left = security.get("bump_left", False)
            msg.bump_right = security.get("bump_right", False)
            msg.wheel_drop_left = security.get("wheel_drop_left", False)
            msg.wheel_drop_right = security.get("wheel_drop_right", False)
            msg.wall = security.get("wall_sensor", False)
            msg.virtual_wall = security.get("virtual_wall", False)
            msg.cliff_left = security.get("cliff_left", 0)
            msg.cliff_right = security.get("cliff_right", 0)
            msg.cliff_front_left = security.get("cliff_front_left", 0)
            msg.cliff_front_right = security.get("cliff_front_right", 0)
            msg.cliff_left_signal = security.get("cliff_left_signal", 0)
            msg.cliff_right_signal = security.get("cliff_right_signal", 0)
            msg.cliff_front_left_signal = security.get("cliff_front_left_signal", 0)
            msg.cliff_front_right_signal = security.get("cliff_front_right_signal", 0)
            msg.wall_signal = security.get("wall_signal", 0)
            msg.light_bumper_left = security.get("light_bumper_left", 0)
            msg.light_bumper_right = security.get("light_bumper_right", 0)
            msg.light_bumper_center_left = security.get("light_bumper_center_left", 0)
            msg.light_bumper_center_right = security.get("light_bumper_center_right", 0)
            msg.light_bumper_front_left = security.get("light_bumper_front_left", 0)
            msg.light_bumper_front_right = security.get("light_bumper_front_right", 0)
            msg.dirt_detect = security.get("dirt_detect", 0)

            self.get_logger().debug(f"Datos de seguridad: {msg}")
            self.security_pub.publish(msg)

    def publish_power_data(self):
        self.get_logger().debug("Publicando datos de energía")
        if self.robot and self.robot.connected:
            self.robot.update_sensors(categories=["power"])
            sensors = self.robot.read_sensors()
            power = sensors.get("power", {})

            msg = Power()
            msg.voltage = power.get("voltage", 0.0)
            msg.current = power.get("current", 0.0)
            msg.temperature = power.get("temperature", 0.0)
            msg.charge = power.get("battery_charge", 0.0)
            msg.capacity = power.get("battery_capacity", 0.0)
            msg.home_base = power.get("home_base", False)
            msg.internal_charger = power.get("internal_charger", False)
            msg.ir_char_omni = power.get("ir_char_omni", 0)
            msg.ir_char_left = power.get("ir_char_left", 0)
            msg.ir_char_right = power.get("ir_char_right", 0)
            msg.left_wheel_overcurrent = power.get("left_wheel_overcurrent", False)
            msg.right_wheel_overcurrent = power.get("right_wheel_overcurrent", False)
            msg.main_brush_overcurrent = power.get("main_brush_overcurrent", False)
            msg.side_brush_overcurrent = power.get("side_brush_overcurrent", False)
            msg.left_motor_current = power.get("left_motor_current", 0)
            msg.right_motor_current = power.get("right_motor_current", 0)
            msg.main_brush_motor_current = power.get("main_brush_motor_current", 0)
            msg.side_brush_motor_current = power.get("side_brush_motor_current", 0)

            self.get_logger().debug(f"Datos de energía: {msg}")
            self.power_pub.publish(msg)

    def publish_misc_data(self):
        self.get_logger().debug("Publicando datos misceláneos")
        if self.robot and self.robot.connected:
            self.robot.update_sensors(categories=["misc"])
            sensors = self.robot.read_sensors()
            misc = sensors.get("misc", {})

            msg = Misc()
            msg.is_song_playing = misc.get("is_song_playing", False)
            msg.song_number = misc.get("song_number", 0)

            # Si quieres incluir botones:
            botones = misc.get("botones", {})
            msg.button_clean = botones.get("clean", False)
            msg.button_clock = botones.get("clock", False)
            msg.button_day = botones.get("day", False)
            msg.button_dock = botones.get("dock", False)
            msg.button_hour = botones.get("hour", False)
            msg.button_minute = botones.get("minute", False)
            msg.button_schedule = botones.get("schedule", False)
            msg.button_spot = botones.get("spot", False)

            self.get_logger().debug(f"Datos misceláneos: {msg}")
            self.misc_pub.publish(msg)

    def publish_state_data(self):
        try:
            self.get_logger().debug("Publicando estado del robot")

            # Si no hay robot o no está conectado, publica estado mínimo y sal
            if not self.robot or not getattr(self.robot, 'connected', False):
                msg = State()
                msg.oi_mode = "OFF"
                msg.stasis_disabled = False
                msg.stasis_toggling = False
                msg.number_stream_packets = 0
                msg.auto_wake = False
                msg.motion_state = "stopped"
                self.publisher_state.publish(msg)
                return

            # Actualiza y lee sensores necesarios
            status = self.robot.get_status() or {}
            # Si necesitas contadores para State (opcional):
            # self.robot.update_sensors(categories=["state"])
            sensors = self.robot.read_sensors() or {}
            state_dict = sensors.get("state", {})

            # Construye el mensaje alineado con State.msg
            msg = State()
            # strings
            msg.oi_mode      = str(status.get("oi_mode", "UNKNOWN"))
            msg.motion_state = str(state_dict.get("motion_state", "stopped"))
            # bools
            msg.stasis_disabled   = bool(state_dict.get("stasis_disabled", False))
            msg.stasis_toggling   = bool(state_dict.get("stasis_toggling", False))
            msg.auto_wake         = bool(state_dict.get("auto_wake", False))
            # int
            msg.number_stream_packets = int(state_dict.get("number_stream_packets", 0))

            self.publisher_state.publish(msg)

        except Exception as e:
            self.get_logger().error(f"Error publicando State: {e}")

    def motors_command_callback(self, msg):
        self.get_logger().debug(f"Comando de motores recibido: {msg.data}")
        self.enqueue_message(
            self.priority_levels["movement"],
            {"type": "movement", "content": msg.data}
        )

    def leds_command_callback(self, msg):
        self.get_logger().debug(f"Comando de LEDs recibido: {msg.data}")
        self.enqueue_message(
            self.priority_levels["misc"],
            {"type": "misc_leds", "content": msg.data}
        )

    def song_command_callback(self, msg):
        self.get_logger().debug(f"Comando de canción recibido: {msg.data}")
        self.enqueue_message(
            self.priority_levels["misc"],
            {"type": "misc_song", "content": msg.data}
        )

    def connect_callback(self, request, response):
        self.get_logger().debug(f"Solicitud de conexión recibida: {request.port}, modo: {request.mode}")
        try:
            # Si ya hay un robot conectado, desconectamos primero
            if self.robot and self.robot.connected:
                self.robot.disconnect()

            # Crear una nueva instancia si no existe
            if not self.robot:
                self.robot = Robot(node=self)

            # Conectar
            self.robot.connect_robot(
                connection_type='Serial',
                serial_port=request.port,
                connection_mode=request.mode
            )

            response.success = True
            response.message = "Conexión exitosa"
            self.get_logger().info(f"Conexión exitosa al robot en {request.port} en modo {request.mode}")

        except Exception as e:
            self.robot = None
            response.success = False
            response.message = str(e)
            self.get_logger().error(f"Error al conectar: {response.message}")

        return response

    def priority_callback(self, request, response):
        # Aquí puedes implementar la lógica para cambiar prioridades dinámicamente
        self.get_logger().info(f"Cambio de prioridad solicitado: {request.message_type} -> {request.priority}")
        response.success = True
        response.message = "Prioridad actualizada (pendiente de implementación)"
        return response

    def reconfigure_callback(self, request, response):
        self.get_logger().debug(f"Solicitud de reconfiguración recibida: {request.parameter} = {request.value}")
        try:
            raw_value = request.value

            # Intentar convertir
            if "." in raw_value or "e" in raw_value.lower():
                param_value = float(raw_value)
                param_type = Parameter.Type.DOUBLE
            elif raw_value.isdigit():
                param_value = int(raw_value)
                param_type = Parameter.Type.INTEGER
            else:
                param_value = raw_value
                param_type = Parameter.Type.STRING

            self.set_parameters([Parameter(request.parameter, param_type, param_value)])

            response.success = True
            response.message = f"Parámetro '{request.parameter}' reconfigurado a {param_value}"
            self.get_logger().info(response.message)

        except Exception as e:
            response.success = False
            response.message = str(e)
            self.get_logger().error(f"Error al reconfigurar: {response.message}")

        return response

    def destroy_node(self):
        self.get_logger().debug(f"Destruyendo nodo de comunicación")
        self.stop_threads.set()
        if self.robot and self.robot.connected:
            self.robot.disconnect()
        self.get_logger().info("Nodo CommunicationNode destruido correctamente.")
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = CommunicationNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()