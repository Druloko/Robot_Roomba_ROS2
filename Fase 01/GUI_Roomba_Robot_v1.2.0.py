import tkinter as tk
from tkinter import ttk
from tkinter import messagebox 
import ttkbootstrap as ttk
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
import matplotlib.pyplot as plt
import Modulos.irobot.lib_irobot as lib_irobot
import serial


class MonitorRobot:
    def __init__(self, root):
        self.root = root
        self.root.title("Monitor iRobot")
        self.root.geometry("1200x800")
        
        # Estilo y tema
        self.style = ttk.Style()
        self.style.theme_use('cosmo')
        
        # Variables de control
        self.velocidad_actual = tk.IntVar(value=100)
        self.aplicacion_activa = True
        self.tarea_after = None
        self.robot_conectado = False  # Estado de conexión
        self.robot = None  # Referencia al robot

        # Crear interfaz
        self.crear_interfaz()

    def conectar_robot(self):
        try:
            #self.serial_com = "COM10"  # Configura tu puerto COM
            self.serial_com = "/dev/roomba" 
            self.robot = lib_irobot.connect_robot(self.serial_com)
            lib_irobot.iniciar_robot(self.robot)
            self.robot_conectado = True
            messagebox.showinfo("Conexión", "Robot conectado exitosamente.")
            # Inicia las actualizaciones si la conexión fue exitosa
            self.actualizar_datos()
        except Exception as e:
            messagebox.showerror("Error", f"No se pudo conectar al robot: {e}")

    def crear_interfaz(self):
        # Marco principal con grid 2x3
        main_frame = ttk.Frame(self.root, padding="10")
        main_frame.grid(row=0, column=0, sticky="nsew")

        # Botón para conectar al robot
        btn_conectar = ttk.Button(main_frame, text="Conectar Robot", command=self.conectar_robot)
        btn_conectar.grid(row=0, column=0, padx=10, pady=10, sticky="w")

        # Resto de los paneles
        self.crear_panel_estado(main_frame, 1, 0)
        self.crear_panel_control(main_frame, 1, 1)
        self.crear_panel_odometria(main_frame, 1, 2)
        self.crear_panel_sensores(main_frame, 2, 0, columnspan=2)
        self.crear_panel_bateria(main_frame, 2, 2)

        # Configurar el grid
        self.root.grid_rowconfigure(0, weight=1)
        self.root.grid_columnconfigure(0, weight=1)
        for i in range(3):
            main_frame.grid_rowconfigure(i, weight=1)
        for i in range(3):
            main_frame.grid_columnconfigure(i, weight=1)

    def actualizar_datos(self):
        if not self.aplicacion_activa or not self.robot_conectado:
            return

        try:
            # Actualizar datos del robot
            sensores = lib_irobot.leer_sensores_basicos(self.robot)
            bateria = lib_irobot.leer_estado_bateria(self.robot)
            proximidad = lib_irobot.leer_proximidad(self.robot)
            odometria = lib_irobot.leer_estado_movimiento(self.robot)

            # Actualizar interfaz
            self.actualizar_sensores(sensores)
            self.actualizar_bateria(bateria)
            self.actualizar_grafico_proximidad(proximidad)
            self.actualizar_odometria(odometria)

            # Programar siguiente actualización
            self.tarea_after = self.root.after(1000, self.actualizar_datos)
        except Exception as e:
            print(f"Error al actualizar datos: {e}")


    def crear_panel_odometria(self, parent, row, col):
        frame = ttk.LabelFrame(parent, text="Odometría", padding="10")
        frame.grid(row=row, column=col, padx=5, pady=5, sticky="nsew")

        self.labels_odometria = {}
        medidas = ["Distancia", "Ángulo", "Encoder Izq", "Encoder Der"]
        
        for i, medida in enumerate(medidas):
            label = ttk.Label(frame, text=f"{medida}: --")
            label.grid(row=i, column=0, padx=5, pady=2, sticky="w")
            self.labels_odometria[medida] = label

    def crear_panel_estado(self, parent, row, col):
        frame = ttk.LabelFrame(parent, text="Estado del Robot", padding="10")
        frame.grid(row=row, column=col, padx=5, pady=5, sticky="nsew")

        self.labels_sensores = {}
        sensores = ["Colisión Izq", "Colisión Der", "Rueda Izq", "Rueda Der", "Pared", "Pared Virtual"]
        
        for i, sensor in enumerate(sensores):
            label = ttk.Label(frame, text=f"{sensor}: Normal")
            label.grid(row=i, column=0, padx=5, pady=2, sticky="w")
            self.labels_sensores[sensor] = label

    def crear_panel_control(self, parent, row, col):
        frame = ttk.LabelFrame(parent, text="Control de Movimiento", padding="10")
        frame.grid(row=row, column=col, padx=5, pady=5, sticky="nsew")

        # Control de velocidad
        ttk.Label(frame, text="Velocidad:").grid(row=0, column=0, columnspan=3)
        self.lbl_velocidad = ttk.Label(frame, text="100 mm/s")
        self.lbl_velocidad.grid(row=1, column=0, columnspan=3)

        # Botones de velocidad
        ttk.Button(frame, text="-", command=self.disminuir_velocidad, width=3).grid(row=2, column=0)
        ttk.Button(frame, text="+", command=self.aumentar_velocidad, width=3).grid(row=2, column=2)

        # Controles de movimiento
        ttk.Button(frame, text="▲", command=self.mover_adelante, width=3).grid(row=3, column=1, pady=5)
        ttk.Button(frame, text="◀", command=self.girar_izquierda, width=3).grid(row=4, column=0)
        ttk.Button(frame, text="■", command=self.detener, width=3).grid(row=4, column=1)
        ttk.Button(frame, text="▶", command=self.girar_derecha, width=3).grid(row=4, column=2)
        ttk.Button(frame, text="▼", command=self.mover_atras, width=3).grid(row=5, column=1, pady=5)

    def crear_panel_sensores(self, parent, row, col, columnspan=1):
        frame = ttk.LabelFrame(parent, text="Sensores de Proximidad", padding="10")
        frame.grid(row=row, column=col, columnspan=columnspan, padx=5, pady=5, sticky="nsew")

        # Crear figura de matplotlib
        self.fig = Figure(figsize=(8, 4), dpi=100)
        self.ax = self.fig.add_subplot(111)
        self.canvas = FigureCanvasTkAgg(self.fig, master=frame)
        self.canvas.draw()
        self.canvas.get_tk_widget().pack(fill=tk.BOTH, expand=True)

    def crear_panel_bateria(self, parent, row, col):
        frame = ttk.LabelFrame(parent, text="Estado de Batería", padding="10")
        frame.grid(row=row, column=col, padx=5, pady=5, sticky="nsew")

        self.labels_bateria = {}
        info_bateria = {
            "voltage": "Voltaje (V)",
            "current": "Corriente (A)",
            "temperature": "Temperatura (°C)",
            "charge": "Carga (%)",
            "capacity": "Capacidad (mAh)"
        }
        
        for i, (key, label) in enumerate(info_bateria.items()):
            lbl = ttk.Label(frame, text=f"{label}: --")
            lbl.grid(row=i, column=0, padx=5, pady=2, sticky="w")
            self.labels_bateria[key] = lbl


    def actualizar_odometria(self, odometria):
        if odometria:
            self.labels_odometria["Distancia"].config(text=f"Distancia: {odometria['distance']} mm")
            self.labels_odometria["Ángulo"].config(text=f"Ángulo: {odometria['angle']}°")
            self.labels_odometria["Encoder Izq"].config(text=f"Encoder Izq: {odometria['left_encoder_counts']}")
            self.labels_odometria["Encoder Der"].config(text=f"Encoder Der: {odometria['right_encoder_counts']}")

    def actualizar_sensores(self, sensores):
        for sensor, estado in sensores.items():
            label = self.labels_sensores.get(sensor)
            if label:
                estado_texto = "Activado" if estado else "Normal"
                label.config(text=f"{sensor}: {estado_texto}")

    def actualizar_bateria(self, bateria):
        for info, valor in bateria.items():
            label = self.labels_bateria.get(info)
            if label:
                if info == "voltage":
                    texto = f"Voltaje: {(valor/1000):.2f}V"
                elif info == "current":
                    texto = f"Corriente: {valor:.2f}A"
                elif info == "temperature":
                    texto = f"Temperatura: {valor}°C"
                elif info == "charge":
                    texto = f"Carga: {valor}mAh"
                    carga_bateria = valor
                else:
                    texto = f"Capacidad: {valor}mAh"
                    capacidad_bateria = valor
                    texto = f"Capacidad %: {(carga_bateria*100)/capacidad_bateria:.2f}%"
                label.config(text=texto)

    def actualizar_grafico_proximidad(self, proximidad):
        self.ax.clear()
        nombres = list(proximidad.keys())
        valores = list(proximidad.values())
        
        # Crear las posiciones de las barras
        x = range(len(nombres))
        
        # Dibujar las barras
        self.ax.bar(x, valores)
        
        # Establecer las posiciones y etiquetas de los ticks
        self.ax.set_xticks(x)
        self.ax.set_xticklabels(nombres, rotation=45)
        
        # Ajustar los márgenes
        self.fig.tight_layout()
        
        # Actualizar el canvas
        self.canvas.draw()

    # Métodos de control
    def aumentar_velocidad(self):
        self.velocidad_actual.set(min(500, self.velocidad_actual.get() + 50))
        self.lbl_velocidad.config(text=f"{self.velocidad_actual.get()} mm/s")

    def disminuir_velocidad(self):
        self.velocidad_actual.set(max(50, self.velocidad_actual.get() - 50))
        self.lbl_velocidad.config(text=f"{self.velocidad_actual.get()} mm/s")

    def mover_adelante(self):
        lib_irobot.mover_adelante(self.robot, self.velocidad_actual.get(), 1)

    def mover_atras(self):
        lib_irobot.mover_adelante(self.robot, -self.velocidad_actual.get(), 1)

    def girar_izquierda(self):
        lib_irobot.girar(self.robot, self.velocidad_actual.get(), 'izquierda', 1)

    def girar_derecha(self):
        lib_irobot.girar(self.robot, self.velocidad_actual.get(), 'derecha', 1)

    def detener(self):
        lib_irobot.detener_robot(self.robot)

    def cerrar_aplicacion(self):
        self.aplicacion_activa = False
        if self.tarea_after:
            self.root.after_cancel(self.tarea_after)
        try:
            lib_irobot.detener_robot(self.robot)
        except Exception as e:
            print(f"Error al detener el robot: {e}")
        self.root.quit()

def main():
    root = ttk.Window()
    app = MonitorRobot(root)
    root.protocol("WM_DELETE_WINDOW", app.cerrar_aplicacion)
    root.mainloop()

if __name__ == "__main__":
    main()