# Proyecto: Robot Autónomo con ROS2

Este repositorio contiene el desarrollo de un proyecto robótico basado en el sistema operativo **ROS2**. El objetivo principal es implementar un sistema de navegación autónoma e interacción inteligente utilizando un robot Roomba como base robótica.

## Fases del Proyecto

### **Fase 1: Control Básico del Robot Roomba**
En esta fase inicial, se integrará y controlará el robot Roomba utilizando la librería [iRobot](http://blog.lemoneerlabs.com/), que proporciona acceso a los sensores y actuadores de la plataforma. Esto incluye:
- Lectura de sensores del robot, como detección de obstáculos, estado de batería y encoders.
- Control de actuadores como ruedas, cepillos y motores de vacío.

**Objetivo:** Garantizar el control total del hardware base del robot, sirviendo como punto de partida para las fases más avanzadas.

---

### **Fase 2: Mapeo del Entorno**
Se añadirá un sensor **LiDAR** y una cámara **Kinect** al robot para realizar mapeo y percepción del entorno:
- **LiDAR:** Proporcionará datos precisos de distancias para construir un mapa 2D del espacio utilizando algoritmos de mapeo SLAM (Simultaneous Localization and Mapping) en ROS2.
- **Kinect:** Permitirá la creación de mapas 3D del entorno mediante técnicas de visión por computadora.

**Objetivo:** Construir mapas del entorno que definan zonas navegables para el robot, con capacidad de segmentación y definición de áreas específicas.

---

### **Fase 3: Navegación Autónoma**
Con el mapa generado en la fase anterior, se habilitará la capacidad del robot para moverse autónomamente:
- Implementación de un sistema de navegación basado en ROS2 Navigation Stack.
- Asignación de objetivos dinámicos dentro del mapa, permitiendo al robot desplazarse por zonas previamente definidas.

**Objetivo:** Proveer al robot de autonomía para navegar de forma eficiente y segura dentro de entornos conocidos.

---

### **Fase 4: Interacción Inteligente mediante IA**
En esta fase, se integrará un sistema de inteligencia artificial para mejorar la interacción del robot con los usuarios:
- **Reconocimiento facial:** Utilizando algoritmos de visión por computadora, el robot podrá identificar usuarios y asociarlos con perfiles personalizados.
- **Procesamiento de lenguaje natural:** Implementación de un modelo de IA que permita al robot responder preguntas, dar instrucciones y personalizar la conversación según el usuario identificado.

**Objetivo:** Lograr que el robot interactúe de manera natural e intuitiva, personalizando su comportamiento según las preferencias del usuario.

---

## Tecnologías y Herramientas
- **ROS2**: Sistema operativo para robots que gestionará la comunicación entre nodos y la integración de los distintos componentes.
- **iRobot Library**: Control directo del hardware del robot Roomba.
- **LiDAR y Kinect**: Sensores principales para percepción del entorno.
- **SLAM y Navigation Stack**: Algoritmos para mapeo y navegación autónoma.
- **Python y C++**: Lenguajes de programación para el desarrollo de los nodos de ROS2.
- **IA y Visión por Computadora**: Tecnologías de reconocimiento facial y procesamiento de lenguaje natural.

---

## Estado Actual
Actualmente, el proyecto se encuentra en la **Fase 1**, enfocándose en establecer comunicación con el robot Roomba y asegurar un control robusto del hardware base.

---

## Contribuciones
Contribuciones y sugerencias son bienvenidas para mejorar y extender el alcance del proyecto. ¡Gracias por tu interés en este emocionante desarrollo robótico! 🚀
