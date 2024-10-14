
#include <Stepper.h>

const int pasosPorRevolucion = 2048;  // Número de pasos para una rotación completa
Stepper motor(pasosPorRevolucion, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int velocidad;
  
  if (Serial.available()) {
    velocidad = Serial.parseInt();  // Leer la velocidad desde el Monitor Serial
    motor.setSpeed(velocidad);
    Serial.print("Velocidad establecida: ");
    Serial.println(velocidad);
    
    motor.step(pasosPorRevolucion);  // Realizar una rotación completa con la nueva velocidad
    delay(1000);
  }
}
