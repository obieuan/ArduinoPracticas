import flet as ft
import matplotlib
matplotlib.use("Agg")  # Configura matplotlib para usar el backend de salida de imagen
import matplotlib.pyplot as plt
from io import BytesIO
import base64
import serial
import threading
import time

# Configurar la conexión serial con el Arduino
arduino = serial.Serial('COM3', 9600, timeout=1)  # Cambia 'COM3' por el puerto de tu Arduino

# Variables para almacenar datos
x_data = []
y_data = []

# Función para obtener y procesar datos del Arduino
def obtener_datos():
    while True:
        if arduino.in_waiting > 0:
            try:
                # Leer línea y quitar el prefijo 'SENSOR:'
                data = arduino.readline().decode('utf-8').strip()
                print(f"Datos recibidos del Arduino: {data}")  # Mensaje de depuración

                # Extraer el valor numérico eliminando 'SENSOR:'
                if "SENSOR:" in data:
                    data = data.replace("SENSOR:", "").strip()

                y = float(data)  # Convertir a float para graficar
                x_data.append(len(x_data))  # El tiempo o índice
                y_data.append(y)
                
                # Limitar el tamaño de los datos para mantener la gráfica manejable
                if len(x_data) > 50:
                    x_data.pop(0)
                    y_data.pop(0)
            except ValueError:
                print("Error de conversión: Datos no válidos")
                continue
        time.sleep(0.1)

# Función para crear la gráfica
def crear_grafica_lineal():
    fig, ax = plt.subplots()
    ax.plot(x_data, y_data, label="Datos Arduino")
    ax.set_xlabel("Tiempo")
    ax.set_ylabel("Valor")
    ax.legend()
    
    buf = BytesIO()
    plt.savefig(buf, format="png")
    buf.seek(0)
    img_base64 = base64.b64encode(buf.getvalue()).decode("utf-8")
    plt.close(fig)  # Cierra la figura después de guardarla
    return img_base64

# Función de actualización de la gráfica en Flet
def actualizar_grafica(page, img):
    while True:
        img.src_base64 = crear_grafica_lineal()
        page.update()
        time.sleep(1)  # Actualiza cada segundo

def main(page: ft.Page):
    page.title = "Gráfica en Tiempo Real con Arduino"
    
    # Imagen para la gráfica inicial
    img = ft.Image(src_base64=crear_grafica_lineal())
    page.add(img)
    
    # Hilo para actualizar la gráfica
    thread_grafica = threading.Thread(target=actualizar_grafica, args=(page, img))
    thread_grafica.daemon = True
    thread_grafica.start()
    
    # Hilo para leer los datos del Arduino
    thread_datos = threading.Thread(target=obtener_datos)
    thread_datos.daemon = True
    thread_datos.start()

if __name__ == "__main__":
    ft.app(target=main)
