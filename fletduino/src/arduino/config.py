import serial

def obtener_conexion_serial():
    """Configura y retorna la conexión serial al Arduino."""
    return serial.Serial(port='COM3', baudrate=9600, timeout=1)  # Ajusta el puerto según tu sistema
