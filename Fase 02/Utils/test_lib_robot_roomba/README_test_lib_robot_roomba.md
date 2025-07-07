# Test de la Librería lib_robot_roomba.py

## Descripción

Este archivo contiene un test completo para verificar que la librería `lib_robot_roomba.py` funciona correctamente. El test utiliza el simulador de Roomba para probar todas las funcionalidades sin necesidad de hardware real.

## Archivos Incluidos

- `test_lib_robot_roomba.py` - Test completo de la librería
- `ejecutar_test_roomba.py` - Script simple para ejecutar el test
- `README_test_lib_robot_roomba.md` - Esta documentación

## Prerrequisitos

### Software Necesario

1. **Python 3.7+** con los siguientes paquetes:
   - `pyserial`
   - `unittest` (incluido en Python)
   - `threading` (incluido en Python)

2. **socat** (para Linux/WSL):
   ```bash
   sudo apt-get install socat
   ```

3. **Simulador de Roomba** (`simulador_roomba.py`) ejecutándose

### Estructura del Proyecto

```
Fase 02/
├── Librerias/
│   ├── roomba/
│   │   └── lib_robot_roomba.py    # Librería a testear
│   └── irobot/
│       └── robots/
│           └── create2.py         # Librería subyacente
├── Utils/
│   ├── simulador_roomba.py        # Simulador del robot
│   ├── test_lib_robot_roomba.py   # Test completo
│   └── ejecutar_test_roomba.py    # Script de ejecución
└── Communication_Node_v0.1.0.py   # Nodo ROS2 que usa la librería
```

## Cómo Ejecutar el Test

### Opción 1: Ejecutar Test Completo

```bash
cd "Fase 02/Utils"
python test_lib_robot_roomba.py
```

### Opción 2: Usar Script de Ejecución

```bash
cd "Fase 02/Utils"
python ejecutar_test_roomba.py
```

### Opción 3: Ejecutar Tests Específicos

```bash
cd "Fase 02/Utils"
python -m unittest test_lib_robot_roomba.TestLibRobotRoomba.test_01_initialization -v
```

## Funcionalidades Testadas

### Tests de Inicialización
- ✅ **test_01_initialization**: Verifica inicialización correcta
- ✅ **test_02_connection_tcp**: Prueba conexión TCP
- ✅ **test_03_connection_serial**: Prueba conexión Serial

### Tests de Sensores
- ✅ **test_04_sensor_reading**: Lectura de todos los sensores
- ✅ **test_15_sensor_filtering**: Filtrado de sensores por categorías

### Tests de Movimiento
- ✅ **test_05_movement_commands**: Todos los comandos de movimiento
  - `drive_forward()`
  - `drive_backward()`
  - `spin()` (izquierda y derecha)
  - `drive_manual()`

### Tests de Limpieza
- ✅ **test_06_cleaning_commands**: Comandos de limpieza
  - `start_cleaning()`
  - `start_max_cleaning()`
  - `stop_cleaning()`

### Tests de Actuadores
- ✅ **test_07_brush_commands**: Control de cepillos
  - `set_brushes()`
  - `stop_brushes()`
- ✅ **test_08_led_commands**: Control de LEDs
  - `set_leds()` con diferentes colores e intensidades

### Tests de Entretenimiento
- ✅ **test_09_song_commands**: Sistema de canciones
  - `play_song()`
  - `stop_song()`

### Tests de Navegación
- ✅ **test_10_dock_commands**: Comandos de dock
  - `seek_dock()`
- ✅ **test_11_wake_command**: Comando wake
  - `wake()`

### Tests de Estado
- ✅ **test_12_status_reporting**: Reporte de estado
  - `get_status()` con y sin sensores

### Tests de Robustez
- ✅ **test_13_reconnection**: Reconexión automática
  - `disconnect()` y `reconnect()`
- ✅ **test_14_error_handling**: Manejo de errores
  - Conexiones fallidas
  - Comandos sin conexión

### Tests de Integración
- ✅ **test_16_integration_with_ros2_node**: Integración con ROS2
- ✅ **test_17_comprehensive_workflow**: Workflow completo

## Resultados Esperados

Si todos los tests pasan, verás:

```
=== Iniciando Test Suite para lib_robot_roomba.py ===
✓ Puertos virtuales disponibles

test_01_initialization ✓
test_02_connection_tcp ✓
test_03_connection_serial ✓
...
test_17_comprehensive_workflow ✓

=== Resumen de Resultados ===
Tests ejecutados: 17
Errores: 0
Fallos: 0
✅ TODOS LOS TESTS PASARON EXITOSAMENTE
```

## Troubleshooting

### Problema: "Los puertos virtuales no existen"

**Solución:** Iniciar el simulador manualmente:

```bash
cd "Fase 02/Utils"
python simulador_roomba.py
```

Luego ejecutar el test en otra terminal.

### Problema: "Simulador no encontrado"

**Solución:** Verificar que el archivo `simulador_roomba.py` existe:

```bash
ls -la Fase\ 02/Utils/simulador_roomba.py
```

### Problema: "Librería no encontrada"

**Solución:** Verificar la estructura del proyecto:

```bash
ls -la Fase\ 02/Librerias/roomba/lib_robot_roomba.py
ls -la Fase\ 02/Librerias/irobot/robots/create2.py
```

### Problema: "ModuleNotFoundError"

**Solución:** Instalar dependencias:

```bash
pip install pyserial
```

### Problema: Tests fallan esporádicamente

**Solución:** Aumentar los tiempos de espera en el test o verificar que el simulador esté funcionando correctamente.

## Interpretación de Resultados

### Test Exitoso
- **Código de salida:** 0
- **Mensaje:** "✅ TODOS LOS TESTS PASARON EXITOSAMENTE"
- **Significado:** La librería funciona correctamente

### Test Fallido
- **Código de salida:** 1
- **Mensaje:** "❌ ALGUNOS TESTS FALLARON"
- **Significado:** Hay problemas en la librería que necesitan ser corregidos

### Errores Comunes

1. **Errores de conexión:** Verificar que el simulador esté ejecutándose
2. **Timeout:** Aumentar tiempos de espera en el código
3. **Comandos no reconocidos:** Verificar compatibilidad con el protocolo Open Interface

## Integración con CI/CD

Este test puede ser integrado en un pipeline de CI/CD:

```yaml
# Ejemplo para GitHub Actions
- name: Test lib_robot_roomba
  run: |
    cd "Fase 02/Utils"
    python simulador_roomba.py &
    sleep 5
    python test_lib_robot_roomba.py
```

## Mantenimiento

Para mantener el test actualizado:

1. **Agregar nuevos tests** cuando se agreguen funcionalidades a la librería
2. **Actualizar tests existentes** si cambia la API de la librería
3. **Revisar tiempos de espera** si el simulador cambia su comportamiento
4. **Verificar compatibilidad** con nuevas versiones de dependencias

## Contacto

Si encuentras problemas con este test, revisa:
1. La documentación del simulador
2. Los logs del test (nivel INFO)
3. La compatibilidad con el nodo ROS2
4. La estructura del proyecto 