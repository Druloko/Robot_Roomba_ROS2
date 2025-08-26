# server.py
import serial
import socket
import threading
import logging
from typing import Optional

class SerialTCPServer:
    def __init__(self, serial_port: str = '/dev/ttyUSB0', 
                 serial_baudrate: int = 115200,
                 host: str = '0.0.0.0', 
                 port: int = 5000):
        self.serial_port = serial_port
        self.serial_baudrate = serial_baudrate
        self.host = host
        self.port = port
        self.serial_conn: Optional[serial.Serial] = None
        self.server_socket: Optional[socket.socket] = None
        self.client_socket: Optional[socket.socket] = None
        self.running = False
        
        # Configurar logging
        logging.basicConfig(level=logging.INFO)
        self.logger = logging.getLogger('SerialTCPServer')

    def start(self):
        """Inicia el servidor y establece las conexiones"""
        try:
            # Iniciar conexión serial
            self.serial_conn = serial.Serial(
                port=self.serial_port,
                baudrate=self.serial_baudrate,
                timeout=1
            )
            
            # Crear socket servidor
            self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self.server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
            self.server_socket.bind((self.host, self.port))
            self.server_socket.listen(1)
            
            self.running = True
            self.logger.info(f"Servidor iniciado en {self.host}:{self.port}")
            
            while self.running:
                self.logger.info("Esperando conexión del cliente...")
                self.client_socket, addr = self.server_socket.accept()
                self.logger.info(f"Cliente conectado desde {addr}")
                
                # Iniciar hilos para manejar la comunicación bidireccional
                serial_to_tcp = threading.Thread(target=self._serial_to_tcp)
                tcp_to_serial = threading.Thread(target=self._tcp_to_serial)
                
                serial_to_tcp.start()
                tcp_to_serial.start()
                
                serial_to_tcp.join()
                tcp_to_serial.join()
                
        except Exception as e:
            self.logger.error(f"Error en el servidor: {str(e)}")
            self.stop()

    def _serial_to_tcp(self):
        """Envía datos del puerto serie al cliente TCP"""
        try:
            while self.running and self.client_socket:
                if self.serial_conn.in_waiting:
                    data = self.serial_conn.read(self.serial_conn.in_waiting)
                    self.client_socket.send(data)
        except Exception as e:
            self.logger.error(f"Error en serial_to_tcp: {str(e)}")
            self.stop()

    def _tcp_to_serial(self):
        """Envía datos del cliente TCP al puerto serie"""
        try:
            while self.running and self.client_socket:
                data = self.client_socket.recv(1024)
                if not data:
                    break
                self.serial_conn.write(data)
        except Exception as e:
            self.logger.error(f"Error en tcp_to_serial: {str(e)}")
            self.stop()

    def stop(self):
        """Detiene el servidor y cierra las conexiones"""
        self.running = False
        
        if self.client_socket:
            self.client_socket.close()
            
        if self.server_socket:
            self.server_socket.close()
            
        if self.serial_conn:
            self.serial_conn.close()
            
        self.logger.info("Servidor detenido")

if __name__ == '__main__':
    server = SerialTCPServer()
    try:
        server.start()
    except KeyboardInterrupt:
        server.stop()