# Práctica de Arduino: Medición de Luz con el Sensor LDR (Fotoresistor)

## 1. Título de la Práctica
Medición de Luz con el Sensor LDR (Fotoresistor)

## 2. Objetivo
Familiarizar a los estudiantes con el uso de un sensor LDR (fotoresistor) para medir la intensidad de luz en su entorno. Los estudiantes realizarán mediciones básicas de luz, calcularán promedios de múltiples lecturas y evaluarán el comportamiento del sensor en diferentes condiciones de iluminación. Esta práctica ayudará a los estudiantes a comprender la integración de sensores de luz en sistemas embebidos y aplicaciones IoT.

## 3. Materiales y Herramientas
- **Componentes físicos:**
  - Arduino UNO o similar.
  - LDR (Fotoresistor).
  - Resistencia de 10kΩ.
  - Protoboard.
  - Cables de conexión.
- **Software:**
  - Arduino IDE.
  - Monitor Serial para visualizar resultados.

## 4. Introducción Teórica
Un sensor LDR (Light Dependent Resistor) es un componente cuyo valor de resistencia varía en función de la cantidad de luz incidente sobre él. A medida que la luz aumenta, su resistencia disminuye, permitiendo la medición de la intensidad de luz mediante un pin analógico de Arduino.

Este tipo de sensor es común en aplicaciones IoT que requieren medir la intensidad lumínica, como sistemas de iluminación automática, estaciones meteorológicas o monitores ambientales.

## 5. Diagrama de Conexiones
- **Conexión del LDR:**
  - Un extremo del LDR va al pin analógico A0 de Arduino.
  - El otro extremo del LDR se conecta a 5V.
  - En paralelo con el LDR, conecta una resistencia de 10kΩ que va a tierra.

![ldr1](Diagrama/ldr1.png) para el esquemático detallado.

## 6. Actividades Prácticas

### Actividad 1: Medición Básica de Luz
En esta actividad, los estudiantes medirán la intensidad de luz en el entorno usando el LDR y observarán cómo cambian las lecturas dependiendo de la cantidad de luz que incide sobre el sensor.

#### Instrucciones:
1. Conecta el sensor según el diagrama.
2. Carga el código de medición básica del sensor desde [`codigo_ldr_medicion_basica.ino`](Codigo/codigo_ldr_medicion_basica.ino).
3. Observa las lecturas del sensor en el Monitor Serial.

#### Preguntas de Análisis:
- ¿Qué valores obtienes en diferentes condiciones de luz (luz ambiente, oscuridad, luz directa)?
- ¿Qué tan rápido cambian las lecturas cuando alteras la cantidad de luz?

### Actividad 2: Promedio de Múltiples Lecturas de Luz
En esta actividad, los estudiantes realizarán múltiples lecturas consecutivas de la intensidad lumínica, calculando un promedio para obtener una medición más estable y precisa.

#### Instrucciones:
1. Carga el código de promedio de lecturas desde [`codigo_ldr_promedio.ino`](Codigo/codigo_ldr_promedio.ino).
2. El código tomará 10 lecturas consecutivas y calculará el promedio de las mismas.
3. Observa los resultados y analiza cómo varían en diferentes condiciones de luz.

#### Preguntas de Análisis:
- ¿Cuál es el promedio de las lecturas de luz en condiciones constantes?
- ¿Qué tan estables son las lecturas cuando la luz se mantiene constante?

### Actividad 3: Evaluación en Diferentes Condiciones de Luz
Los estudiantes deberán colocar el sensor en distintos entornos de luz, tanto interiores como exteriores, para observar cómo varían las lecturas de luz.

#### Instrucciones:
1. Carga nuevamente el código de medición básica desde [`codigo_ldr_medicion_basica.ino`](Codigo/codigo_ldr_medicion_basica.ino).
2. Coloca el sensor en diferentes condiciones de luz (por ejemplo, en el exterior, en una habitación con luz tenue o con luz directa).
3. Observa cómo cambian las lecturas.

#### Preguntas de Análisis:
- ¿Cómo varían las lecturas en diferentes entornos?
- ¿Qué tan sensibles son las lecturas del sensor a pequeños cambios de luz?

## 7. Análisis de Resultados
Los estudiantes deben analizar los resultados obtenidos en cada actividad y reflexionar sobre el comportamiento del sensor LDR en diferentes situaciones de iluminación.

- ¿Qué factores afectan la precisión de las lecturas de luz?
- ¿Cómo se comporta el sensor en entornos con fluctuaciones rápidas de luz?
- ¿Cómo podrías integrar este sensor en un sistema IoT?

## 8. Preguntas de Reflexión o Evaluación
1. ¿Qué aprendiste sobre el comportamiento del sensor LDR en diferentes condiciones de luz?
2. ¿Cómo podrías mejorar la precisión del sistema en un entorno de IoT?
3. ¿Qué aplicaciones prácticas crees que podrían beneficiarse del uso de este sensor en un contexto de IoT?

## 9. Bibliografía y Recursos
- [Documentación oficial de Arduino](https://www.arduino.cc/reference/en/)
