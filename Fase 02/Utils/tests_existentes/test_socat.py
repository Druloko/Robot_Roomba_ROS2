#!/usr/bin/env python3
"""
Script de lanzamiento para el simulador de Roomba
Automatiza el inicio del simulador y las pruebas
Compatible con el sistema Robot_Roomba_ROS2
"""

import os
import sys
import time
import subprocess
import signal
import threading
from pathlib import Path

class RoombaTestLauncher:
    """Lanzador automático del simulador y pruebas de Roomba"""
    
    def __init__(self):
        self.simulator_process = None
        self.test_process = None
        self.running = False
        
        # Rutas del proyecto
        self.project_root = Path(__file__).parent.parent
        self.simulator_path = self.project_root / "Utils" / "simulador_roomba.py"
        self.test_path = self.project_root / "Utils" / "Pruebas_Serial.py"
        self.communication_node_path = self.project_root / "Communication_Node_v0.1.0.py"
        
        print(f"📁 Directorio del proyecto: {self.project_root}")
        print(f"🤖 Simulador: {self.simulator_path}")
        print(f"🧪 Pruebas: {self.test_path}")
        print(f"🔗 Nodo ROS2: {self.communication_node_path}")
    
    def check_dependencies(self):
        """Verifica que todas las dependencias estén disponibles"""
        print("\n🔍 Verificando dependencias...")
        
        errors = []
        
        # Verificar socat
        try:
            subprocess.run(["socat", "-V"], capture_output=True, check=True)
            print("✅ socat disponible")
        except (subprocess.CalledProcessError, FileNotFoundError):
            errors.append("❌ socat no está instalado. Ejecuta: sudo apt-get install socat")
        
        # Verificar Python y módulos
        try:
            import serial
            print("✅ pyserial disponible")
        except ImportError:
            errors.append("❌ pyserial no está instalado. Ejecuta: pip install pyserial")
        
        # Verificar archivos del proyecto
        if not self.simulator_path.exists():
            errors.append(f"❌ Simulador no encontrado: {self.simulator_path}")
        else:
            print("✅ Simulador encontrado")
        
        if not self.test_path.exists():
            errors.append(f"❌ Pruebas no encontradas: {self.test_path}")
        else:
            print("✅ Pruebas encontradas")
        
        if not self.communication_node_path.exists():
            print("⚠️  Nodo ROS2 no encontrado (opcional)")
        else:
            print("✅ Nodo ROS2 encontrado")
        
        # Verificar estructura de librerías
        irobot_path = self.project_root / "Librerias" / "irobot"
        roomba_path = self.project_root / "Librerias" / "roomba"
        
        if not irobot_path.exists():
            errors.append(f"❌ Librería irobot no encontrada: {irobot_path}")
        else:
            print("✅ Librería irobot encontrada")
        
        if not roomba_path.exists():
            errors.append(f"❌ Librería roomba no encontrada: {roomba_path}")
        else:
            print("✅ Librería roomba encontrada")
        
        if errors:
            print("\n❌ Errores encontrados:")
            for error in errors:
                print(f"   {error}")
            return False
        
        print("\n✅ Todas las dependencias están disponibles")
        return True
    
    def cleanup_ports(self):
        """Limpia puertos virtuales existentes"""
        print("\n🧹 Limpiando puertos virtuales existentes...")
        
        ports = ["/tmp/roomba_front", "/tmp/roomba_back"]
        for port in ports:
            if os.path.exists(port):
                try:
                    os.remove(port)
                    print(f"   🗑️  Eliminado: {port}")
                except OSError as e:
                    print(f"   ⚠️  No se pudo eliminar {port}: {e}")
        
        # Matar procesos socat existentes
        try:
            subprocess.run(["pkill", "-f", "socat.*roomba"], capture_output=True)
            print("   🔄 Procesos socat existentes terminados")
        except:
            pass
    
    def start_simulator(self):
        """Inicia el simulador en un proceso separado"""
        print("\n🚀 Iniciando simulador...")
        
        try:
            # Cambiar al directorio del simulador
            os.chdir(self.simulator_path.parent)
            
            # Iniciar simulador
            self.simulator_process = subprocess.Popen(
                [sys.executable, str(self.simulator_path)],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                universal_newlines=True
            )
            
            # Esperar a que se inicialice
            time.sleep(3)
            
            # Verificar que esté ejecutándose
            if self.simulator_process.poll() is not None:
                stdout, stderr = self.simulator_process.communicate()
                print(f"❌ El simulador falló al iniciar:")
                print(f"STDOUT: {stdout}")
                print(f"STDERR: {stderr}")
                return False
            
            # Verificar que los puertos existan
            for i in range(10):  # Intentar hasta 10 veces
                if os.path.exists("/tmp/roomba_front") and os.path.exists("/tmp/roomba_back"):
                    print("✅ Simulador iniciado correctamente")
                    print("   📡 Puerto frontal: /tmp/roomba_front")
                    print("   📡 Puerto trasero: /tmp/roomba_back")
                    return True
                time.sleep(0.5)
            
            print("❌ Los puertos virtuales no se crearon")
            return False
            
        except Exception as e:
            print(f"❌ Error iniciando simulador: {e}")
            return False
    
    def run_tests(self):
        """Ejecuta las pruebas del simulador"""
        print("\n🧪 Ejecutando pruebas...")
        
        try:
            # Cambiar al directorio de las pruebas
            os.chdir(self.project_root)
            
            # Ejecutar pruebas
            result = subprocess.run(
                [sys.executable, str(self.test_path)],
                capture_output=True,
                universal_newlines=True,
                timeout=120  # Timeout de 2 minutos
            )
            
            print("📊 Resultado de las pruebas:")
            print(f"   Código de salida: {result.returncode}")
            
            if result.stdout:
                print("   📤 Salida estándar:")
                print("   " + "\n   ".join(result.stdout.split("\n")[-20:]))  # Últimas 20 líneas
            
            if result.stderr:
                print("   ⚠️  Errores:")
                print("   " + "\n   ".join(result.stderr.split("\n")))
            
            if result.returncode == 0:
                print("✅ Pruebas completadas exitosamente")
            else:
                print("❌ Las pruebas fallaron")
            
            return result.returncode == 0
            
        except subprocess.TimeoutExpired:
            print("⏰ Las pruebas excedieron el tiempo límite")
            return False
        except Exception as e:
            print(f"❌ Error ejecutando pruebas: {e}")
            return False
    
    def run_communication_node(self):
        """Ejecuta el nodo de comunicación ROS2"""
        print("\n🔗 Iniciando nodo de comunicación ROS2...")
        
        if not self.communication_node_path.exists():
            print("⚠️  Nodo ROS2 no encontrado, saltando...")
            return False
        
        try:
            # Cambiar al directorio del nodo
            os.chdir(self.project_root)
            
            # Ejecutar nodo (en modo interactivo)
            print("🔄 Ejecutando nodo ROS2 (presiona Ctrl+C para detener)...")
            result = subprocess.run(
                [sys.executable, str(self.communication_node_path)],
                capture_output=False  # Mostrar salida en tiempo real
            )
            
            return result.returncode == 0
            
        except KeyboardInterrupt:
            print("\n⏹️  Nodo ROS2 detenido por el usuario")
            return True
        except Exception as e:
            print(f"❌ Error ejecutando nodo ROS2: {e}")
            return False
    
    def signal_handler(self, signum, frame):
        """Maneja señales para limpieza segura"""
        print(f"\n🛑 Señal {signum} recibida, limpiando...")
        self.cleanup()
        sys.exit(0)
    
    def cleanup(self):
        """Limpia recursos al terminar"""
        print("\n🧹 Limpiando recursos...")
        
        if self.simulator_process and self.simulator_process.poll() is None:
            print("   🔄 Deteniendo simulador...")
            self.simulator_process.terminate()
            try:
                self.simulator_process.wait(timeout=5)
            except subprocess.TimeoutExpired:
                self.simulator_process.kill()
        
        # Limpiar puertos
        self.cleanup_ports()
        print("✅ Limpieza completada")
    
    def interactive_menu(self):
        """Menú interactivo para el usuario"""
        while True:
            print("\n" + "="*50)
            print("🤖 SIMULADOR DE ROOMBA CREATE2")
            print("="*50)
            print("1. 🔍 Verificar dependencias")
            print("2. 🧹 Limpiar puertos")
            print("3. 🚀 Iniciar simulador")
            print("4. 🧪 Ejecutar pruebas")
            print("5. 🔗 Ejecutar nodo ROS2")
            print("6. 🎯 Ejecutar todo (simulador + pruebas)")
            print("7. 📖 Mostrar ayuda")
            print("0. ❌ Salir")
            
            try:
                choice = input("\n👉 Selecciona una opción: ").strip()
                
                if choice == "1":
                    self.check_dependencies()
                
                elif choice == "2":
                    self.cleanup_ports()
                
                elif choice == "3":
                    if self.check_dependencies():
                        self.cleanup_ports()
                        if self.start_simulator():
                            input("\n⏸️  Presiona Enter para detener el simulador...")
                            self.cleanup()
                
                elif choice == "4":
                    if self.check_dependencies():
                        self.run_tests()
                
                elif choice == "5":
                    if self.check_dependencies():
                        self.cleanup_ports()
                        if self.start_simulator():
                            self.run_communication_node()
                            self.cleanup()
                
                elif choice == "6":
                    if self.check_dependencies():
                        self.cleanup_ports()
                        if self.start_simulator():
                            self.run_tests()
                            input("\n⏸️  Presiona Enter para continuar...")
                            self.cleanup()
                
                elif choice == "7":
                    self.show_help()
                
                elif choice == "0":
                    print("\n👋 ¡Hasta luego!")
                    self.cleanup()
                    break
                
                else:
                    print("❌ Opción no válida")
                
            except KeyboardInterrupt:
                print("\n\n👋 ¡Hasta luego!")
                self.cleanup()
                break
            except Exception as e:
                print(f"❌ Error: {e}")
    
    def show_help(self):
        """Muestra ayuda detallada"""
        print("\n" + "="*60)
        print("📖 AYUDA - SIMULADOR DE ROOMBA")
        print("="*60)
        print()
        print("🎯 DESCRIPCIÓN:")
        print("   Este simulador implementa el protocolo Open Interface del")
        print("   Roomba Create2 para desarrollo sin hardware físico.")
        print()
        print("🔧 REQUISITOS:")
        print("   - socat (para puertos virtuales)")
        print("   - Python 3.6+")
        print("   - pyserial")
        print()
        print("📁 ESTRUCTURA DEL PROYECTO:")
        print("   Fase 02/")
        print("   ├── Utils/")
        print("   │   └── simulador_roomba.py")
        print("   ├── Librerias/")
        print("   │   ├── irobot/")
        print("   │   └── roomba/")
        print("   ├── Pruebas_Serial.py")
        print("   └── Communication_Node_v0.1.0.py")
        print()
        print("🚀 USO RÁPIDO:")
        print("   1. Ejecutar 'Verificar dependencias'")
        print("   2. Ejecutar 'Ejecutar todo' para pruebas completas")
        print("   3. O ejecutar manualmente: simulador → pruebas/nodo")
        print()
        print("🐛 SOLUCIÓN DE PROBLEMAS:")
        print("   - Si falla socat: sudo apt-get install socat")
        print("   - Si fallan permisos: rm -f /tmp/roomba_*")
        print("   - Si no conecta: verificar que el simulador esté ejecutándose")
        print()
        print("📚 DOCUMENTACIÓN COMPLETA:")
        print("   Ver: Fase 02/Utils/README_Simulador.md")
    
    def run(self):
        """Ejecuta el lanzador"""
        # Configurar manejo de señales
        signal.signal(signal.SIGINT, self.signal_handler)
        signal.signal(signal.SIGTERM, self.signal_handler)
        
        print("🤖 Iniciando lanzador del simulador de Roomba...")
        print(f"📍 Directorio actual: {os.getcwd()}")
        
        try:
            self.interactive_menu()
        except Exception as e:
            print(f"❌ Error inesperado: {e}")
            self.cleanup()


def main():
    """Función principal"""
    launcher = RoombaTestLauncher()
    launcher.run()


if __name__ == "__main__":
    main()
