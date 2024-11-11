import threading
from arduino.funciones import ArduinoController

class InterfazController:
    def __init__(self, page):
        self.page = page
        self.controlador_arduino = ArduinoController()
        self.texto_sensor = None
        self.texto_recibido = None
        self.switch_led = None

    def inicializar_componentes(self, texto_sensor, texto_recibido, switch_led):
        """Recibe referencias a los componentes de la interfaz."""
        self.texto_sensor = texto_sensor
        self.texto_recibido = texto_recibido
        self.switch_led = switch_led
        self.switch_led.on_change = self.cambiar_estado_led
        self.actualizar_datos()

    def cambiar_estado_led(self, e):
        """Controla el encendido o apagado del LED según el estado del switch."""
        estado = "ENCENDER" if self.switch_led.value else "APAGAR"
        self.controlador_arduino.enviar_comando(estado)

    def actualizar_datos(self):
        """Función periódica para actualizar los datos del sensor y el estado del LED."""
        dato = self.controlador_arduino.leer_respuesta()
        if dato:
            if dato.startswith("SENSOR:"):
                self.texto_sensor.value = f"Valor del Sensor: {dato[7:]}"
            elif dato.startswith("LED:"):
                self.texto_recibido.value = f"Estado del LED: {dato[4:]}"
            self.page.update()

        # Reinicia el temporizador para llamarse de nuevo
        threading.Timer(1.0, self.actualizar_datos).start()
