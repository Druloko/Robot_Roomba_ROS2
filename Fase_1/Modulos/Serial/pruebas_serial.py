# Ejemplo de uso del cliente
if __name__ == '__main__':
    client = SerialTCPClient()
    if client.connect():
        try:
            # Ejemplo: enviar un comando al Roomba
            client.send(b'START\n')  # Comando de ejemplo
            response = client.receive()
            print(f"Respuesta recibida: {response}")
        finally:
<<<<<<< HEAD
            client.close()
=======
            client.close()

#sudo socat PTY,link=/dev/roomba,raw TCP:192.168.0.191:5000
>>>>>>> 2b4b4d6ceaa7e48fd87d8cb7b3324259ab7a16ca
