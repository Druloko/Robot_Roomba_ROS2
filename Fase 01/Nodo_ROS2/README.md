# Roomba Control Node

Este repositorio contiene un conjunto de nodos ROS 2 para controlar un robot Roomba mediante comandos de velocidad y monitorizar sus sensores.

## Características

- Control del robot mediante comandos de velocidad (`cmd_vel`).
- Monitorización de sensores del robot: batería, precipicios, colisiones, pared, voltaje, corriente y temperatura.
- Publicación de odometría.
- Soporte para control interactivo con el teclado usando `teleop_twist_keyboard`.

## Requisitos

- **ROS 2** (compatible con versiones Foxy, Humble o posteriores).
- Python 3.8 o superior.
- Librerías:
  - `irobot` (para comunicación con el robot Roomba).
  - `geometry_msgs`, `nav_msgs`, `std_msgs` (incluidas con ROS 2).

## Instalación

1. Clona este repositorio dentro de tu workspace de ROS 2:

   ```bash
   git clone https://github.com/tuusuario/roomba_control.git ~/ros2_ws/src/roomba_control
   ```

2. Compila el paquete:

   ```bash
   cd ~/ros2_ws
   colcon build --packages-select roomba_control
   ```

3. Fuentea tu workspace:

   ```bash
   source ~/ros2_ws/install/setup.bash
   ```

## Uso

### 1. Lanzar el nodo principal (`roomba_node`)
Este nodo se encarga de controlar el hardware del robot, publicar datos de sensores y procesar los comandos de velocidad:

```bash
ros2 run roomba_control roomba_node
```

### 2. Controlar el robot con el teclado
Usa el paquete `teleop_twist_keyboard` para enviar comandos de velocidad al robot:

1. Instala `teleop_twist_keyboard` (si no lo tienes):

   ```bash
   sudo apt install ros-<ros2-distro>-teleop-twist-keyboard
   ```

   Reemplaza `<ros2-distro>` con tu versión de ROS 2 (por ejemplo, `humble` o `foxy`).

2. Ejecuta `teleop_twist_keyboard` redirigiendo al tópico del robot:

   ```bash
   ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r cmd_vel:=/roomba/cmd_vel
   ```

3. Usa las siguientes teclas para mover el robot:

   - **`i`**: Avanza.
   - **`,`**: Retrocede.
   - **`j`**: Gira a la izquierda.
   - **`l`**: Gira a la derecha.
   - **`k`**: Detenerse.
   - **`q`**: Salir del programa.

### 3. Visualizar datos de sensores
Los sensores del robot se publican en varios tópicos. Por ejemplo, para visualizar la batería:

```bash
ros2 topic echo /roomba/sensors/battery
```

Puedes explorar todos los tópicos disponibles con:

```bash
ros2 topic list
```

### 4. Verificar odometría
La odometría se publica en el tópico `/roomba/odom`. Puedes visualizarla con:

```bash
ros2 topic echo /roomba/odom
```

## Estructura del Repositorio

```
roomba_control/
├── roomba_control/
│   ├── __init__.py
│   ├── roomba_node.py         # Nodo principal para control y sensores
├── package.xml                # Configuración del paquete ROS 2
├── setup.py                   # Script de instalación
├── README.md                  # Este archivo
└── config/
    └── params.yaml            # Configuración de parámetros del robot
```

## Archivo de Parámetros (`params.yaml`)

Ejemplo de archivo de configuración para ajustar parámetros:

```yaml
roomba_node:
  ros__parameters:
    port: "/dev/ttyUSB0"
    sensor_update_rate: 1.0
    odom_update_rate: 0.1
    max_linear_speed: 0.5
    max_angular_speed: 1.5
    speed_multiplier: 1.0
    spin_multiplier: 1.0
    enable_cliff_detection: true
    enable_bump_detection: true
    battery_threshold: 20.0
```

Guárdalo en `config/params.yaml` y ejecútalo con:

```bash
ros2 run roomba_control roomba_node --ros-args --params-file config/params.yaml
```

## Control de Versiones

v0.0.0

Nodo simple para controlar el robot.

Sin parámetros configurables.

v0.0.1

Nodo con soporte para parámetros dinámicos.

Permite configurar velocidades máximas, detección de sensores y otros ajustes.

## Contribuciones

¡Las contribuciones son bienvenidas! Por favor, abre un _issue_ o un _pull request_ para reportar problemas o sugerir mejoras.

## Licencia

Este proyecto está licenciado bajo la licencia Apache 2.0. Consulta el archivo `LICENSE` para más detalles.

