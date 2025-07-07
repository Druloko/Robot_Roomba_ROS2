#!/usr/bin/env python3
"""
Script de ejecución simple para el test de lib_robot_roomba.py
Automatiza la verificación de prerrequisitos y ejecución del test
"""

import sys
import os
import time
import subprocess
import signal
from pathlib import Path

def print_header():
    """Imprime el encabezado del programa"""
    print("=" * 70)
    print("🤖 TEST DE LA LIBRERÍA lib_robot_roomba.py")
    print("=" * 70)
    print("Este script verificará que la librería funciona correctamente")
    print("usando el simulador de Roomba.\n")

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
    
    # Verificar pyserial
    try:
        import serial
        print("✅ pyserial disponible")
    except ImportError:
        errors.append("❌ pyserial no encontrado. Instalar con: pip install pyserial")
    
    # Verificar archivos del proyecto
    files_to_check = [
        ("Simulador", current_dir.parent / "simulador" / "simulador_roomba.py"),
        ("Test", current_dir / "test_lib_robot_roomba.py"),
        ("Librería Roomba", parent_dir.parent / "Librerias" / "roomba" / "lib_robot_roomba.py"),
        ("Librería iRobot", parent_dir.parent / "Librerias" / "irobot" / "robots" / "create2.py"),
    ]
    
    for name, path in files_to_check:
        if path.exists():
            print(f"✅ {name} encontrado")
        else:
            errors.append(f"❌ {name} no encontrado: {path}")
    
    # Verificar socat (opcional)
    try:
        subprocess.run(["socat", "-V"], capture_output=True, check=True)
        print("✅ socat disponible")
    except (subprocess.CalledProcessError, FileNotFoundError):
        print("⚠️  socat no encontrado (necesario para algunos tests)")
    
    if errors:
        print("\n❌ Errores encontrados:")
        for error in errors:
            print(f"   {error}")
        return False
    
    print("\n✅ Todos los prerrequisitos están disponibles")
    return True

def check_simulator():
    """Verifica si el simulador está ejecutándose"""
    print("\n🔍 Verificando estado del simulador...")
    
    ports = ["/tmp/roomba_front", "/tmp/roomba_back"]
    simulator_running = all(os.path.exists(port) for port in ports)
    
    if simulator_running:
        print("✅ Simulador ejecutándose correctamente")
        return True
    else:
        print("⚠️  Simulador no detectado")
        return False

def start_simulator():
    """Intenta iniciar el simulador"""
    print("\n🚀 Iniciando simulador...")
    
    current_dir = Path(__file__).parent
    simulator_path = current_dir.parent / "simulador" / "simulador_roomba.py"
    
    try:
        # Iniciar simulador en background
        process = subprocess.Popen(
            [sys.executable, str(simulator_path)],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )
        
        # Esperar a que se inicialice
        for i in range(10):
            time.sleep(1)
            if check_simulator():
                print("✅ Simulador iniciado exitosamente")
                return process
            print(f"   Esperando... ({i+1}/10)")
        
        print("❌ El simulador no se pudo inicializar")
        process.terminate()
        return None
        
    except Exception as e:
        print(f"❌ Error iniciando simulador: {e}")
        return None

def run_test():
    """Ejecuta el test principal"""
    print("\n🧪 Ejecutando test de la librería...")
    
    current_dir = Path(__file__).parent
    test_path = current_dir / "test_lib_robot_roomba.py"
    
    try:
        # Ejecutar test
        result = subprocess.run(
            [sys.executable, str(test_path)],
            cwd=current_dir,
            capture_output=True,
            text=True,
            timeout=300  # 5 minutos timeout
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
            print("✅ La librería lib_robot_roomba.py funciona correctamente")
            return True
        else:
            print("❌ El test falló")
            print("🔧 Revisa los errores arriba para más información")
            return False
            
    except subprocess.TimeoutExpired:
        print("⏰ El test excedió el tiempo límite (5 minutos)")
        return False
    except Exception as e:
        print(f"❌ Error ejecutando test: {e}")
        return False

def cleanup(simulator_process):
    """Limpia procesos y archivos temporales"""
    print("\n🧹 Limpiando...")
    
    if simulator_process:
        try:
            simulator_process.terminate()
            simulator_process.wait(timeout=5)
            print("✅ Simulador terminado")
        except subprocess.TimeoutExpired:
            simulator_process.kill()
            print("⚠️  Simulador forzado a cerrar")
        except Exception as e:
            print(f"⚠️  Error cerrando simulador: {e}")
    
    # Limpiar puertos virtuales
    ports = ["/tmp/roomba_front", "/tmp/roomba_back"]
    for port in ports:
        if os.path.exists(port):
            try:
                os.remove(port)
                print(f"   🗑️  Eliminado: {port}")
            except OSError:
                pass

def show_help():
    """Muestra ayuda sobre cómo usar el script"""
    print("\n📖 AYUDA - Cómo usar este script:")
    print("\n1. Ejecución automática (recomendado):")
    print("   python ejecutar_test_roomba.py")
    print("   - Verifica prerrequisitos automáticamente")
    print("   - Inicia el simulador si es necesario")
    print("   - Ejecuta todos los tests")
    print("   - Limpia al terminar")
    
    print("\n2. Ejecución manual:")
    print("   Terminal 1: python ../simulador/simulador_roomba.py")
    print("   Terminal 2: python test_lib_robot_roomba.py")
    
    print("\n3. Ejecutar tests específicos:")
    print("   python -m unittest test_lib_robot_roomba.TestLibRobotRoomba.test_01_initialization")
    
    print("\n4. Troubleshooting:")
    print("   - Si fallan los tests, revisa que el simulador esté ejecutándose")
    print("   - Verifica que tienes pyserial instalado: pip install pyserial")
    print("   - En Windows usa WSL o instala socat alternativo")

def main():
    """Función principal"""
    print_header()
    
    # Manejar argumentos
    if len(sys.argv) > 1:
        if sys.argv[1] in ['--help', '-h', 'help']:
            show_help()
            return
    
    simulator_process = None
    
    try:
        # 1. Verificar prerrequisitos
        if not check_prerequisites():
            print("\n❌ No se pueden ejecutar los tests debido a prerrequisitos faltantes")
            return
        
        # 2. Verificar/iniciar simulador
        if not check_simulator():
            print("\n🤖 Intentando iniciar simulador automáticamente...")
            simulator_process = start_simulator()
            if not simulator_process:
                print("\n❌ No se pudo iniciar el simulador automáticamente")
                print("💡 Inicia el simulador manualmente:")
                print("   python simulador_roomba.py")
                return
        
        # 3. Ejecutar test
        success = run_test()
        
        # 4. Mostrar resumen final
        print("\n" + "=" * 70)
        if success:
            print("🎉 ¡VERIFICACIÓN COMPLETADA EXITOSAMENTE!")
            print("✅ La librería lib_robot_roomba.py está funcionando correctamente")
            print("🚀 Puedes usar la librería con confianza en tu nodo ROS2")
        else:
            print("❌ LA VERIFICACIÓN FALLÓ")
            print("🔧 Hay problemas que necesitan ser corregidos en la librería")
            print("📋 Revisa los errores mostrados arriba")
        print("=" * 70)
        
    except KeyboardInterrupt:
        print("\n\n⏹️  Test interrumpido por el usuario")
    except Exception as e:
        print(f"\n❌ Error inesperado: {e}")
    finally:
        cleanup(simulator_process)

if __name__ == '__main__':
    main() 