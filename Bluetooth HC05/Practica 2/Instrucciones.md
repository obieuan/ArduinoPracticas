# Práctica de Arduino: Comunicación entre dos Arduinos utilizando Bluetooth HC-05

## 1. Título de la Práctica
Comunicación entre dos Arduinos utilizando Bluetooth HC-05

## 2. Objetivo
Familiarizar a los estudiantes con la configuración de dos módulos Bluetooth HC-05 como maestro y esclavo para establecer una comunicación bidireccional entre dos placas Arduino. Los estudiantes aprenderán a enviar y recibir datos entre los Arduinos a través de Bluetooth.

## 3. Materiales y Herramientas
- **Componentes físicos:**
  - 2 placas Arduino UNO o similares.
  - 2 módulos Bluetooth HC-05.
  - Protoboard.
  - Cables de conexión.
- **Software:**
  - Arduino IDE.

## 4. Introducción Teórica
El **HC-05** es un módulo Bluetooth que puede ser configurado tanto como maestro (para iniciar la conexión) como esclavo (para aceptar conexiones). En esta práctica, un módulo HC-05 será configurado como maestro y el otro como esclavo para permitir la comunicación entre dos placas Arduino. Esta configuración es común en proyectos de IoT y sistemas embebidos que requieren comunicación inalámbrica entre dispositivos.

## 5. Diagrama de Conexiones
### Para ambos HC-05:
- **Conexión del HC-05 (en ambas placas):**
  - VCC → 5V en Arduino.
  - GND → GND en Arduino.
  - TX del HC-05 → Pin digital 10 (RX software en Arduino).
  - RX del HC-05 → Pin digital 11 (TX software en Arduino) *a través de un divisor de voltaje*.

![hc05](Diagrama/hc05.png)

## 6. Actividades Prácticas

### Actividad 1: Configuración del HC-05 como Maestro y Esclavo
En esta actividad, se configurará uno de los módulos HC-05 como maestro y el otro como esclavo para permitir la comunicación entre ellos.

#### Instrucciones:
1. **Arduino Esclavo**:
   - Conecta el módulo HC-05 a la placa Arduino esclavo según el diagrama.
   - Carga el código de esclavo desde [`codigo_hc05_esclavo.ino`](sandbox:/mnt/data/codigo_hc05_esclavo.ino).
   - El HC-05 esclavo estará esperando conexiones.

2. **Arduino Maestro**:
   - Conecta el módulo HC-05 a la placa Arduino maestro según el diagrama.
   - Carga el código de maestro desde [`codigo_hc05_maestro.ino`](sandbox:/mnt/data/codigo_hc05_maestro.ino).
   - El HC-05 maestro intentará conectarse automáticamente al esclavo.

3. Observa cómo se establece la conexión entre ambos dispositivos.

#### Preguntas de Análisis:
- ¿Qué ocurre si uno de los módulos no está encendido al intentar la conexión?
- ¿Cómo podrías utilizar esta configuración de maestro-esclavo en un proyecto de automatización?

### Actividad 2: Envío de Datos entre Arduinos
En esta actividad, los estudiantes enviarán mensajes desde un Arduino hacia el otro utilizando la conexión Bluetooth.

#### Instrucciones:
1. Una vez establecida la conexión entre maestro y esclavo:
   - En el Arduino maestro, envía un mensaje predefinido.
   - El Arduino esclavo recibirá este mensaje y lo mostrará en el Monitor Serial.

2. Observa cómo se envían y reciben los datos de un Arduino a otro.

#### Preguntas de Análisis:
- ¿Qué tan rápido se envían los datos entre los Arduinos?
- ¿Qué aplicaciones prácticas podrías desarrollar utilizando esta comunicación?

### Actividad 3: Control de Dispositivos entre Arduinos
En esta actividad, se enviarán comandos de un Arduino a otro para encender o apagar un LED en la placa esclava.

#### Instrucciones:
1. Conecta un LED al pin digital 13 del Arduino esclavo.
2. Desde el Arduino maestro, envía un comando para encender y apagar el LED.
3. Observa cómo el LED responde a los comandos enviados por el Arduino maestro.

#### Preguntas de Análisis:
- ¿Qué aplicaciones podrías implementar en proyectos más complejos utilizando este sistema de control?
- ¿Cómo podrías mejorar la velocidad de respuesta en la comunicación entre los Arduinos?

## 7. Análisis de Resultados
Los estudiantes deben analizar los resultados obtenidos en cada actividad, comprendiendo cómo configurar y establecer una comunicación Bluetooth entre dos Arduinos, así como enviar y recibir datos entre ellos.

- ¿Qué factores afectan la velocidad de la conexión Bluetooth?
- ¿Cómo podrías utilizar la comunicación maestro-esclavo en un proyecto IoT?

## 8. Preguntas de Reflexión o Evaluación
1. ¿Qué aprendiste sobre la comunicación Bluetooth entre dos Arduinos?
2. ¿Qué ventajas tiene el uso de Bluetooth en proyectos de IoT o automatización?
3. ¿Qué mejoras podrías implementar en la comunicación inalámbrica entre dispositivos?

## 9. Bibliografía y Recursos
- [Librería SoftwareSerial de Arduino](https://www.arduino.cc/en/Reference/SoftwareSerial)
- [Documentación oficial de Arduino](https://www.arduino.cc/reference/en/)
