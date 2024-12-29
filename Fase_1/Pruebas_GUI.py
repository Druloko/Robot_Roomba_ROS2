import Modulos.lib_irobot as lib_irobot
import time
import sys

# Configuración del puerto serial (ajusta según tu configuración)
# Cambia "COM10" si estás en Windows o "/dev/pts/2" si usas un puerto virtual en Linux
serial_com = "/dev/pts/2"

def main():
    try:
        print(f"Conectando al robot en el puerto: {serial_com}...")
        
        # Conectar al robot
        robot = lib_irobot.connect_robot(serial_com)
        
        # Cambiar al modo FULL
        lib_irobot.iniciar_robot(robot)
        print("Robot configurado en modo FULL.")

        # Realiza alguna acción de prueba (puedes eliminar esta parte si no la necesitas)
        print("Moviendo el robot hacia adelante por 1 segundo...")
        lib_irobot.mover_adelante(robot, velocidad=100, duracion=1)  # Velocidad: 100 mm/s, Duración: 1 segundo

        # Espera 2 segundos antes de cerrar la comunicación
        time.sleep(2)

    except Exception as e:
        print(f"Error: {e}")

    finally:
        try:
            # Detener el robot y cerrar la comunicación
            lib_irobot.detener_robot(robot)
            lib_irobot.cerrar_comunicacion(robot)
            print("Robot detenido y comunicación cerrada correctamente.")
        except Exception as e:
            print(f"Error al detener el robot o cerrar la comunicación: {e}")

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print("\nEjecución interrumpida por el usuario.")
        sys.exit(0)
