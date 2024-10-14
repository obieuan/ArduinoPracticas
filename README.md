
# Repositorio de Prácticas de Arduino

Este repositorio contiene una colección de prácticas diseñadas para enseñar a los estudiantes a trabajar con diversos sensores, actuadores y módulos en Arduino. Cada carpeta en el repositorio corresponde a un dispositivo específico, como sensores de temperatura, motores, pantallas LCD, y módulos de comunicación, entre otros.

## Estructura del Repositorio

Cada dispositivo tiene su propia carpeta que sigue una estructura estándar para organizar el código, diagramas, documentación y las instrucciones de la práctica. A continuación se describe la estructura general de cada carpeta:

```
/Dispositivo
│
├── /Codigo
│   └── Archivos .ino para la programación de Arduino.
│
├── /Diagrama
│   └── Imágenes o esquemas que muestran las conexiones o diagramas relevantes.
│
├── /Documentos
│   └── Documentos PDF u otros archivos adicionales relevantes a la práctica.
│
└── Instrucciones.md
    └── Archivo en formato Markdown que contiene la descripción detallada de la práctica, 
        objetivos, materiales, instrucciones paso a paso, preguntas de análisis y conclusiones.
```

## Lista de Prácticas

El repositorio incluye las siguientes prácticas:

1. **Bluetooth HC05**: Comunicación inalámbrica con un dispositivo móvil mediante el módulo Bluetooth HC05.
2. **DHT11**: Medición de temperatura y humedad utilizando el sensor DHT11.
3. **Encoder FC-03**: Uso de un encoder para medir la rotación y velocidad angular.
4. **HC-SR04**: Medición de distancias utilizando el sensor de ultrasonido HC-SR04.
5. **KY-022**: Control de dispositivos mediante señales infrarrojas.
6. **LDR**: Medición de intensidad lumínica con un sensor LDR.
7. **LM35**: Medición de temperatura utilizando el sensor LM35.
8. **Motor a pasos**: Control de un motor a pasos utilizando el driver ULN2003.
9. **Pantalla LCD**: Mostrar información en una pantalla LCD controlada por Arduino.
10. **Servo SG90**: Control de un servomotor utilizando señales PWM.

Cada práctica está diseñada para que los estudiantes puedan seguir instrucciones claras y completas, desde las conexiones de los componentes hasta la programación en Arduino.

## Uso del Repositorio

1. Clona este repositorio en tu máquina local:
   ```
   git clone https://github.com/usuario/ArduinoPracticas.git
   ```

2. Navega a la carpeta del dispositivo con el que vas a trabajar:
   ```
   cd LDR
   ```

3. Abre el archivo `Instrucciones.md` en tu editor de preferencia para seguir los pasos de la práctica.

4. Carga el código desde la carpeta `/Codigo` en el Arduino IDE y sube el programa a tu placa.

## Contribuciones

Si deseas mejorar este repositorio o agregar nuevas prácticas, no dudes en hacer un fork y enviar un pull request. Agradecemos tus contribuciones.

## Contacto

Si tienes alguna pregunta o sugerencia, puedes contactarme en [obieuan@gmail.com].
