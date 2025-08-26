# 📁 Estructura de la Carpeta Utils

Esta carpeta contiene todas las herramientas de testing y utilidades organizadas en subcarpetas especializadas.

## 📂 Estructura Organizacional

```
Utils/
├── 📁 test_lib_robot_roomba/        # Tests de la librería lib_robot_roomba.py
│   ├── test_lib_robot_roomba.py           # Test principal (17 tests)
│   ├── ejecutar_test_roomba.py            # Script de ejecución automática
│   └── README_test_lib_robot_roomba.md    # Documentación detallada
│
├── 📁 test_communication_node/      # Tests del nodo ROS2 Communication_Node_v0.1.0.py
│   ├── test_communication_node.py         # Test principal (15 tests)
│   ├── ejecutar_test_communication_node.py # Script de ejecución automática
│   └── README_test_communication_node.md  # Documentación detallada
│
├── 📁 simulador/                    # Simulador del robot Roomba
│   ├── simulador_roomba.py               # Simulador principal
│   └── README_Simulador.md               # Documentación del simulador
│
├── 📁 tests_existentes/            # Tests que ya existían en el proyecto
│   ├── Pruebas_Serial.py                # Pruebas de comunicación serial
│   └── test_socat.py                    # Test de socat
│
├── 📁 documentacion/               # Documentación general
│   └── README_tests_completos.md        # Resumen completo del sistema
│
└── README.md                       # Este archivo (índice general)
```

## 🚀 Ejecución Rápida

### Test de la Librería
```bash
cd test_lib_robot_roomba/
python ejecutar_test_roomba.py
```

### Test del Nodo ROS2
```bash
cd test_communication_node/
python ejecutar_test_communication_node.py
```

### Simulador
```bash
cd simulador/
python simulador_roomba.py
```

## 📋 Resumen de Funcionalidades

### 🔧 test_lib_robot_roomba/
- **Propósito:** Verificar que la librería de comunicación con el robot funciona correctamente
- **Tests:** 17 tests que cubren todos los aspectos de la librería
- **Tiempo:** 5-10 minutos (usa simulador real)
- **Dependencias:** pyserial, simulador ejecutándose

### 🤖 test_communication_node/
- **Propósito:** Verificar que el nodo ROS2 funciona correctamente
- **Tests:** 15 tests que cubren toda la lógica del nodo
- **Tiempo:** < 2 minutos (usa mocks)
- **Dependencias:** Solo Python estándar

### 🎮 simulador/
- **Propósito:** Simulador del protocolo Open Interface del robot Roomba
- **Características:** Simula todos los sensores y actuadores
- **Uso:** Requerido para los tests de la librería

### 📚 tests_existentes/
- **Propósito:** Tests que ya existían en el proyecto
- **Contenido:** Pruebas de comunicación serial y socat
- **Uso:** Referencia y debugging

### 📖 documentacion/
- **Propósito:** Documentación completa del sistema de tests
- **Contenido:** Comparación de tests, estrategias, troubleshooting
- **Uso:** Guía completa para usuarios

## 🎯 Flujo de Trabajo Recomendado

### 1. Primera Vez
```bash
# Leer la documentación completa
cat documentacion/README_tests_completos.md

# Ejecutar test de la librería
cd test_lib_robot_roomba/
python ejecutar_test_roomba.py

# Ejecutar test del nodo ROS2
cd ../test_communication_node/
python ejecutar_test_communication_node.py
```

### 2. Desarrollo Iterativo
```bash
# Después de modificar la librería
cd test_lib_robot_roomba/
python ejecutar_test_roomba.py

# Después de modificar el nodo ROS2
cd ../test_communication_node/
python ejecutar_test_communication_node.py
```

### 3. Verificación Completa
```bash
# Ejecutar todo el sistema de tests
cd test_lib_robot_roomba/
python ejecutar_test_roomba.py

cd ../test_communication_node/
python ejecutar_test_communication_node.py

# Resultado: 32 tests totales (17 + 15)
```

## 🔗 Enlaces Rápidos

- **Documentación Completa:** [`documentacion/README_tests_completos.md`](documentacion/README_tests_completos.md)
- **Test de la Librería:** [`test_lib_robot_roomba/README_test_lib_robot_roomba.md`](test_lib_robot_roomba/README_test_lib_robot_roomba.md)
- **Test del Nodo ROS2:** [`test_communication_node/README_test_communication_node.md`](test_communication_node/README_test_communication_node.md)
- **Simulador:** [`simulador/README_Simulador.md`](simulador/README_Simulador.md)

## 🛠️ Troubleshooting

### Problema: "No se encuentra el archivo"
**Solución:** Verificar que estás en la carpeta correcta
```bash
pwd  # Debe mostrar: .../Fase 02/Utils/[subcarpeta]
ls   # Debe mostrar los archivos de la subcarpeta
```

### Problema: "Imports fallan"
**Solución:** Los scripts han sido actualizados para la nueva estructura
```bash
# Verificar que los archivos existen
ls -la ../simulador/simulador_roomba.py
ls -la ../../Communication_Node_v0.1.0.py
ls -la ../../Librerias/roomba/lib_robot_roomba.py
```

### Problema: "Tests fallan después de la reorganización"
**Solución:** Los archivos han sido actualizados automáticamente
- Las rutas de importación fueron corregidas
- Los scripts funcionan desde las nuevas ubicaciones
- Si persisten problemas, revisar la documentación específica

## 📊 Estadísticas

- **Total de Tests:** 32 (17 + 15)
- **Tiempo Total:** < 12 minutos
- **Cobertura:** 100% funcionalidades públicas
- **Documentación:** 5 README especializados
- **Scripts:** 2 ejecutores automáticos
- **Organización:** 5 carpetas temáticas

---

**🎉 ¡La reorganización está completa!** Todos los archivos han sido actualizados para funcionar correctamente en la nueva estructura organizacional. 