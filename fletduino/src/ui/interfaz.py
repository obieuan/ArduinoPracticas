from flet import Column, Text, Switch
from ui.interfaz_controller import InterfazController

def construir_interfaz(page):
    texto_sensor = Text(value="Esperando datos del sensor...")
    texto_recibido = Text(value="Estado del LED: Desconocido")
    switch_led = Switch(label="LED")

    # Instancia del controlador de la interfaz
    controlador = InterfazController(page)
    controlador.inicializar_componentes(texto_sensor, texto_recibido, switch_led)

    # Layout de la interfaz
    page.add(Column([texto_sensor, switch_led, texto_recibido]))
