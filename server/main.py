import requests
import serial
import time

# Configuración del puerto serial (ajusta según el tuyo)
arduino = serial.Serial(port='/dev/ttyACM0', baudrate=9600, timeout=.1)

# URL del servidor Flask
url = 'http://127.0.0.1:5000/send-data'

def send_data(sensor_value):
    # Crear el payload JSON
    payload = {'sensor_value': sensor_value}

    # Enviar solicitud POST al servidor
    response = requests.post(url, json=payload)
    
    # Mostrar la respuesta del servidor
    print(response.json())

if __name__ == '__main__':
    time.sleep(2)  # Dar tiempo a que Arduino reinicie
    while True:
        # Leer datos desde Arduino
        data = arduino.readline().decode('utf-8').strip()
        if data:
            print(f'Dato recibido: {data}')
            send_data(data)  # Enviar datos al servidor Flask

        time.sleep(0.5)  # Lee cada 500 ms
