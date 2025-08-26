import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, Bool
from geometry_msgs.msg import Twist, Quaternion
from nav_msgs.msg import Odometry
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped
from irobot.robots.create2 import Create2
from irobot.openinterface.constants import MODES
from math import sin, cos, pi
from rcl_interfaces.msg import SetParametersResult

class RoombaNode(Node):
    def __init__(self):
        super().__init__('roomba_node')

        # Declarar todos los parámetros
        self.declare_parameters(
            namespace='',
            parameters=[
                ('port', '/dev/roomba'),
                ('sensor_update_rate', 0.5),
                ('odom_update_rate', 0.2),
                ('max_linear_speed', 0.4),
                ('max_angular_speed', 1.0),
                ('speed_multiplier', 1.0),
                ('spin_multiplier', 0.8),
                ('battery_threshold', 15.0),
                ('enable_cliff_detection', True),
                ('enable_bump_detection', True),
                ('cleaning_mode', 'auto'),
                ('return_to_dock_on_low_battery', True),
                ('timeout_cmd_vel', 2.0),
                ('logging_level', 'info'),
                ('enable_logging_sensors', True),
                ('odom_frame_id', 'odom'),
                ('base_frame_id', 'base_link'),
                ('sensor_topic', 'roomba/sensors'),
                ('odom_topic', 'roomba/odom'),
                ('cmd_vel_time', 0.1)
            ]
        )

        # Leer parámetros iniciales
        self.port = self.get_parameter('port').value
        self.sensor_update_rate = self.get_parameter('sensor_update_rate').value
        self.odom_update_rate = self.get_parameter('odom_update_rate').value
        self.max_linear_speed = self.get_parameter('max_linear_speed').value
        self.max_angular_speed = self.get_parameter('max_angular_speed').value
        self.battery_threshold = self.get_parameter('battery_threshold').value
        self.logging_level = self.get_parameter('logging_level').value
        self.enable_logging_sensors = self.get_parameter('enable_logging_sensors').value
        self.odom_frame_id = self.get_parameter('odom_frame_id').value
        self.base_frame_id = self.get_parameter('base_frame_id').value
        self.cmd_vel_time = self.get_parameter('cmd_vel_time').value

        # Inicializar variables de posición y orientación
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0

        # Variables para seguimiento del movimiento
        self.current_linear_velocity = 0.0
        self.current_angular_velocity = 0.0
        self.last_update_time = self.get_clock().now()

        # Variables de odometría
        self.last_distance = 0.0
        self.last_angle = 0.0

        # Comprobar tiempo del comando cmd_vel
        self.last_cmd_vel_time = self.get_clock().now()
        self.create_timer(self.cmd_vel_time, self.check_cmd_vel_timeout)

        # Configurar niveles de registro
        self.get_logger().set_level(self._get_logging_level(self.logging_level))

        # Inicializar el robot
        self.get_logger().info(f"Intentando conectar con el puerto {self.port}")
        try:
            self.robot = Create2(self.port)
            self.robot.start()
            self.robot.oi_mode = MODES.FULL
            self.get_logger().info(f"Roomba iniciado en modo FULL en el puerto {self.port}")
        except Exception as e:
            self.get_logger().error(f"Error al inicializar el Roomba: {e}")
            raise

        # Configurar publicadores y suscriptores
        self.setup_publishers()

        # Transform broadcaster para odometría
        self.tf_broadcaster = TransformBroadcaster(self)

        # Timers para publicar sensores y odometría
        self.sensor_timer = self.create_timer(self.sensor_update_rate, self.publish_sensors)
        self.odom_timer = self.create_timer(self.odom_update_rate, self.publish_odometry)

        # Configurar parámetros dinámicos
        self.add_on_set_parameters_callback(self.parameters_callback)

    def parameters_callback(self, params):
        """Actualizar parámetros dinámicos con validaciones."""
        successful = True
        for param in params:
            try:
                if param.name == 'sensor_update_rate':
                    if param.value > 0.0:
                        self.sensor_timer.cancel()  # Detener el timer actual
                        self.sensor_update_rate = param.value
                        self.sensor_timer = self.create_timer(self.sensor_update_rate, self.publish_sensors)
                        self.get_logger().info(f"sensor_update_rate actualizado a {param.value}")
                    else:
                        self.get_logger().warn(f"Valor no válido para sensor_update_rate: {param.value}")
                        successful = False

                elif param.name == 'odom_update_rate':
                    if param.value > 0.0:
                        self.odom_update_rate = param.value
                        self.get_logger().info(f"odom_update_rate actualizado a {param.value}")
                    else:
                        self.get_logger().warn(f"Valor no válido para odom_update_rate: {param.value}")
                        successful = False

                elif param.name == 'max_linear_speed':
                    if 0.0 < param.value <= 1.0:  # Ejemplo: límite máximo de 1.0 m/s
                        self.max_linear_speed = param.value
                        self.get_logger().info(f"max_linear_speed actualizado a {param.value}")
                    else:
                        self.get_logger().warn(f"Valor no válido para max_linear_speed: {param.value}")
                        successful = False

                elif param.name == 'max_angular_speed':
                    if 0.0 < param.value <= 5.0:  # Ejemplo: límite máximo de 5.0 rad/s
                        self.max_angular_speed = param.value
                        self.get_logger().info(f"max_angular_speed actualizado a {param.value}")
                    else:
                        self.get_logger().warn(f"Valor no válido para max_angular_speed: {param.value}")
                        successful = False

                elif param.name == 'logging_level':
                    if param.value in ['debug', 'info', 'warn', 'error']:
                        self.logging_level = param.value
                        self.get_logger().set_level(self._get_logging_level(param.value))
                        self.get_logger().info(f"Nivel de logging actualizado a {param.value}")
                    else:
                        self.get_logger().warn(f"Valor no válido para logging_level: {param.value}")
                        successful = False

                elif param.name == 'cmd_vel_time':
                    if param.value > 0.0:
                        self.cmd_vel_time = param.value
                        self.get_logger().info(f"cmd_vel_time actualizado a {param.value}")
                    else:
                        self.get_logger().warn(f"Valor no válido para cmd_vel_time: {param.value}")
                        successful = False

                else:
                    self.get_logger().warn(f"Parámetro desconocido: {param.name}")

            except Exception as e:
                self.get_logger().error(f"Error actualizando parámetro {param.name}: {e}")
                successful = False

        return SetParametersResult(successful=successful)


    def setup_publishers(self):
        """Configurar todos los publicadores y suscriptores."""
        self.battery_pub = self.create_publisher(Float32, '/roomba/sensors/battery', 10)
        self.cliff_left_pub = self.create_publisher(Bool, '/roomba/sensors/cliff_left', 10)
        self.cliff_right_pub = self.create_publisher(Bool, '/roomba/sensors/cliff_right', 10)
        self.bump_left_pub = self.create_publisher(Bool, '/roomba/sensors/bump_left', 10)
        self.bump_right_pub = self.create_publisher(Bool, '/roomba/sensors/bump_right', 10)
        self.wall_pub = self.create_publisher(Bool, '/roomba/sensors/wall', 10)
        self.voltage_pub = self.create_publisher(Float32, '/roomba/sensors/voltage', 10)
        self.current_pub = self.create_publisher(Float32, '/roomba/sensors/current', 10)
        self.temperature_pub = self.create_publisher(Float32, '/roomba/sensors/temperature', 10)
        self.odom_pub = self.create_publisher(Odometry, '/roomba/odom', 10)
        self.create_subscription(Twist, '/roomba/cmd_vel', self.cmd_vel_callback, 10)

    def publish_sensors(self):
        """Publicar datos de sensores periódicamente con validaciones."""
        try:
            # Validar y leer datos de sensores
            battery = Float32(data=float(self.robot.battery_charge or 0.0))
            cliff_left = Bool(data=bool(self.robot.cliff_left)) if self.robot.cliff_left is not None else Bool(data=False)
            cliff_right = Bool(data=bool(self.robot.cliff_right)) if self.robot.cliff_right is not None else Bool(data=False)
            bump_left = Bool(data=bool(self.robot.bumps_and_wheel_drops.bump_left)) if self.robot.bumps_and_wheel_drops.bump_left is not None else Bool(data=False)
            bump_right = Bool(data=bool(self.robot.bumps_and_wheel_drops.bump_right)) if self.robot.bumps_and_wheel_drops.bump_right is not None else Bool(data=False)
            wall = Bool(data=bool(self.robot.wall_sensor)) if self.robot.wall_sensor is not None else Bool(data=False)
            voltage = Float32(data=float(self.robot.voltage or 0.0))
            current = Float32(data=float(self.robot.current or 0.0))
            temperature = Float32(data=float(self.robot.temperature or 0.0))

            # Publicar datos validados
            self.battery_pub.publish(battery)
            self.cliff_left_pub.publish(cliff_left)
            self.cliff_right_pub.publish(cliff_right)
            self.bump_left_pub.publish(bump_left)
            self.bump_right_pub.publish(bump_right)
            self.wall_pub.publish(wall)
            self.voltage_pub.publish(voltage)
            self.current_pub.publish(current)
            self.temperature_pub.publish(temperature)

            # Log con información detallada
            self.get_logger().debug(
                f"Sensores publicados - Batería: {battery.data}%, Cliff Izq: {cliff_left.data}, Cliff Der: {cliff_right.data}, "
                f"Bump Izq: {bump_left.data}, Bump Der: {bump_right.data}, Wall: {wall.data}, Voltaje: {voltage.data}V, "
                f"Corriente: {current.data}A, Temperatura: {temperature.data}°C"
            )
        except AttributeError as e:
            self.get_logger().error(f"Error leyendo datos del sensor: {e}")
        except Exception as e:
            self.get_logger().error(f"Error publicando sensores: {e}")

    def publish_odometry(self):
        """Publicar datos de odometría."""
        try:
            current_time = self.get_clock().now()
            dt = (current_time - self.last_update_time).nanoseconds / 1e9

            if dt <= 0.0001:
                self.get_logger().warn(f"Delta tiempo insuficiente ({dt:.9f} s), omitiendo actualización de odometría")
                return

            current_distance = float(self.robot.distance) / 1000.0
            current_angle = float(self.robot.angle)

            delta_distance = current_distance - self.last_distance
            delta_angle = (current_angle - self.last_angle) * (pi / 180.0)

            self.current_linear_velocity = delta_distance / dt
            self.current_angular_velocity = delta_angle / dt

            self.theta += delta_angle
            self.x += delta_distance * cos(self.theta)
            self.y += delta_distance * sin(self.theta)

            odom_msg = Odometry()
            odom_msg.header.stamp = current_time.to_msg()
            odom_msg.header.frame_id = "odom"
            odom_msg.child_frame_id = "base_link"

            quat = self.quaternion_from_euler(0, 0, self.theta)
            odom_msg.pose.pose.position.x = self.x
            odom_msg.pose.pose.position.y = self.y
            odom_msg.pose.pose.orientation = quat

            odom_msg.twist.twist.linear.x = self.current_linear_velocity
            odom_msg.twist.twist.angular.z = self.current_angular_velocity

            self.odom_pub.publish(odom_msg)

            self.get_logger().info(
                f"Odometría publicada - Posición: ({self.x:.3f}, {self.y:.3f}), "
                f"Orientación: {self.theta:.3f} rad, Vel. Lineal: {self.current_linear_velocity:.3f} m/s, "
                f"Vel. Angular: {self.current_angular_velocity:.3f} rad/s"
            )

            self.last_distance = current_distance
            self.last_angle = current_angle
            self.last_update_time = current_time

        except Exception as e:
            self.get_logger().error(f"Error en odometría: {e}")

    def cmd_vel_callback(self, msg):
        """Procesa comandos de velocidad."""
        self.last_cmd_vel_time = self.get_clock().now()
        try:
            linear_speed = msg.linear.x
            angular_speed = msg.angular.z

            if angular_speed != 0:
                if angular_speed > 0:
                    self.robot.spin_left(int(abs(angular_speed * 200)))
                else:
                    self.robot.spin_right(int(abs(angular_speed * 200)))
            elif linear_speed != 0:
                self.robot.drive_straight(int(linear_speed * 200))
            else:
                self.robot.drive_straight(0)

            self.get_logger().info(
                f"Comando recibido - Velocidad Lineal: {linear_speed:.3f} m/s, Velocidad Angular: {angular_speed:.3f} rad/s"
            )
        except Exception as e:
            self.get_logger().error(f"Error en cmd_vel: {e}")

    def check_cmd_vel_timeout(self):
        if (self.get_clock().now() - self.last_cmd_vel_time).nanoseconds / 1e9 > self.get_parameter('timeout_cmd_vel').value:
            self.robot.drive_straight(0)
            self.get_logger().warn("Comando de velocidad no recibido a tiempo. Deteniendo el robot.")
    
    def _get_logging_level(self, level_name):
        """Convertir un nombre de nivel de registro a un valor de nivel."""
        levels = {
            'debug': rclpy.logging.LoggingSeverity.DEBUG,
            'info': rclpy.logging.LoggingSeverity.INFO,
            'warn': rclpy.logging.LoggingSeverity.WARN,
            'error': rclpy.logging.LoggingSeverity.ERROR
        }
        return levels.get(level_name.lower(), rclpy.logging.LoggingSeverity.INFO)

    def quaternion_from_euler(self, roll, pitch, yaw):
        """Convertir ángulos de Euler a cuaternión."""
        qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
        qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
        qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
        qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
        return Quaternion(x=qx, y=qy, z=qz, w=qw)

def main(args=None):
    rclpy.init(args=args)
    node = RoombaNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
