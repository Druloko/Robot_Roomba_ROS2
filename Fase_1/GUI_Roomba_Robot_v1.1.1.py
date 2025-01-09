import tkinter as tk
from tkinter import ttk
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import matplotlib.pyplot as plt
import Modulos.irobot.lib_irobot as lib_irobot
<<<<<<< HEAD:Fase_1/GUI_Roomba_Robot.py.py
import time
=======
>>>>>>> 2b4b4d6ceaa7e48fd87d8cb7b3324259ab7a16ca:Fase_1/GUI_Roomba_Robot_v1.1.1.py

# Variable global para rastrear la tarea programada y la velocidad actual
tarea_after = None
velocidad_actual = 100  # Velocidad inicial
<<<<<<< HEAD:Fase_1/GUI_Roomba_Robot.py.py
#com = "/dev/ttyUSB0"
com = "COM11"
=======
serial_com = "COM10"
#serial_com = "/dev/pts/2"

>>>>>>> 2b4b4d6ceaa7e48fd87d8cb7b3324259ab7a16ca:Fase_1/GUI_Roomba_Robot_v1.1.1.py

# Crear gráfico de proximidad antes de definir `actualizar_datos`
fig, ax = plt.subplots(figsize=(6, 4))

<<<<<<< HEAD:Fase_1/GUI_Roomba_Robot.py.py
=======
# Bandera global para detener las actualizaciones si la aplicación se cierra
aplicacion_activa = True

>>>>>>> 2b4b4d6ceaa7e48fd87d8cb7b3324259ab7a16ca:Fase_1/GUI_Roomba_Robot_v1.1.1.py
# Configuración del robot
host = "192.168.0.191"  # IP del Jetson Nano
user = "jetson"      # Usuario del Jetson Nano
password = "N!colas735LA"  # Contraseña del Jetson Nano

def despertar_robot():
    lib_irobot.despertar_robot(host, user, password)

<<<<<<< HEAD:Fase_1/GUI_Roomba_Robot.py.py
=======
# Función para actualizar los datos de la interfaz gráfica
>>>>>>> 2b4b4d6ceaa7e48fd87d8cb7b3324259ab7a16ca:Fase_1/GUI_Roomba_Robot_v1.1.1.py
def actualizar_datos():
    global tarea_after, aplicacion_activa

    if not aplicacion_activa:
        return  # Si la aplicación no está activa, detén cualquier actualización

    try:
        # Actualizamos los datos de los sensores
        sensores_basicos = lib_irobot.leer_sensores_basicos(robot)
        estado_bateria = lib_irobot.leer_estado_bateria(robot)
        proximidad = lib_irobot.leer_proximidad(robot)
        odometria = lib_irobot.leer_estado_movimiento(robot)

        # Actualizar etiquetas de sensores básicos
        for sensor, estado in sensores_basicos.items():
            sensores_basicos_labels[sensor].config(text=f"{traducciones_sensores_basicos[sensor]}: {'Sí' if estado else 'No'}")

        # Actualizar etiquetas de batería
        for propiedad, valor in estado_bateria.items():
            bateria_labels[propiedad].config(text=f"{traducciones_bateria[propiedad]}: {valor}")

        # Actualizar etiquetas de odometría
        distancia_label.config(text=f"Distancia recorrida: {odometria['distance']} mm")
        angulo_label.config(text=f"Ángulo girado: {odometria['angle']}°")
        encoders_label.config(text=f"Encoder Izq: {odometria['left_encoder_counts']}, Der: {odometria['right_encoder_counts']}")

        # Actualizar gráfico de proximidad
        labels = [traducciones_proximidad[sensor] for sensor in proximidad.keys()]
        values = list(proximidad.values())
        ax.clear()
        ax.bar(labels, values, color='skyblue')
        ax.set_title("Sensores de Proximidad")
        ax.set_xlabel("Sensores")
        ax.set_ylabel("Valor")
        ax.tick_params(axis='x', rotation=45)
        canvas.draw()

        # Programar la próxima actualización
        tarea_after = root.after(1000, actualizar_datos)
    except Exception as e:
        print(f"Error al actualizar datos: {e}")

