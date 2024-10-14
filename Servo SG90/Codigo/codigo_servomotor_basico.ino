
#include <Servo.h>

Servo miServo;  // Crear objeto para controlar el servomotor
const int pinServo = 11;  // Pin donde está conectado el servomotor

void setup() {
  miServo.attach(pinServo);  // Conectar el servomotor al pin especificado
  Serial.begin(9600);  // Iniciar comunicación serial
}

void loop() {
  // Hacer que el servomotor gire desde 0 hasta 180 grados
  for (int angulo = 0; angulo <= 180; angulo++) {
    miServo.write(angulo);  // Establecer el ángulo
    Serial.print("Ángulo: ");
    Serial.println(angulo);
    delay(15);  // Esperar 15 ms para que el servo se mueva a la posición
  }
  
  // Hacer que el servomotor gire desde 180 hasta 0 grados
  for (int angulo = 180; angulo >= 0; angulo--) {
    miServo.write(angulo);  // Establecer el ángulo
    Serial.print("Ángulo: ");
    Serial.println(angulo);
    delay(15);  // Esperar 15 ms para que el servo se mueva a la posición
  }
}
