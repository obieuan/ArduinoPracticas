# Práctica de Arduino: Control del Servomotor SG90

## 1. Título de la Práctica
Control del Servomotor SG90 con Arduino

## 2. Objetivo
Familiarizar a los estudiantes con el uso del servomotor SG90 y su control mediante el uso de Arduino. Los estudiantes aprenderán a controlar el ángulo del servomotor de manera básica y a ingresar valores específicos a través del Monitor Serial. Se explorará el control del servomotor en aplicaciones como robótica y automatización.

## 3. Materiales y Herramientas
- **Componentes físicos:**
  - Arduino UNO o similar.
  - Servomotor SG90.
  - Protoboard.
  - Cables de conexión.
- **Software:**
  - Arduino IDE.
  - Monitor Serial para visualizar resultados.

## 4. Introducción Teórica
Un servomotor es un dispositivo electromecánico que puede girar hasta un ángulo determinado en respuesta a una señal de control. El SG90 es un servomotor de pequeño tamaño, controlado por pulsos PWM, que permite girar hasta 180 grados. Los servomotores son utilizados en diversas aplicaciones como robótica, sistemas de control, y automatización.

## 5. Diagrama de Conexiones
- **Conexión del SG90:**
  - Cable naranja (señal) → Pin digital 11 en Arduino.
  - Cable rojo (VCC) → 5V en Arduino.
  - Cable marrón (GND) → GND en Arduino.

[servo](Diagrama/servo.jpg)

## 6. Actividades Prácticas

### Actividad 1: Control Básico del Servomotor
En esta actividad, los estudiantes harán que el servomotor gire de 0 a 180 grados y luego de vuelta a 0 grados.

#### Instrucciones:
1. Conecta el servomotor SG90 según el diagrama.
2. Carga el código de control básico del servomotor desde [`codigo_servomotor_basico.ino`](Codigo/codigo_servomotor_basico.ino).
3. Observa cómo el servomotor gira automáticamente entre 0 y 180 grados.

#### Preguntas de Análisis:
- ¿Cómo varía el tiempo de movimiento del servomotor al cambiar el delay?
- ¿Qué aplicaciones prácticas se te ocurren para el control básico del servomotor?

### Actividad 2: Control del Servomotor con Monitor Serial
En esta actividad, los estudiantes moverán el servomotor a un ángulo específico ingresado desde el Monitor Serial.

#### Instrucciones:
1. Carga el código de control del servomotor por Monitor Serial desde [`codigo_servomotor_serial.ino`](Codigo/codigo_servomotor_serial.ino).
2. Ingresa un ángulo entre 0 y 180 grados en el Monitor Serial.
3. Observa cómo el servomotor se mueve al ángulo especificado.

#### Preguntas de Análisis:
- ¿Qué ocurre si se ingresa un valor fuera del rango de 0 a 180 grados?
- ¿Cómo podrías usar este tipo de control en un sistema de automatización?

## 7. Análisis de Resultados
Los estudiantes deben analizar los resultados obtenidos en cada actividad y reflexionar sobre cómo varía el comportamiento del servomotor al controlar su ángulo y su tiempo de respuesta.

- ¿Qué factores influyen en la precisión del movimiento del servomotor?
- ¿Cómo podrías utilizar este control en proyectos más complejos de robótica?

## 8. Preguntas de Reflexión o Evaluación
1. ¿Qué aprendiste sobre el control del servomotor SG90?
2. ¿Cómo podrías mejorar la precisión o la velocidad del movimiento del servomotor?
3. ¿En qué proyectos podrías implementar el control de un servomotor en aplicaciones IoT?

## 9. Bibliografía y Recursos
- [Documentación oficial de Arduino](https://www.arduino.cc/reference/en/)