# Función para cerrar la aplicación
def cerrar_aplicacion():
    global tarea_after, aplicacion_activa

    # Cambiar bandera para detener `actualizar_datos`
    aplicacion_activa = False

    # Cancelar la tarea programada si existe
    if tarea_after:
        try:
            root.after_cancel(tarea_after)
            print("Tarea programada cancelada.")
        except Exception as e:
            print(f"Error al cancelar la tarea programada: {e}")
        finally:
            tarea_after = None

    # Detener el robot y cerrar comunicación
    try:
        lib_irobot.detener_robot(robot)
        lib_irobot.cerrar_comunicacion(robot)
        print("Robot detenido y comunicación cerrada.")
    except Exception as e:
        print(f"Error al detener el robot o cerrar la comunicación: {e}")

    # Cerrar la ventana
    try:
        root.quit()
        root.destroy()
        print("Aplicación cerrada correctamente.")
    except Exception as e:
        print(f"Error al cerrar la ventana: {e}")

# Funciones para los controles de movimiento
def mover_adelante():
    lib_irobot.mover_adelante(robot, velocidad_actual, 1)
    print(f"Moviendo adelante a {velocidad_actual} mm/s")

def mover_atras():
    lib_irobot.mover_adelante(robot, -velocidad_actual, 1)
    print(f"Moviendo atrás a {velocidad_actual} mm/s")

def girar_izquierda():
    lib_irobot.girar(robot, velocidad_actual, 'izquierda', 1)
    print(f"Girando izquierda a {velocidad_actual} mm/s")

def girar_derecha():
    lib_irobot.girar(robot, velocidad_actual, 'derecha', 1)
    print(f"Girando derecha a {velocidad_actual} mm/s")

def detener_robot():
    lib_irobot.detener_robot(robot)
    print("Robot detenido")

# Funciones para ajustes de velocidad
def aumentar_velocidad():
    global velocidad_actual
    velocidad_actual += 50
    velocidad_label.config(text=f"Velocidad actual: {velocidad_actual} mm/s")
    print(f"Velocidad aumentada a {velocidad_actual} mm/s")

def disminuir_velocidad():
    global velocidad_actual
    velocidad_actual = max(50, velocidad_actual - 50)
    velocidad_label.config(text=f"Velocidad actual: {velocidad_actual} mm/s")
    print(f"Velocidad reducida a {velocidad_actual} mm/s")

# Funciones para acciones automáticas
def patrulla():
    print("Iniciando patrulla...")
    for _ in range(3):
        mover_adelante()
        girar_derecha()

def buscar_base():
    print("Buscando base de carga...")
    lib_irobot.buscar_base(robot)

# Inicialización del robot
despertar_robot()
<<<<<<< HEAD:Fase_1/GUI_Roomba_Robot.py.py
robot = lib_irobot.connect_robot(com)
=======
robot = lib_irobot.connect_robot(serial_com)
>>>>>>> 2b4b4d6ceaa7e48fd87d8cb7b3324259ab7a16ca:Fase_1/GUI_Roomba_Robot_v1.1.1.py
lib_irobot.iniciar_robot(robot)

# Traducciones para los sensores
traducciones_sensores_basicos = {
    "bump_left": "Colisión izquierda",
    "bump_right": "Colisión derecha",
    "wheel_drop_left": "Caída rueda izquierda",
    "wheel_drop_right": "Caída rueda derecha",
    "wall": "Pared detectada",
    "virtual_wall": "Pared virtual detectada"
}

traducciones_bateria = {
    "voltage": "Voltaje",
    "current": "Corriente",
    "temperature": "Temperatura",
    "charge": "Carga",
    "capacity": "Capacidad"
}

traducciones_proximidad = {
    "cliff_left_signal": "Acantilado izquierdo",
    "cliff_front_left_signal": "Acantilado frontal izquierdo",
    "cliff_front_right_signal": "Acantilado frontal derecho",
    "cliff_right_signal": "Acantilado derecho",
    "wall_signal": "Señal de pared"
}

# Crear ventana principal
root = tk.Tk()
root.title("Monitor de Robot iRobot")
root.geometry("1200x1000")

# Frame para sensores básicos
frame_sensores_basicos = ttk.LabelFrame(root, text="Sensores Básicos", padding=(10, 5))
frame_sensores_basicos.grid(row=0, column=0, padx=10, pady=5, sticky="nsew")
sensores_basicos_labels = {}
for sensor, traduccion in traducciones_sensores_basicos.items():
    label = ttk.Label(frame_sensores_basicos, text=f"{traduccion}: ---")
    label.pack(anchor="w")
    sensores_basicos_labels[sensor] = label

