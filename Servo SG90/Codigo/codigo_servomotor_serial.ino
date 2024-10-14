
#include <Servo.h>

Servo miServo;  // Crear objeto para controlar el servomotor
const int pinServo = 11;  // Pin donde está conectado el servomotor

void setup() {
  miServo.attach(pinServo);  // Conectar el servomotor al pin especificado
  Serial.begin(9600);  // Iniciar comunicación serial
  Serial.println("Introduce un ángulo (0 a 180 grados):");
}

void loop() {
  if (Serial.available()) {
    int angulo = Serial.parseInt();  // Leer el ángulo desde el monitor serial
    if (angulo >= 0 && angulo <= 180) {
      miServo.write(angulo);  // Mover el servomotor al ángulo especificado
      Serial.print("Moviendo al ángulo: ");
      Serial.println(angulo);
    } else {
      Serial.println("Introduce un ángulo válido entre 0 y 180 grados.");
    }
  }
}
