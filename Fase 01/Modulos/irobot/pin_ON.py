import Jetson.GPIO as GPIO
import time

# Configura el número del pin (según la numeración BOARD o BCM)
# Por ejemplo, usaremos el pin 18 (GPIO12 en Jetson Nano)
PIN = 37

# Configuración inicial
GPIO.setmode(GPIO.BOARD)  # O puedes usar GPIO.BCM si prefieres esa numeración
GPIO.setup(PIN, GPIO.OUT, initial=GPIO.HIGH)  # Configura el pin como salida, inicial en estado ALTO

try:
    # Genera el pulso hacia GND (nivel bajo)
    print("Generando pulso hacia GND...")
    GPIO.output(PIN, GPIO.LOW)  # Activa el nivel bajo (conecta a GND)
    time.sleep(0.5)             # Mantiene el estado bajo durante 0,5 segundos
    GPIO.output(PIN, GPIO.HIGH)  # Vuelve al estado alto
    print("Pulso generado con éxito.")

finally:
    # Limpia la configuración del GPIO
    GPIO.cleanup()
