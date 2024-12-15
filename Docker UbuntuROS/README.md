# Proyecto: Docker UbuntuROS v0.1

Este proyecto utiliza los archivos `Dockerfile`, `docker-compose.yml` y `entrypoint.sh` para crear un entorno Docker completo y funcional, diseñado para el desarrollo, simulación y despliegue de aplicaciones **ROS 2**. A continuación, se describen las principales características, configuraciones y beneficios del proyecto.


Esta imagen está disponible en DockerHub y puede ser utilizada con el siguiente comando:

docker pull druloko/ros_roomba:latest

---

## **Características Principales**

### **1. Entorno Gráfico Completo (Ubuntu Mate)**
- Proporciona un escritorio remoto accesible mediante:
  - **VNC**: Para conectarse al escritorio desde un cliente VNC.
  - **noVNC**: Para acceder al escritorio directamente desde un navegador web.
- Resolución predefinida: `1920x1080` para un entorno de trabajo cómodo.

### **2. Configuración de ROS 2 (Humble)**
- Incluye instalación y configuración de **ROS 2 Humble**, con:
  - Herramientas de desarrollo como `colcon` y autocompletado.
  - Simuladores como **Gazebo** e **Ignition** (solo arquitecturas `amd64`).
- Workspace inicial: `~/Roomba_ws`, listo para usar.

### **3. Herramientas de Desarrollo**
- Incluye software y herramientas útiles como:
  - **VSCodium**: IDE ligero para desarrollo.
  - **Terminator**: Terminal avanzada con soporte para múltiples ventanas.
  - **Firefox**: Navegador web.
- Accesos directos preconfigurados en el escritorio para facilitar su uso.

### **4. Acceso Remoto Seguro**
- Configuración de un servidor **SSH** que permite:
  - Acceso remoto al contenedor vía terminal.
  - Autenticación por contraseña (configurable).

### **5. Redes Configuradas con Docker Compose**
- Utiliza el driver **macvlan** para conectar el contenedor a la red local, proporcionando:
  - Una dirección IP propia para el contenedor (ejemplo: `192.168.0.110`).
  - Acceso al contenedor como si fuera un dispositivo físico en la red.

### **6. Flexibilidad para Usuarios**
- Creación automática de un usuario configurable diferente a `root`.
- Personalización de la contraseña para:
  - El sistema operativo.
  - El servidor VNC.

### **7. Automatización con Supervisord**
- Configuración de **supervisord** para gestionar procesos clave:
  - Inicio y gestión del servidor VNC.
  - Inicio y gestión de noVNC para acceso web al escritorio.

### **8. Limpieza y Optimización**
- Elimina archivos temporales y variables sensibles para optimizar el tamaño y la seguridad del contenedor.
- Configuraciones específicas para **Ubuntu 22.04 (Jammy)**.

---

## **Beneficios del Proyecto**

1. **Desarrollo con ROS 2**:
   - Ideal para probar, simular y desarrollar aplicaciones robóticas.
   - Listo para usar con simuladores y herramientas ROS 2.

2. **Flexibilidad**:
   - Fácil personalización del entorno, usuarios y configuraciones.

3. **Acceso Remoto**:
   - Compatible con acceso gráfico (VNC, noVNC) y terminal (SSH).

4. **Portabilidad**:
   - Entorno reproducible en cualquier máquina gracias a Docker.

---

## **Detalles de los Archivos**

### **1. Dockerfile**
- **Base de la imagen**: `ubuntu:jammy` (Ubuntu 22.04 LTS).
- **Entorno gráfico**: Instalación de Ubuntu Mate para escritorio remoto.
- **Herramientas esenciales**: Incluye VNC, Terminator, VSCodium, Firefox y más.
- **ROS 2 Humble**: Instalación y configuración completa, incluyendo simuladores Gazebo e Ignition.
- **Optimización**: Limpieza de paquetes y eliminación de archivos temporales para reducir el tamaño de la imagen.

### **2. docker-compose.yml**
- Configura el contenedor con:
  - **Nombre de imagen**: `ros2_roomba_ver_0_1`.
  - **Red macvlan**: Dirección IP fija (`192.168.0.110`) en la red local.
- Proporciona un entorno conectado a la red local, accesible como un dispositivo físico.

### **3. entrypoint.sh**
- Configura y automatiza tareas clave:
  - Creación de usuarios y configuración de contraseñas.
  - Configuración del servidor VNC y noVNC para acceso remoto.
  - Inicialización de ROS 2 y creación de un workspace (`~/Roomba_ws`).
  - Gestión de servicios con supervisord.

---

## **Sugerencias de Mejora**

1. **Seguridad**
   - Usa contraseñas generadas aleatoriamente o variables de entorno secretas.
   - Considera deshabilitar la autenticación por contraseña en SSH y usar claves SSH.

2. **Optimización del Tamaño**
   - Fusiona bloques de instalación para reducir la cantidad de capas en Docker.
   - Revisa dependencias innecesarias y elimina software no requerido (por ejemplo, Firefox si no se utiliza).

3. **Gestión de Usuarios**
   - Permite configurar el UID/GID del usuario mediante variables de entorno para evitar problemas de permisos.

4. **Documentación**
   - Incluye pasos claros sobre cómo:
     - Acceder al contenedor vía VNC/noVNC/SSH.
     - Personalizar el entorno y los servicios.
     - Usar el contenedor para desarrollo con ROS 2.

5. **Supervisión y Logs**
   - Configura directorios para almacenar logs de supervisord, facilitando la depuración.

6. **Simulación y Herramientas Adicionales**
   - Añade herramientas útiles como RViz y ROS2 Control para simulación avanzada.

---

## **Instrucciones de Uso**

1. **Construcción de la Imagen**:
   ```bash
   docker build -t ros2_roomba_ver_0_1 .