# Práctica de Arduino: Comunicación Inalámbrica con el Módulo Bluetooth HC-05

## 1. Título de la Práctica
Comunicación Inalámbrica con el Módulo Bluetooth HC-05

## 2. Objetivo
Familiarizar a los estudiantes con la configuración y uso del módulo Bluetooth HC-05 para realizar la comunicación entre un dispositivo móvil o computadora y una placa Arduino. Los estudiantes aprenderán a recibir comandos a través de Bluetooth y ejecutar acciones en el Arduino basadas en los datos recibidos.

## 3. Materiales y Herramientas
- **Componentes físicos:**
  - Arduino UNO o similar.
  - Módulo Bluetooth HC-05.
  - Resistencias de 220 Ohms
  - Protoboard.
  - Cables de conexión.
- **Software:**
  - Arduino IDE.
  - Aplicación móvil Bluetooth o software de comunicación Bluetooth (p. ej., Bluetooth Serial Terminal).

## 4. Introducción Teórica
El **HC-05** es un módulo Bluetooth clásico que permite la comunicación inalámbrica entre un Arduino y dispositivos móviles o computadoras a través de Bluetooth Serial. Es ampliamente utilizado en proyectos de IoT, robótica y automatización para enviar y recibir comandos sin necesidad de cables.

### **Modo AT**
El módulo HC-05 tiene un modo de comando llamado **Modo AT**, que permite configurar parámetros como el nombre del dispositivo, el PIN, la velocidad de transmisión (baud rate), entre otros. En esta práctica, se usará en modo esclavo para recibir comandos desde un dispositivo remoto.

## 5. Diagrama de Conexiones
- **Conexión del HC-05:**
  - VCC → 5V en Arduino.
  - GND → GND en Arduino.
  - TX del HC-05 → Pin digital 10 (RX software en Arduino).
  - RX del HC-05 → Pin digital 11 (TX software en Arduino) *a través de un divisor de voltaje*.

![hc05](Diagrama/hc05.png)

## 6. Actividades Prácticas

### Actividad 1: Conexión Básica y Recepción de Datos
En esta actividad, los estudiantes establecerán una conexión Bluetooth entre un dispositivo móvil o computadora y el módulo HC-05, y enviarán datos que el Arduino recibirá y mostrará en el Monitor Serial.

#### Instrucciones:
1. Conecta el módulo HC-05 según el diagrama.
2. Carga el código de recepción de datos desde [`codigo_hc05_recepcion.ino`](Codigo/codigo_hc05_recepcion.ino).
3. Usa una aplicación de terminal Bluetooth en tu dispositivo móvil o computadora para emparejar con el HC-05 (PIN predeterminado: 1234).
4. Envía un mensaje a través de la aplicación Bluetooth y observa cómo el mensaje es mostrado en el Monitor Serial de Arduino.

#### Preguntas de Análisis:
- ¿Qué ocurre cuando envías diferentes tipos de datos?
- ¿Qué aplicaciones prácticas se te ocurren para la recepción de datos por Bluetooth?

### Actividad 2: Control de un LED mediante Bluetooth
En esta actividad, los estudiantes enviarán comandos a través de Bluetooth para encender y apagar un LED conectado al Arduino.

#### Instrucciones:
1. Conecta un LED al pin digital 13 del Arduino.
2. Carga el código de control del LED mediante Bluetooth desde [`codigo_hc05_control_led.ino`](Codigo/codigo_hc05_control_led.ino).
3. Usa la aplicación Bluetooth para enviar los comandos **"ON"** para encender el LED y **"OFF"** para apagarlo.
4. Observa cómo el LED responde a los comandos enviados.

#### Preguntas de Análisis:
- ¿Qué tan rápida es la respuesta del LED a los comandos enviados?
- ¿Cómo podrías utilizar este sistema de control en un proyecto de automatización?

### Actividad 3: Configuración del Módulo en Modo AT (Opcional)
En esta actividad opcional, los estudiantes ingresarán al **Modo AT** del módulo HC-05 para modificar su configuración.

#### Instrucciones:
1. Entra al Modo AT conectando el pin EN del HC-05 a 3.3V y manteniendo el módulo apagado mientras subes el código de configuración AT desde [`codigo_hc05_modo_at.ino`](Codigo/codigo_hc05_modo_at.ino).
2. Envía comandos AT desde el Monitor Serial para modificar parámetros como el nombre del dispositivo, el PIN de emparejamiento, o la velocidad de transmisión (baud rate).
3. Reinicia el módulo y empareja nuevamente para verificar los cambios.

#### Preguntas de Análisis:
- ¿Qué cambios puedes realizar en el modo AT?
- ¿Cómo podría el cambio de estos parámetros mejorar la seguridad o rendimiento de una aplicación Bluetooth?

## 7. Análisis de Resultados
Los estudiantes deben analizar los resultados obtenidos en cada actividad, comprendiendo cómo establecer una conexión Bluetooth y enviar o recibir datos de manera eficiente. Además, explorarán la configuración del módulo para adaptarlo a distintas aplicaciones.

- ¿Qué ventajas ofrece la comunicación inalámbrica en un sistema embebido?
- ¿Cómo podrías utilizar esta tecnología en un proyecto IoT?

## 8. Preguntas de Reflexión o Evaluación
1. ¿Qué aprendiste sobre la comunicación Bluetooth con Arduino?
2. ¿Qué aplicaciones prácticas puedes crear con la recepción y envío de datos por Bluetooth?
3. ¿Cómo podrías mejorar la seguridad de la comunicación Bluetooth en un sistema real?

## 9. Bibliografía y Recursos
- [Librería SoftwareSerial de Arduino](https://www.arduino.cc/en/Reference/SoftwareSerial)
- [Documentación oficial de Arduino](https://www.arduino.cc/reference/en/)
