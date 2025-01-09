import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from tf_transformations import quaternion_from_euler
from irobot.robots.create2 import Create2
from irobot.openinterface.constants import MODES
from math import sin, cos


class RoombaNode(Node):
    def __init__(self):
        super().__init__('roomba_node')

        # Declarar parámetros básicos
        self.declare_parameter('port', 'COM3')
        self.declare_parameter('sensor_update_rate', 1.0)
        self.declare_parameter('odom_update_rate', 0.1)

        # Parámetros de movimiento
        self.declare_parameter('max_linear_speed', 0.5)
        self.declare_parameter('max_angular_speed', 1.5)
        self.declare_parameter('speed_multiplier', 1.0)
        self.declare_parameter('spin_multiplier', 1.0)

        # Parámetros de sensores
        self.declare_parameter('battery_threshold', 20.0)
        self.declare_parameter('enable_cliff_detection', True)
        self.declare_parameter('enable_bump_detection', True)

        # Parámetros de comportamiento
        self.declare_parameter('cleaning_mode', 'auto')
        self.declare_parameter('return_to_dock_on_low_battery', True)

        # Parámetros avanzados
        self.declare_parameter('timeout_cmd_vel', 2.0)
        self.declare_parameter('logging_level', 'info')
        self.declare_parameter('enable_logging_sensors', True)

        # Parámetros para temas y frames
        self.declare_parameter('odom_frame_id', 'odom')
        self.declare_parameter('base_frame_id', 'base_link')
        self.declare_parameter('sensor_topic', 'roomba/sensors')
        self.declare_parameter('odom_topic', 'roomba/odom')

        # Leer los valores de los parámetros
        self.port = self.get_parameter('port').get_parameter_value().string_value
        self.sensor_update_rate = self.get_parameter('sensor_update_rate').get_parameter_value().double_value
        self.odom_update_rate = self.get_parameter('odom_update_rate').get_parameter_value().double_value
        self.max_linear_speed = self.get_parameter('max_linear_speed').get_parameter_value().double_value
        self.max_angular_speed = self.get_parameter('max_angular_speed').get_parameter_value().double_value
        self.speed_multiplier = self.get_parameter('speed_multiplier').get_parameter_value().double_value
        self.spin_multiplier = self.get_parameter('spin_multiplier').get_parameter_value().double_value
        self.battery_threshold = self.get_parameter('battery_threshold').get_parameter_value().double_value
        self.enable_cliff_detection = self.get_parameter('enable_cliff_detection').get_parameter_value().bool_value
        self.enable_bump_detection = self.get_parameter('enable_bump_detection').get_parameter_value().bool_value
        self.odom_frame_id = self.get_parameter('odom_frame_id').get_parameter_value().string_value
        self.base_frame_id = self.get_parameter('base_frame_id').get_parameter_value().string_value
        self.sensor_topic = self.get_parameter('sensor_topic').get_parameter_value().string_value
        self.odom_topic = self.get_parameter('odom_topic').get_parameter_value().string_value

        # Inicializar el robot
        self.robot = Create2(self.port)
        self.robot.start()
        self.robot.oi_mode = MODES.FULL
        self.get_logger().info(f"Roomba iniciado en modo FULL en el puerto {self.port}")

        # Variables de odometría
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0
        self.last_distance = 0.0
        self.last_angle = 0.0

        # Publicadores
        self.odom_pub = self.create_publisher(Odometry, self.odom_topic, 10)
        self.sensor_pub = self.create_publisher(String, self.sensor_topic, 10)

        # Subscriptores
        self.create_subscription(Twist, 'roomba/cmd_vel', self.cmd_vel_callback, 10)
        self.create_subscription(String, 'roomba/command', self.command_callback, 10)

        # Timer para publicar sensores y odometría periódicamente
        self.sensor_timer = self.create_timer(self.sensor_update_rate, self.publish_sensors)
        self.odom_timer = self.create_timer(self.odom_update_rate, self.publish_odometry)

    def publish_sensors(self):
        """Publicar datos de sensores periódicamente."""
        sensors = {
            "battery": self.robot.battery_charge,
            "cliff_left": self.robot.cliff_left if self.enable_cliff_detection else None,
            "cliff_right": self.robot.cliff_right if self.enable_cliff_detection else None,
            "bump_left": self.robot.bumps_and_wheel_drops.bump_left if self.enable_bump_detection else None,
            "bump_right": self.robot.bumps_and_wheel_drops.bump_right if self.enable_bump_detection else None,
            "wall": self.robot.wall_sensor,
            "voltage": self.robot.voltage,
            "current": self.robot.current,
            "temperature": self.robot.temperature,
        }
        if self.get_parameter('enable_logging_sensors').get_parameter_value().bool_value:
            self.get_logger().info(f"Sensores publicados: {sensors}")
        self.sensor_pub.publish(String(data=str(sensors)))

    def publish_odometry(self):
        """Publicar datos de odometría."""
        distance = self.robot.distance
        angle = self.robot.angle

        delta_distance = distance - self.last_distance
        delta_angle = angle - self.last_angle

        self.last_distance = distance
        self.last_angle = angle

        delta_theta = delta_angle * (3.14159 / 180.0)
        self.theta += delta_theta

        self.x += delta_distance * cos(self.theta)
        self.y += delta_distance * sin(self.theta)

        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = self.odom_frame_id
        odom_msg.child_frame_id = self.base_frame_id

        quaternion = quaternion_from_euler(0, 0, self.theta)
        odom_msg.pose.pose.position.x = self.x
        odom_msg.pose.pose.position.y = self.y
        odom_msg.pose.pose.orientation.z = quaternion[2]
        odom_msg.pose.pose.orientation.w = quaternion[3]

        self.odom_pub.publish(odom_msg)

    def cmd_vel_callback(self, msg):
        """Controlar el movimiento del robot."""
        linear = max(min(msg.linear.x * self.speed_multiplier, self.max_linear_speed), -self.max_linear_speed)
        angular = max(min(msg.angular.z * self.spin_multiplier, self.max_angular_speed), -self.max_angular_speed)

        if angular != 0:
            if angular > 0:
                self.robot.spin_left(int(abs(angular * 200)))
            else:
                self.robot.spin_right(int(abs(angular * 200)))
        elif linear != 0:
            self.robot.drive_straight(int(linear * 200))
        else:
            self.robot.drive_straight(0)

    def command_callback(self, msg):
        """Procesar comandos generales."""
        command = msg.data.lower()
        if command == "clean":
            self.robot.clean()
        elif command == "dock":
            self.robot.seek_dock()


def main(args=None):
    rclpy.init(args=args)
    node = RoombaNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
