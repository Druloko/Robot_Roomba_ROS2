# Simulador de Roomba Create2

## Descripción

Este simulador implementa el protocolo Open Interface del robot Roomba Create2 para permitir el desarrollo y prueba de aplicaciones ROS2 sin necesidad de hardware físico. Es completamente compatible con:

- La librería `irobot` (Fase 02/Librerias/irobot/)
- La librería `lib_robot_roomba.py` (Fase 02/Librerias/roomba/)
- El nodo ROS2 `Communication_Node_v0.1.0.py`

## Características

### ✅ Protocolo Open Interface Completo
- **Modos OI**: OFF, PASSIVE, SAFE, FULL
- **Comandos de movimiento**: DRIVE, DRIVE_DIRECT, DRIVE_PWM
- **Comandos de limpieza**: CLEAN, SPOT, MAX
- **Comandos de actuadores**: LEDS, MOTORS, SONG/PLAY
- **Comandos de control**: START, STOP, DOCK

### ✅ Sensores Simulados
- **Movimiento**: distancia, ángulo, encoders, velocidades solicitadas
- **Seguridad**: bumpers, wheel drops, cliff sensors, wall sensors
- **Energía**: batería, voltaje, corriente, temperatura, estado de carga
- **Misceláneos**: botones, infrarrojo, light bumpers, overcurrent
- **Grupos**: todos los grupos de sensores (0-6, 100-107)

### ✅ Comportamiento Realista
- Simulación de descarga/carga de batería
- Cambios de estado durante movimiento
- Simulación ocasional de bumpers y cliff sensors
- Gestión correcta de modos OI
- Almacenamiento y reproducción de canciones

## Instalación

### Prerrequisitos
```bash
# Instalar socat (para puertos virtuales)
sudo apt-get install socat  # Ubuntu/Debian
brew install socat          # macOS
```

### Dependencias Python
```bash
pip install pyserial
```

## Uso

### 1. Ejecutar el Simulador

```bash
cd "Fase 02/Utils"
python simulador_roomba.py
```

El simulador creará automáticamente los puertos virtuales:
- `/tmp/roomba_front` → Para conectar la librería Create2
- `/tmp/roomba_back` → Usado internamente por el simulador

### 2. Ejecutar las Pruebas

En otra terminal:

```bash
cd "Fase 02/Utils"
python Pruebas_Serial.py
```

### 3. Usar con el Nodo ROS2

```bash
# Asegúrate de que el simulador esté ejecutándose
cd "Fase 02"

# Configurar el puerto en el nodo ROS2
# Editar Communication_Node_v0.1.0.py y cambiar:
# connection_serial = '/tmp/roomba_front'

# Ejecutar el nodo
python Communication_Node_v0.1.0.py
```

## Arquitectura

```
┌─────────────────┐    ┌─────────────────┐    ┌─────────────────┐
│   Nodo ROS2     │    │   Pruebas       │    │   Otras Apps    │
│ Communication   │    │Utils/Pruebas_   │    │                 │
│     Node        │    │   Serial.py     │    │                 │
└─────────────────┘    └─────────────────┘    └─────────────────┘
         │                       │                       │
         └───────────────────────┼───────────────────────┘
                                 │
┌─────────────────────────────────┼─────────────────────────────────┐
│                    lib_robot_roomba.py                            │
└─────────────────────────────────┼─────────────────────────────────┘
                                 │
┌─────────────────────────────────┼─────────────────────────────────┐
│                 Librería irobot Create2                           │
└─────────────────────────────────┼─────────────────────────────────┘
                                 │
                     /tmp/roomba_front
                                 │
                          ┌──────┴──────┐
                          │    socat    │
                          └──────┬──────┘
                                 │
                     /tmp/roomba_back
                                 │
┌─────────────────────────────────┼─────────────────────────────────┐
│                Simulador Roomba                                   │
│              simulador_roomba.py                                  │
└─────────────────────────────────────────────────────────────────┘
```

## Comandos Soportados

### Comandos Básicos
| Comando | Código | Descripción |
|---------|--------|-------------|
| START   | 128    | Iniciar Open Interface |
| STOP    | 173    | Parar Open Interface |
| SAFE    | 131    | Modo seguro |
| FULL    | 132    | Modo completo |

### Movimiento
| Comando      | Código | Descripción |
|--------------|--------|-------------|
| DRIVE        | 137    | Mover con velocidad y radio |
| DRIVE_DIRECT | 145    | Control directo de ruedas |
| DRIVE_PWM    | 146    | Control PWM de motores |

