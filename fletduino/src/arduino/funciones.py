import serial
from arduino.config import obtener_conexion_serial

class ArduinoController:
    def __init__(self):
        self.ser = obtener_conexion_serial()
    
    def enviar_comando(self, comando):
        """Envía un comando al Arduino a través de la conexión serial."""
        if self.ser.is_open:
            self.ser.write(f"{comando}\n".encode('utf-8'))
    
    def leer_respuesta(self):
        """Lee una respuesta del Arduino a través de la conexión serial."""
        if self.ser.is_open and self.ser.in_waiting > 0:
            return self.ser.readline().decode('utf-8').strip()
        return None
    
    def cerrar_conexion(self):
        """Cierra la conexión serial."""
        if self.ser.is_open:
            self.ser.close()

    def obtener_estado_led(self):
        """Consulta el estado inicial del LED desde el Arduino."""
        self.enviar_comando("ESTADO_LED")
        respuesta = self.leer_respuesta()
        if respuesta and respuesta.startswith("LED:"):
            return respuesta[4:] == "Encendido"
        return False