# Frame para estado de batería
frame_bateria = ttk.LabelFrame(root, text="Estado de Batería", padding=(10, 5))
frame_bateria.grid(row=1, column=0, padx=10, pady=5, sticky="nsew")
bateria_labels = {}
for propiedad, traduccion in traducciones_bateria.items():
    label = ttk.Label(frame_bateria, text=f"{traduccion}: ---")
    label.pack(anchor="w")
    bateria_labels[propiedad] = label

# Frame para odometría
frame_odometria = ttk.LabelFrame(root, text="Odometría y Movimiento", padding=(10, 5))
frame_odometria.grid(row=2, column=0, padx=10, pady=5, sticky="nsew")
distancia_label = ttk.Label(frame_odometria, text="Distancia recorrida: ---")
distancia_label.pack(anchor="w")
angulo_label = ttk.Label(frame_odometria, text="Ángulo girado: ---")
angulo_label.pack(anchor="w")
encoders_label = ttk.Label(frame_odometria, text="Encoder Izq: ---, Der: ---")
encoders_label.pack(anchor="w")

# Frame del gráfico de proximidad
frame_grafico = ttk.LabelFrame(root, text="Sensores de Proximidad", padding=(10, 5))
frame_grafico.grid(row=0, column=1, rowspan=3, padx=10, pady=5, sticky="nsew")

# Vincular el gráfico al Frame gráfico
canvas = FigureCanvasTkAgg(fig, master=frame_grafico)
canvas.get_tk_widget().pack(fill="both", expand=True)

# Frame para controles de velocidad
frame_velocidad = ttk.LabelFrame(root, text="Control de Velocidad", padding=(10, 5))
frame_velocidad.grid(row=3, column=0, padx=10, pady=5, sticky="nsew")
velocidad_label = ttk.Label(frame_velocidad, text=f"Velocidad actual: {velocidad_actual} mm/s")
velocidad_label.pack(anchor="w")
ttk.Button(frame_velocidad, text="Aumentar Velocidad", command=aumentar_velocidad).pack(pady=5)
ttk.Button(frame_velocidad, text="Disminuir Velocidad", command=disminuir_velocidad).pack(pady=5)

# Frame para controles de movimiento
frame_controles = ttk.LabelFrame(root, text="Joystick de Movimiento", padding=(10, 5))
frame_controles.grid(row=4, column=0, columnspan=2, padx=10, pady=5, sticky="nsew")

# Joystick de movimiento
ttk.Button(frame_controles, text="▲", command=mover_adelante).grid(row=0, column=1, padx=5, pady=5)
ttk.Button(frame_controles, text="◀", command=girar_izquierda).grid(row=1, column=0, padx=5, pady=5)
ttk.Button(frame_controles, text="■", command=detener_robot).grid(row=1, column=1, padx=5, pady=5)
ttk.Button(frame_controles, text="▶", command=girar_derecha).grid(row=1, column=2, padx=5, pady=5)
ttk.Button(frame_controles, text="▼", command=mover_atras).grid(row=2, column=1, padx=5, pady=5)

# Frame para acciones automáticas
frame_acciones = ttk.LabelFrame(root, text="Acciones Automáticas", padding=(10, 5))
frame_acciones.grid(row=5, column=0, columnspan=2, padx=10, pady=5, sticky="nsew")
ttk.Button(frame_acciones, text="Patrulla", command=patrulla).grid(row=0, column=0, padx=5, pady=5)
ttk.Button(frame_acciones, text="Buscar Base", command=buscar_base).grid(row=0, column=1, padx=5, pady=5)
ttk.Button(frame_acciones, text="Despertar Robot", command=despertar_robot).grid(row=0, column=2, padx=5, pady=5)

# Configurar expansión de columnas y filas
root.grid_rowconfigure(0, weight=1)
root.grid_rowconfigure(1, weight=1)
root.grid_rowconfigure(2, weight=1)
root.grid_rowconfigure(3, weight=1)
root.grid_rowconfigure(4, weight=1)
root.grid_rowconfigure(5, weight=1)
root.grid_columnconfigure(0, weight=1)
root.grid_columnconfigure(1, weight=1)

# Vincular cierre seguro
root.protocol("WM_DELETE_WINDOW", cerrar_aplicacion)

# Iniciar actualización de datos
actualizar_datos()

# Iniciar el bucle principal de la aplicación
root.mainloop()