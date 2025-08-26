from irobot.robots.create2 import Create2
from lib_robot_roomba import Robot
import rclpy
from rclpy.node import Node

class RobotTestNode(Node):
    def __init__(self):
        super().__init__('robot_test_node')
        self.roomba = Robot(node=self)

        # Conectar
        self.roomba.connect_robot(
            connection_type='Serial',
            serial_port='/dev/ttyUSB0',
            connection_mode='FULL'
        )

        # Probar movimiento
        self.roomba.drive_forward(speed=100, duration=1)
        self.roomba.spin(direction='right', speed=50, duration=1)

        # Probar limpieza
        self.roomba.start_cleaning()
        self.roomba.stop_cleaning()

        # Probar LEDs
        self.roomba.set_leds(color=128, intensity=255)

        # Probar cepillos
        self.roomba.set_brushes(main_brush=True, side_brush=True, vacuum=True)
        self.roomba.stop_brushes()

        # Probar música
        self.roomba.play_song(song_number=1, notes=[(64, 16), (67, 16)])
        self.roomba.stop_song()

        # Probar docking
        self.roomba.seek_dock()

        # Obtener estado
        estado = self.roomba.get_status(include_sensors=True)
        self.get_logger().info(f"Estado: {estado}")

        # Desconectar
        self.roomba.disconnect()


def main(args=None):
    rclpy.init(args=args)
    node = RobotTestNode()
    rclpy.spin_once(node, timeout_sec=1)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
