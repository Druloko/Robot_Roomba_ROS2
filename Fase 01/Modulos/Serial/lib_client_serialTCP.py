<<<<<<< HEAD
# client.py
import socket
import logging
from typing import Optional

class SerialTCPClient:
    def __init__(self, host: str = 'localhost', port: int = 5000):
        self.host = host
        self.port = port
        self.socket: Optional[socket.socket] = None
        
        # Configurar logging
        logging.basicConfig(level=logging.INFO)
        self.logger = logging.getLogger('SerialTCPClient')

    def connect(self):
        """Establece conexión con el servidor"""
        try:
            self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self.socket.connect((self.host, self.port))
            self.logger.info(f"Conectado al servidor en {self.host}:{self.port}")
            return True
        except Exception as e:
            self.logger.error(f"Error al conectar: {str(e)}")
            return False

    def send(self, data: bytes):
        """Envía datos al servidor"""
        if not self.socket:
            raise ConnectionError("No hay conexión establecida")
        try:
            self.socket.send(data)
        except Exception as e:
            self.logger.error(f"Error al enviar datos: {str(e)}")
            raise

    def receive(self, buffer_size: int = 1024) -> bytes:
        """Recibe datos del servidor"""
        if not self.socket:
            raise ConnectionError("No hay conexión establecida")
        try:
            return self.socket.recv(buffer_size)
        except Exception as e:
            self.logger.error(f"Error al recibir datos: {str(e)}")
            raise

    def close(self):
        """Cierra la conexión"""
        if self.socket:
            self.socket.close()
            self.socket = None
            self.logger.info("Conexión cerrada")
=======
import subprocess
import socket
import serial
import threading
import logging
from typing import Optional


class SerialTCPVirtualClient:
    def __init__(self, host: str = 'localhost', port: int = 5000, baudrate: int = 115200):
        self.host = host
        self.port = port
        self.virtual_port: Optional[str] = None
        self.socat_process: Optional[subprocess.Popen] = None
        self.running = False
        self.socket: Optional[socket.socket] = None

        # Configurar logging
        logging.basicConfig(level=logging.INFO)
        self.logger = logging.getLogger('SerialTCPVirtualClient')

    def create_virtual_port(self):
        """Crea un puerto serial virtual usando socat"""
        self.logger.info("Iniciando creación del puerto serial virtual...")
        try:
            # Vincular un puerto virtual al servidor TCP directamente
            self.socat_process = subprocess.Popen(
                ["socat", "-d", "-d", f"pty,raw,echo=0", f"tcp:{self.host}:{self.port}"],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                universal_newlines=True
            )

            # Leer las salidas para capturar el puerto virtual creado
            for line in self.socat_process.stderr:
                self.logger.info(f"socat: {line.strip()}")
                if "PTY is" in line:
                    self.virtual_port = line.split()[-1]
                    break

            if not self.virtual_port:
                raise RuntimeError("No se pudo crear el puerto virtual")

            self.logger.info(f"Puerto virtual creado: {self.virtual_port}")
            return self.virtual_port

        except Exception as e:
            self.logger.error(f"Error al crear el puerto virtual: {str(e)}")
            self.stop()


    def connect(self):
        """Conecta al servidor TCP"""
        self.logger.info(f"Intentando conectar al servidor TCP en {self.host}:{self.port}...")
        try:
            # Crear el puerto virtual
            virtual_port = self.create_virtual_port()
            if not virtual_port:
                raise RuntimeError("No se pudo inicializar el puerto virtual")

            # Conectar al servidor TCP
            self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self.socket.connect((self.host, self.port))
            self.logger.info(f"Conectado al servidor TCP en {self.host}:{self.port}")

            self.logger.info(f"El puerto serial virtual para aplicaciones es: {virtual_port}")
            self.logger.info("Esperando transmisión entre el puerto virtual y el servidor TCP...")

            self.running = True

            # Iniciar transmisión TCP -> Virtual
            tcp_to_virtual_thread = threading.Thread(target=self._tcp_to_virtual)
            tcp_to_virtual_thread.start()

            tcp_to_virtual_thread.join()

        except Exception as e:
            self.logger.error(f"Error en la conexión: {str(e)}")
            self.stop()


    def _tcp_to_virtual(self):
        """Envía datos del servidor TCP al puerto virtual sin abrir el puerto aquí"""
        try:
            self.logger.info("Iniciando transmisión: TCP -> Virtual...")
            with open(self.virtual_port, "wb", buffering=0) as virtual_conn:
                while self.running:
                    data = self.socket.recv(1024)
                    if not data:
                        break
                    virtual_conn.write(data)
                    self.logger.debug(f"TCP -> Virtual: {data}")
        except Exception as e:
            self.logger.error(f"Error en tcp_to_virtual: {str(e)}")
            self.stop()

    def stop(self):
        """Detiene el cliente y cierra conexiones"""
        self.logger.info("Deteniendo el cliente...")
        self.running = False

        if self.socket:
            self.logger.info("Cerrando conexión TCP...")
            self.socket.close()
            self.socket = None

        if self.socat_process:
            self.logger.info("Terminando el proceso socat...")
            self.socat_process.terminate()
            self.socat_process = None

        self.logger.info("Cliente detenido")


if __name__ == '__main__':
    client = SerialTCPVirtualClient(host='192.168.0.167', port=5000, baudrate=115200)
    try:
        client.connect()
    except KeyboardInterrupt:
        client.stop()
>>>>>>> 2b4b4d6ceaa7e48fd87d8cb7b3324259ab7a16ca
