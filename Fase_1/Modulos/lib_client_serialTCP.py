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