### Limpieza
| Comando   | Código | Descripción |
|-----------|--------|-------------|
| CLEAN     | 135    | Limpieza normal |
| SPOT      | 134    | Limpieza localizada |
| MAX       | 136    | Limpieza máxima |
| DOCK      | 143    | Buscar base de carga |

### Actuadores
| Comando   | Código | Descripción |
|-----------|--------|-------------|
| LEDS      | 139    | Control de LEDs |
| MOTORS    | 138    | Control de motores |
| SONG      | 140    | Definir canción |
| PLAY      | 141    | Reproducir canción |

### Sensores
| Comando      | Código | Descripción |
|--------------|--------|-------------|
| SENSORS      | 142    | Leer sensor individual |
| QUERY_LIST   | 149    | Leer grupo de sensores |

## Sensores Disponibles

### Individuales (ID: 7-58)
- **7**: Bumps and wheel drops
- **8**: Wall sensor
- **9-12**: Cliff sensors
- **19-20**: Distance/Angle
- **22-26**: Battery info
- **35**: OI Mode
- **43-44**: Encoder counts
- **45**: Light bumper
- **54-57**: Motor currents

### Grupos (ID: 0-6, 100-107)
- **0**: Sensores básicos (26 bytes)
- **1**: Sensores de seguridad (10 bytes)
- **2**: Sensores de movimiento (6 bytes)
- **3**: Sensores de energía (10 bytes)
- **4**: Señales de sensores (14 bytes)
- **5**: Estado del robot (12 bytes)
- **6**: Todos los sensores (52 bytes)

## Ejemplo de Uso con lib_robot_roomba.py

```python
from Librerias.roomba.lib_robot_roomba import Robot

# Crear instancia del robot (requiere nodo ROS2 mock o real)
robot = Robot(node=mock_node)

# Conectar al simulador
robot.connect_robot(
    connection_type='Serial',
    serial_port='/tmp/roomba_front',
    connection_mode='FULL'
)

# Leer sensores
robot.update_sensors(categories=["movement", "security"])
sensors = robot.read_sensors()

# Mover el robot
robot.drive_manual(left_speed=100, right_speed=100, duration=2)

# Limpiar
robot.start_cleaning()
```

## Logs y Debug

El simulador incluye logging detallado. Para habilitar debug:

```python
import logging
logging.basicConfig(level=logging.DEBUG)
```

Los logs muestran:
- Comandos recibidos
- Respuestas de sensores
- Cambios de estado
- Errores de protocolo

## Solución de Problemas

### Error: "No se pudieron crear los puertos virtuales"
```bash
# Verificar que socat esté instalado
which socat

# Verificar permisos en /tmp
ls -la /tmp/
```

### Error: "Permission denied" en puertos
```bash
# Limpiar puertos anteriores
rm -f /tmp/roomba_*

# Ejecutar simulador con permisos suficientes
python simulador_roomba.py
```

### La librería no se conecta
```bash
# Verificar que el simulador esté ejecutándose
ps aux | grep simulador

# Verificar que los puertos existan
ls -la /tmp/roomba_*
```

### Sensores devuelven valores constantes
- Es normal, el simulador simula valores base
- Algunos sensores cambian dinámicamente (batería, movimiento)
- Los bumpers y cliff sensors se activan ocasionalmente

## Compatibilidad

### ✅ Compatible con:
- Python 3.6+
- Linux/Unix/macOS
- Librería irobot original
- Nodo ROS2 Communication_Node_v0.1.0.py
- lib_robot_roomba.py

### ❌ No compatible con:
- Windows (requiere socat)
- Conexiones TCP/IP directas
- Hardware real de Roomba

## Desarrollo

### Añadir nuevos sensores
```python
def get_sensor_data(self, sensor_id):
    # Añadir nuevo sensor
    elif sensor_id == 59:  # Nuevo sensor
        return struct.pack('B', self.nuevo_valor)
```

### Modificar comportamiento
```python
def update_simulation(self):
    # Añadir nueva lógica de simulación
    if self.condicion_especial:
        self.simular_comportamiento()
```

### Personalizar respuestas
```python
# Modificar valores base en __init__
self.voltage = 15000  # Voltaje personalizado
self.temperature = 30  # Temperatura personalizada
```

## Licencia

Este simulador es parte del proyecto Robot_Roomba_ROS2 y está destinado para fines educativos y de desarrollo. 