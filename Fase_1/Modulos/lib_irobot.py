from irobot.robots.create2 import Create2
from irobot.openinterface.constants import MODES
import time

# instantiate robot
def connect_robot(serial_com):
    return (Create2(serial_com, baud_rate=115200))

#Inicialización y configuración
def iniciar_robot(robot):
    """Configura el robot en modo FULL para habilitar todas las funciones."""
    robot.start()
    robot.oi_mode = MODES.FULL
    print("Robot iniciado en modo FULL")

def detener_robot(robot):
    """Detiene y apaga el robot."""
    robot.stop()
    print("Robot detenido")

def reset_robot(robot):
    """Resetea el robot, útil para restablecer estado."""
    robot.reset()
    time.sleep(5)
    print("Robot reseteado")

#Monitoreo de sensores
def leer_sensores_basicos(robot):
    """Lee sensores de colisión, caída y pared."""
    return {
        "bump_left": robot.bumps_and_wheel_drops.bump_left,
        "bump_right": robot.bumps_and_wheel_drops.bump_right,
        "wheel_drop_left": robot.bumps_and_wheel_drops.wheel_drop_left,
        "wheel_drop_right": robot.bumps_and_wheel_drops.wheel_drop_right,
        "wall": robot.wall_sensor,
        "virtual_wall": robot.virtual_wall
    }

def leer_estado_bateria(robot):
    """Devuelve el estado de la batería del robot."""
    return {
        "voltage": robot.voltage,
        "current": robot.current,
        "temperature": robot.temperature,
        "charge": robot.battery_charge,
        "capacity": robot.battery_capacity
    }

def leer_proximidad(robot):
    """Devuelve datos de proximidad (pared y luz reflejada)."""
    return {
        "cliff_left_signal": robot.cliff_left_signal,
        "cliff_front_left_signal": robot.cliff_front_left_signal,
        "cliff_front_right_signal": robot.cliff_front_right_signal,
        "cliff_right_signal": robot.cliff_right_signal,
        "wall_signal": robot.wall_signal
    }

def leer_estado_movimiento(robot):
    """Devuelve datos relacionados con el movimiento."""
    return {
        "distance": robot.distance,
        "angle": robot.angle,
        "left_encoder_counts": robot.left_encoder_counts,
        "right_encoder_counts": robot.right_encoder_counts
    }

#Procesar sensores
#Puedes crear funciones que interpreten los valores, por ejemplo, para evitar caídas o colisiones:
def detectar_colision(sensores):
    """Devuelve True si hay colisión detectada."""
    return sensores["bump_left"] or sensores["bump_right"]

def detectar_peligro_de_caida(sensores):
    """Devuelve True si hay riesgo de caída."""
    return sensores["cliff_left_signal"] < 100 or sensores["cliff_front_left_signal"] < 100 or sensores["cliff_front_right_signal"] < 100 or sensores["cliff_right_signal"] < 100


#Control de movimiento
def mover_adelante(robot, velocidad, duracion):
    """Mueve el robot hacia adelante."""
    robot.drive_straight(velocidad)
    time.sleep(duracion)
    robot.drive_straight(0)  # Detiene el robot

def girar(robot, velocidad, direccion, duracion):
    """
    Gira el robot a una velocidad.
    Dirección:
    - 'izquierda' para giro antihorario.
    - 'derecha' para giro horario.
    """
    if direccion == 'izquierda':
        robot.spin_left(velocidad)
    elif direccion == 'derecha':
        robot.spin_right(velocidad)
    else:
        print("Dirección no válida")
        return
    time.sleep(duracion)
    robot.drive_straight(0)  # Detener el giro

def moverse_manual(robot, velocidad_izq, velocidad_der, duracion):
    """Control directo de las ruedas a diferentes velocidades."""
    robot.drive_direct(velocidad_izq, velocidad_der)
    time.sleep(duracion)
    robot.drive_direct(0, 0)  # Detener


#Control de limpieza
def activar_limpieza(robot):
    """Inicia el modo de limpieza predeterminado."""
    robot.clean()
    print("Limpieza iniciada")

def activar_limpieza_max(robot):
    """Inicia el modo de limpieza máxima."""
    robot.clean_max()
    print("Limpieza máxima iniciada")

def activar_motor(robot, cepillo_principal=True, cepillo_lateral=True, aspiradora=True):
    """Controla los motores de los cepillos y la aspiradora."""
    robot.set_motors(
        main_brush_on=cepillo_principal,
        side_brush=cepillo_lateral,
        vacuum=aspiradora
    )
    print("Motores configurados")

def detener_motor(robot):
    """Detiene todos los motores."""
    robot.set_motors(False, False, False)
    print("Motores detenidos")


#Indicadores y feedback
def encender_led(robot, color, intensidad):
    """Controla el LED de encendido."""
    robot.set_leds(power_color=color, power_intensity=intensidad)
    print(f"LED configurado: Color={color}, Intensidad={intensidad}")

def reproducir_musica(robot, numero_cancion, notas):
    """Define y reproduce una canción."""
    robot.set_song(numero_cancion, notas)
    robot.play_song(numero_cancion)
    print(f"Reproduciendo canción #{numero_cancion}")


#Acciones avanzadas
def buscar_base(robot):
    """Inicia la búsqueda de la base de carga."""
    robot.seek_dock()
    print("Buscando la base de carga")

def patrulla_rapida(robot):
    """Rutina de patrulla: avanza y gira periódicamente."""
    for _ in range(3):
        mover_adelante(robot, 100, 2)
        girar(robot, 100, 'derecha', 1)
    print("Patrulla completada")
