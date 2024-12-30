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


class RoombaNode(Node):
    def __init__(self):
        super().__init__('roomba_node')

        # Declarar parámetros básicos
        self.declare_parameter('port', '/dev/ttyUSB0')
        self.declare_parameter('sensor_update_rate', 1.0)
        self.declare_parameter('odom_update_rate', 0.1)

        # Leer los valores de los parámetros
        self.port = self.get_parameter('port').get_parameter_value().string_value
        self.sensor_update_rate = self.get_parameter('sensor_update_rate').get_parameter_value().double_value
        self.odom_update_rate = self.get_parameter('odom_update_rate').get_parameter_value().double_value

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

        # Publicadores para sensores individuales
        self.battery_pub = self.create_publisher(Float32, '/roomba/sensors/battery', 10)
        self.cliff_left_pub = self.create_publisher(Bool, '/roomba/sensors/cliff_left', 10)
        self.cliff_right_pub = self.create_publisher(Bool, '/roomba/sensors/cliff_right', 10)
        self.bump_left_pub = self.create_publisher(Bool, '/roomba/sensors/bump_left', 10)
        self.bump_right_pub = self.create_publisher(Bool, '/roomba/sensors/bump_right', 10)
        self.wall_pub = self.create_publisher(Bool, '/roomba/sensors/wall', 10)
        self.voltage_pub = self.create_publisher(Float32, '/roomba/sensors/voltage', 10)
        self.current_pub = self.create_publisher(Float32, '/roomba/sensors/current', 10)
        self.temperature_pub = self.create_publisher(Float32, '/roomba/sensors/temperature', 10)

        # Publicador de odometría
        self.odom_pub = self.create_publisher(Odometry, '/roomba/odom', 10)

        # Suscriptor para comandos de velocidad
        self.create_subscription(Twist, '/roomba/cmd_vel', self.cmd_vel_callback, 10)

        # Transform broadcaster para odometría
        self.tf_broadcaster = TransformBroadcaster(self)

        # Timer para publicar sensores y odometría periódicamente
        self.sensor_timer = self.create_timer(self.sensor_update_rate, self.publish_sensors)
        self.odom_timer = self.create_timer(self.odom_update_rate, self.publish_odometry)

    def publish_sensors(self):
        """Publicar datos de sensores periódicamente."""
        try:
            # Publicar los valores con el tipo correcto
            self.battery_pub.publish(Float32(data=float(self.robot.battery_charge)))
            self.cliff_left_pub.publish(Bool(data=bool(self.robot.cliff_left)))
            self.cliff_right_pub.publish(Bool(data=bool(self.robot.cliff_right)))
            self.bump_left_pub.publish(Bool(data=bool(self.robot.bumps_and_wheel_drops.bump_left)))
            self.bump_right_pub.publish(Bool(data=bool(self.robot.bumps_and_wheel_drops.bump_right)))
            self.wall_pub.publish(Bool(data=bool(self.robot.wall_sensor)))
            self.voltage_pub.publish(Float32(data=float(self.robot.voltage)))
            self.current_pub.publish(Float32(data=float(self.robot.current)))
            self.temperature_pub.publish(Float32(data=float(self.robot.temperature)))

            self.get_logger().info(f"Datos de sensores publicados correctamente.")
        except Exception as e:
            self.get_logger().error(f"Error publicando datos de sensores: {e}")

    def publish_odometry(self):
        """Publicar datos de odometría."""
        try:
            distance = self.robot.distance
            angle = self.robot.angle

            delta_distance = distance - getattr(self, 'last_distance', 0.0)
            delta_angle = angle - getattr(self, 'last_angle', 0.0)

            self.last_distance = distance
            self.last_angle = angle

            delta_theta = delta_angle * (pi / 180.0)
            self.theta = getattr(self, 'theta', 0.0) + delta_theta

            self.x = getattr(self, 'x', 0.0) + delta_distance * cos(self.theta)
            self.y = getattr(self, 'y', 0.0) + delta_distance * sin(self.theta)

            # Crear mensaje de odometría
            odom_msg = Odometry()
            odom_msg.header.stamp = self.get_clock().now().to_msg()
            odom_msg.header.frame_id = "odom"
            odom_msg.child_frame_id = "base_link"

            quaternion = self.quaternion_from_euler(0, 0, self.theta)
            odom_msg.pose.pose.position.x = self.x
            odom_msg.pose.pose.position.y = self.y
            odom_msg.pose.pose.orientation = quaternion

            # Publicar odometría
            self.odom_pub.publish(odom_msg)

            # Publicar transformación
            t = TransformStamped()
            t.header.stamp = self.get_clock().now().to_msg()
            t.header.frame_id = "odom"
            t.child_frame_id = "base_link"
            t.transform.translation.x = self.x
            t.transform.translation.y = self.y
            t.transform.translation.z = 0.0
            t.transform.rotation = quaternion

            self.tf_broadcaster.sendTransform(t)
        except Exception as e:
            self.get_logger().error(f"Error publicando odometría: {e}")

    def quaternion_from_euler(self, roll, pitch, yaw):
        """Convertir ángulos de Euler a un cuaternión."""
        qx = sin(roll / 2) * cos(pitch / 2) * cos(yaw / 2) - cos(roll / 2) * sin(pitch / 2) * sin(yaw / 2)
        qy = cos(roll / 2) * sin(pitch / 2) * cos(yaw / 2) + sin(roll / 2) * cos(pitch / 2) * sin(yaw / 2)
        qz = cos(roll / 2) * cos(pitch / 2) * sin(yaw / 2) - sin(roll / 2) * sin(pitch / 2) * cos(yaw / 2)
        qw = cos(roll / 2) * cos(pitch / 2) * cos(yaw / 2) + sin(roll / 2) * sin(pitch / 2) * sin(yaw / 2)
        return Quaternion(x=qx, y=qy, z=qz, w=qw)

    def cmd_vel_callback(self, msg):
        """Procesa comandos de velocidad para mover el robot."""
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

            self.get_logger().info(f"Comando recibido: lineal={linear_speed}, angular={angular_speed}")
        except Exception as e:
            self.get_logger().error(f"Error procesando comando cmd_vel: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = RoombaNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
