import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import keyboard  # Necesitarás instalarlo con `pip install keyboard`

class KeyboardController(Node):
    def __init__(self):
        super().__init__('keyboard_controller')

        # Declarar parámetros básicos
        self.declare_parameter('cmd_vel_topic', 'roomba/cmd_vel')
        self.declare_parameter('linear_speed', 0.2)
        self.declare_parameter('angular_speed', 0.5)

        # Leer los valores de los parámetros
        self.cmd_vel_topic = self.get_parameter('cmd_vel_topic').get_parameter_value().string_value
        self.linear_speed = self.get_parameter('linear_speed').get_parameter_value().double_value
        self.angular_speed = self.get_parameter('angular_speed').get_parameter_value().double_value

        # Publicador para comandos de velocidad
        self.cmd_vel_pub = self.create_publisher(Twist, self.cmd_vel_topic, 10)

        self.get_logger().info(f"Control por teclado iniciado. Usa las flechas para mover el robot, 'q' para salir.")

    def run(self):
        """Loop principal para capturar y procesar las pulsaciones del teclado."""
        try:
            while rclpy.ok():
                # Capturar teclas de dirección
                twist = Twist()

                if keyboard.is_pressed('up'):  # Flecha hacia arriba
                    twist.linear.x = self.linear_speed
                elif keyboard.is_pressed('down'):  # Flecha hacia abajo
                    twist.linear.x = -self.linear_speed
                elif keyboard.is_pressed('left'):  # Flecha hacia izquierda
                    twist.angular.z = self.angular_speed
                elif keyboard.is_pressed('right'):  # Flecha hacia derecha
                    twist.angular.z = -self.angular_speed
                else:
                    # Detener movimiento si no hay teclas presionadas
                    twist.linear.x = 0.0
                    twist.angular.z = 0.0

                # Publicar el mensaje Twist
                self.cmd_vel_pub.publish(twist)

                # Salir del programa si se presiona 'q'
                if keyboard.is_pressed('q'):
                    self.get_logger().info("Saliendo del control por teclado...")
                    break

        except Exception as e:
            self.get_logger().error(f"Error durante la ejecución: {e}")


def main(args=None):
    rclpy.init(args=args)
    keyboard_controller = KeyboardController()

    try:
        keyboard_controller.run()
    finally:
        keyboard_controller.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
