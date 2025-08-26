# 🚀 Librería `lib_robot_roomba`

Este módulo proporciona una clase `Robot` para manejar de forma segura y robusta un robot Roomba (modelo Create2) en ROS2 o entornos Python.

---

## ✨ Características principales

✅ Lectura completa de sensores:

- Movimiento (encoders, distancia, velocidad)
- Seguridad (cliffs, bumps, virtual wall, light bumpers)
- Energía (batería, corriente, temperatura, IR, overcurrents)
- Misc (botones físicos, reproducción de música)

✅ Control de actuadores con reconexión automática:

- Movimiento y giro
- Limpieza estándar y máxima
- Cepillos y aspiradora
- LEDs
- Reproducción de canciones
- Docking automático

✅ Gestión de recursos:

- Cierra el puerto serie limpio
- Mata el proceso socat si aplica
- Estado interno de cada actuador
- Reconexión automática ante fallo de conexión

✅ Logging profesional (`debug`, `info`, `warn`, `error`)

✅ Ejemplo de uso completo

---

## 📚 Ejemplo de uso

```python
# Crear instancia de la clase Robot
roomba = Robot(node=self)  # si estás en un Node ROS2

# Conectar
roomba.connect_robot(
    connection_type='Serial',
    serial_port='/dev/ttyUSB0',
    connection_mode='FULL'
)

# Mover adelante
roomba.drive_forward(speed=200, duration=2)

# Leer sensores
roomba.update_sensors()
sensors = roomba.read_sensors()
print(sensors)

# Detener limpieza
roomba.stop_cleaning()

# Desconectar
roomba.disconnect()
