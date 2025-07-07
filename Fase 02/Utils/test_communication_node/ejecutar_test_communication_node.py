#!/usr/bin/env python3
"""
Script de ejecución para el test del nodo ROS2 Communication_Node_v0.1.0.py
Ejecuta automáticamente todos los tests del nodo de comunicación
"""

import sys
import os
import subprocess
import time
from pathlib import Path

def print_header():
    """Imprime el encabezado del programa"""
    print("=" * 70)
    print("🚀 TEST DEL NODO ROS2 Communication_Node_v0.1.0.py")
    print("=" * 70)
    print("Este script verificará que el nodo ROS2 funciona correctamente")
    print("usando mocks para simular el entorno ROS2.\n")

def check_prerequisites():
    """Verifica que todos los prerrequisitos estén disponibles"""
    print("🔍 Verificando prerrequisitos...")
    
    errors = []
    current_dir = Path(__file__).parent
    parent_dir = current_dir.parent
    
    # Verificar Python
    if sys.version_info < (3, 7):
        errors.append("❌ Python 3.7+ requerido")
    else:
        print("✅ Python version compatible")
    
    # Verificar módulos necesarios
    required_modules = ['unittest', 'json', 'queue', 'threading', 'time']
    for module in required_modules:
        try:
            __import__(module)
            print(f"✅ {module} disponible")
        except ImportError:
            errors.append(f"❌ {module} no encontrado")
    
    # Verificar archivos del proyecto
    files_to_check = [
        ("Nodo ROS2", parent_dir.parent / "Communication_Node_v0.1.0.py"),
        ("Test", current_dir / "test_communication_node.py"),
        ("Librería Roomba", parent_dir.parent / "Librerias" / "roomba" / "lib_robot_roomba.py"),
    ]
    
    for name, path in files_to_check:
        if path.exists():
            print(f"✅ {name} encontrado")
        else:
            errors.append(f"❌ {name} no encontrado: {path}")
    
    if errors:
        print("\n❌ Errores encontrados:")
        for error in errors:
            print(f"   {error}")
        return False
    
    print("\n✅ Todos los prerrequisitos están disponibles")
    return True

def run_test():
    """Ejecuta el test principal"""
    print("\n🧪 Ejecutando test del nodo ROS2...")
    
    current_dir = Path(__file__).parent
    test_path = current_dir / "test_communication_node.py"
    
    try:
        # Ejecutar test
        result = subprocess.run(
            [sys.executable, str(test_path)],
            cwd=current_dir,
            capture_output=True,
            text=True,
            timeout=120  # 2 minutos timeout
        )
        
        # Mostrar resultados
        print("\n" + "=" * 50)
        print("📊 RESULTADOS DEL TEST")
        print("=" * 50)
        
        if result.stdout:
            print("📤 Salida del test:")
            print(result.stdout)
        
        if result.stderr:
            print("⚠️  Errores/Advertencias:")
            print(result.stderr)
        
        print(f"\n📋 Código de salida: {result.returncode}")
        
        if result.returncode == 0:
            print("🎉 ¡TEST COMPLETADO EXITOSAMENTE!")
            print("✅ El nodo ROS2 Communication_Node_v0.1.0.py funciona correctamente")
            return True
        else:
            print("❌ El test falló")
            print("🔧 Revisa los errores arriba para más información")
            return False
            
    except subprocess.TimeoutExpired:
        print("⏰ El test excedió el tiempo límite (2 minutos)")
        return False
    except Exception as e:
        print(f"❌ Error ejecutando test: {e}")
        return False

def show_help():
    """Muestra ayuda sobre cómo usar el script"""
    print("\n📖 AYUDA - Cómo usar este script:")
    print("\n1. Ejecución automática (recomendado):")
    print("   python ejecutar_test_communication_node.py")
    print("   - Verifica prerrequisitos automáticamente")
    print("   - Ejecuta todos los tests del nodo ROS2")
    print("   - Muestra resultados detallados")
    
    print("\n2. Ejecución manual:")
    print("   python test_communication_node.py")
    
    print("\n3. Ejecutar tests específicos:")
    print("   python -m unittest test_communication_node.TestCommunicationNode.test_01_node_initialization")
    
    print("\n4. Funcionalidades testeadas:")
    print("   - Inicialización del nodo ROS2")
    print("   - Configuración de parámetros")
    print("   - Sistema de cola de mensajes con prioridades")
    print("   - Conexión con el robot Roomba")
    print("   - Publicación de datos de sensores")
    print("   - Callbacks de suscriptores")
    print("   - Callbacks de servicios")
    print("   - Manejo de errores")
    print("   - Destrucción del nodo")
    
    print("\n5. Notas importantes:")
    print("   - Este test usa mocks para simular ROS2")
    print("   - No requiere ROS2 instalado")
    print("   - Verifica la lógica del nodo independientemente")

def main():
    """Función principal"""
    print_header()
    
    # Manejar argumentos
    if len(sys.argv) > 1:
        if sys.argv[1] in ['--help', '-h', 'help']:
            show_help()
            return
    
    try:
        # 1. Verificar prerrequisitos
        if not check_prerequisites():
            print("\n❌ No se pueden ejecutar los tests debido a prerrequisitos faltantes")
            return
        
        # 2. Ejecutar test
        success = run_test()
        
        # 3. Mostrar resumen final
        print("\n" + "=" * 70)
        if success:
            print("🎉 ¡VERIFICACIÓN COMPLETADA EXITOSAMENTE!")
            print("✅ El nodo ROS2 Communication_Node_v0.1.0.py está funcionando correctamente")
            print("🚀 La integración con la librería lib_robot_roomba.py es exitosa")
            print("📡 Los publicadores, suscriptores y servicios funcionan correctamente")
        else:
            print("❌ LA VERIFICACIÓN FALLÓ")
            print("🔧 Hay problemas que necesitan ser corregidos en el nodo ROS2")
            print("📋 Revisa los errores mostrados arriba")
            print("💡 El problema podría estar en:")
            print("   - Lógica del nodo ROS2")
            print("   - Integración con la librería del robot")
            print("   - Manejo de mensajes o servicios")
        print("=" * 70)
        
    except KeyboardInterrupt:
        print("\n\n⏹️  Test interrumpido por el usuario")
    except Exception as e:
        print(f"\n❌ Error inesperado: {e}")

if __name__ == '__main__':
    main() 