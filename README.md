# **Robot Asistente Doméstico Basado en iRobot Create 2**

## **Descripción General**

Este proyecto tiene como objetivo transformar un robot de limpieza **iRobot Create 2** en un robot asistente doméstico autónomo utilizando **ROS 2**. El sistema está diseñado para realizar tareas avanzadas como:
- **Navegación autónoma.**
- **Mapeo del entorno mediante un sensor LIDAR.**
- **Reconocimiento de estancias y desplazamiento eficiente entre ellas.**
- **Gestión avanzada de tareas y recursos.**

El diseño del sistema utiliza una arquitectura modular donde cada nodo tiene una responsabilidad específica. Esto asegura escalabilidad, mantenibilidad y robustez. Además, se incluye un **Nodo Maestro** para la supervisión general y un **Nodo de Interfaz** para la interacción con el usuario.

---

## **Arquitectura del Sistema**

El sistema está compuesto por los siguientes nodos:

### **1. Nodo Maestro (`master_node`)**
- **Funciones**:
  - Coordina la interacción entre los nodos.
  - Gestiona la conexión con el robot.
  - Supervisa el estado global del sistema.
- **Interfaces**:
  - **Servicios**:
    - `/master/connect`: Establece la conexión con el robot.
    - `/master/wake_up_robot`: Ejecuta un script remoto para despertar el robot.
    - `/master/system_status`: Devuelve el estado general del sistema.
  - **Tópicos**:
    - `/master/connection_status`: Publica el estado de la conexión.
    - `/master/system_status`: Publica el estado del sistema.

---

### **2. Nodo de Comunicación Serial (`communication_node`)**
- **Funciones**:
  - Gestiona el acceso exclusivo al puerto serie.
  - Publica datos del robot y recibe comandos de otros nodos.
- **Interfaces**:
  - **Tópicos**:
    - **Publica**:
      - `/roomba/sensors/raw_data`: Datos en bruto de los sensores.
    - **Suscribe**:
      - `/roomba/cmd_vel`: Comandos de velocidad lineal y angular.
      - `/roomba/cleaning_motors`: Comandos para motores de limpieza.
      - `/roomba/brush_motors`: Comandos para cepillos laterales.

---

### **3. Nodo de Sensores (`sensor_node`)**
- **Funciones**:
  - Procesa y publica datos de los sensores del robot.
  - Maneja información como nivel de batería, proximidad y luz IR.
- **Interfaces**:
  - **Tópicos**:
    - **Publica**:
      - `/roomba/sensors/battery`: Nivel de batería.
      - `/roomba/sensors/cliff_*`: Sensores de proximidad.
      - `/roomba/sensors/ir_base`: Señal infrarroja para localizar la base.

---

### **4. Nodo de Control de Movimiento (`motion_control_node`)**
- **Funciones**:
  - Controla los motores de navegación y limpieza.
  - Recibe y ejecuta comandos de velocidad.
- **Interfaces**:
  - **Tópicos**:
    - **Suscribe**:
      - `/roomba/cmd_vel`: Comandos de movimiento.
      - `/roomba/cleaning_motors`: Control de motores de limpieza.
      - `/roomba/brush_motors`: Control de cepillos laterales.

---

### **5. Nodo de Odometría (`odometry_node`)**
- **Funciones**:
  - Calcula y publica la posición y orientación del robot.
  - Genera transformaciones necesarias para la navegación.
- **Interfaces**:
  - **Tópicos**:
    - `/roomba/odom`: Publica datos de odometría.

---

### **6. Nodo de Gestión de Carga (`charging_node`)**
- **Funciones**:
  - Supervisa el nivel de batería.
  - Gestiona el retorno automático a la base.
- **Interfaces**:
  - **Servicios**:
    - `/roomba/go_to_dock`: Ordena el retorno a la base de carga.
  - **Tópicos**:
    - `/charging/battery_status`: Publica información de la batería (voltaje, corriente, temperatura).

---

### **7. Nodo de Navegación (`navigation_node`)**
- **Funciones**:
  - Utiliza el LIDAR para generar mapas y planificar rutas.
  - Coordina con otros nodos para la navegación autónoma.
- **Interfaces**:
  - **Tópicos**:
    - `/navigation/status`: Estado de la navegación.

---

### **Nuevos Nodos Propuestos**
1. **Nodo de Interfaz de Usuario (`ui_node`)**:
   - Proporciona una interfaz para monitorización y control del robot.
   - Publica mapas y permite comandos de texto/voz.

2. **Nodo Gestor de Tareas (`task_manager_node`)**:
   - Coordina la ejecución de tareas de alto nivel mediante una cola priorizada.

3. **Nodo de Diagnóstico (`diagnostic_node`)**:
   - Monitorea y registra eventos del sistema, gestionando fallos.

4. **Nodo de Procesamiento de Voz (`voice_node`)**:
   - Gestiona comandos por voz y diálogo con el usuario.

5. **Nodo de Visión (`vision_node`)**:
   - Proporciona percepción avanzada utilizando cámaras RGBD.

---

## **Requisitos del Sistema**
- **Hardware**:
  - iRobot Create 2.
  - Sensor LIDAR (e.g., RPLIDAR, Hokuyo).
  - Cámara RGBD opcional (e.g., Intel RealSense, Kinect).
- **Software**:
  - **ROS 2** (Humble Hawksbill o Foxy).
  - Herramientas de simulación como Gazebo o RViz.

---

## **Pasos para la Implementación**
1. **Configuración Inicial**:
   - Configurar el entorno ROS 2 y el puerto serie del robot.
   - Verificar la comunicación básica con el robot.

2. **División Modular**:
   - Migrar funcionalidades del nodo monolítico a los nodos definidos.

3. **Integración de Sensores y Actuadores**:
   - Publicar datos procesados de sensores.
   - Controlar motores de navegación y limpieza.

4. **Implementación de Navegación**:
   - Usar LIDAR y odometría para planificar rutas y evitar obstáculos.

5. **Supervisión y Diagnóstico**:
   - Implementar el nodo maestro y el nodo de diagnóstico.

6. **Interacción con el Usuario**:
   - Desarrollar la interfaz web y el procesamiento de comandos por voz.

---

¡Gracias por tu interés en este proyecto! 🚀\
Contribuciones y sugerencias son bienvenidas.

## **Contribuciones**
- **Reporte de Errores**: Abre un [issue](https://github.com/tu-repositorio/issues).
- **Sugerencias y Mejoras**: Envía un pull request.
