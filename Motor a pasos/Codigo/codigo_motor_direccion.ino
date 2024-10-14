
#include <Stepper.h>

const int pasosPorRevolucion = 2048;  // Número de pasos para una rotación completa
Stepper motor(pasosPorRevolucion, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  Serial.println("Envía 'HORA' para rotar en sentido horario o 'ANTI' para sentido antihorario.");
}

void loop() {
  if (Serial.available()) {
    String comando = Serial.readString();
    
    if (comando.indexOf("HORA") >= 0) {
      motor.step(pasosPorRevolucion);  // Rotar en sentido horario
      Serial.println("Rotando en sentido horario");
    } else if (comando.indexOf("ANTI") >= 0) {
      motor.step(-pasosPorRevolucion);  // Rotar en sentido antihorario
      Serial.println("Rotando en sentido antihorario");
    }
  }
}
