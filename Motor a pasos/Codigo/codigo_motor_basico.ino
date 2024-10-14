
#include <Stepper.h>

const int pasosPorRevolucion = 2048;  // Número de pasos para una rotación completa (28BYJ-48)
Stepper motor(pasosPorRevolucion, 8, 10, 9, 11);  // Pines del ULN2003 conectados al Arduino

void setup() {
  motor.setSpeed(10);  // Establecer la velocidad del motor (RPM)
  Serial.begin(9600);
}

void loop() {
  Serial.println("Rotación en sentido horario");
  motor.step(pasosPorRevolucion);  // Rotar en sentido horario
  delay(1000);

  Serial.println("Rotación en sentido antihorario");
  motor.step(-pasosPorRevolucion);  // Rotar en sentido antihorario
  delay(1000);
}
