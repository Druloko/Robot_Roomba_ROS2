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
            client.close()