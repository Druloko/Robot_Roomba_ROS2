import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Float32, Bool
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from tf_transformations import quaternion_from_euler
import time
from irobot.robots.create2 import Create2
from irobot.openinterface.constants import MODES

class RoombaNode(Node):
    def __init__(self):
        super().__init__('roomba_node')

        # Inicializar el robot
        self.robot = Create2("COM3")
        self.robot.start()
        self.robot.oi_mode = MODES.FULL
        self.get_logger().info("Roomba iniciado en modo FULL")

        # Variables de odometría
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0
        self.last_distance = 0.0
        self.last_angle = 0.0

        # Publicadores
        self.odom_pub = self.create_publisher(Odometry, 'roomba/odom', 10)
        self.sensor_pub = self.create_publisher(String, 'roomba/sensors', 10)

        # Subscriptores
        self.create_subscription(Twist, 'roomba/cmd_vel', self.cmd_vel_callback, 10)
        self.create_subscription(String, 'roomba/command', self.command_callback, 10)

        # Timer para publicar sensores y odometría periódicamente
        self.sensor_timer = self.create_timer(1.0, self.publish_sensors)
        self.odom_timer = self.create_timer(0.1, self.publish_odometry)

    def publish_sensors(self):
        """Publicar datos de sensores periódicamente."""
        sensors = {
            "battery": self.robot.battery_charge,
            "cliff_left": self.robot.cliff_left,
            "cliff_right": self.robot.cliff_right,
            "bump_left": self.robot.bumps_and_wheel_drops.bump_left,
            "bump_right": self.robot.bumps_and_wheel_drops.bump_right,
            "wall": self.robot.wall_sensor,
            "voltage": self.robot.voltage,
            "current": self.robot.current,
            "temperature": self.robot.temperature,
            "left_motor_current": self.robot.left_motor_current,
            "right_motor_current": self.robot.right_motor_current,
            "main_brush_motor_current": self.robot.main_brush_motor_current,
            "side_brush_motor_current": self.robot.side_brush_motor_current
        }
        self.sensor_pub.publish(String(data=str(sensors)))
        self.get_logger().info(f"Sensores publicados: {sensors}")

    def publish_odometry(self):
        """Publicar datos de odometría."""
        # Leer distancia y ángulo desde la última lectura
        distance = self.robot.distance
        angle = self.robot.angle

        # Actualizar posición
        delta_distance = distance - self.last_distance
        delta_angle = angle - self.last_angle

        self.last_distance = distance
        self.last_angle = angle

        # Convertir ángulo a radianes
        delta_theta = delta_angle * (3.14159 / 180.0)
        self.theta += delta_theta

        # Calcular nuevas posiciones
        self.x += delta_distance * cos(self.theta)
        self.y += delta_distance * sin(self.theta)

        # Crear mensaje de odometría
        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = "odom"
        odom_msg.child_frame_id = "base_link"

        # Posición
        odom_msg.pose.pose.position.x = self.x
        odom_msg.pose.pose.position.y = self.y
        odom_msg.pose.pose.position.z = 0.0

        # Orientación (como cuaternión)
        quaternion = quaternion_from_euler(0, 0, self.theta)
        odom_msg.pose.pose.orientation.x = quaternion[0]
        odom_msg.pose.pose.orientation.y = quaternion[1]
        odom_msg.pose.pose.orientation.z = quaternion[2]
        odom_msg.pose.pose.orientation.w = quaternion[3]

        # Velocidades
        odom_msg.twist.twist.linear.x = delta_distance / 0.1
        odom_msg.twist.twist.angular.z = delta_theta / 0.1

        # Publicar odometría
        self.odom_pub.publish(odom_msg)
        self.get_logger().info(f"Odometry: x={self.x}, y={self.y}, theta={self.theta}")

    def cmd_vel_callback(self, msg):
        """Callback para controlar el movimiento del robot."""
        linear = msg.linear.x
        angular = msg.angular.z

        if angular != 0:
            if angular > 0:
                self.robot.spin_left(int(abs(angular * 200)))
            else:
                self.robot.spin_right(int(abs(angular * 200)))
        elif linear != 0:
            self.robot.drive_straight(int(linear * 200))
        else:
            self.robot.drive_straight(0)  # Detener

        self.get_logger().info(f"Movimiento recibido: linear={linear}, angular={angular}")

    def command_callback(self, msg):
        """Callback para comandos generales."""
        command = msg.data.lower()
        if command == "clean":
            self.robot.clean()
            self.get_logger().info("Modo limpieza iniciado")
        elif command == "stop":
            self.robot.stop()
            self.get_logger().info("Robot detenido")
        elif command == "dock":
            self.robot.seek_dock()
            self.get_logger().info("Buscando la base de carga")
        else:
            self.get_logger().warn(f"Comando no reconocido: {command}")


def main(args=None):
    rclpy.init(args=args)
    node = RoombaNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()