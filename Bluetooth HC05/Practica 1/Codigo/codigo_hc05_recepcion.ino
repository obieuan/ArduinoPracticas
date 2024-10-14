
#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600); // Velocidad predeterminada del HC-05
  Serial.println("Esperando datos por Bluetooth...");
}

void loop() {
  if (Bluetooth.available()) {
    char dato = Bluetooth.read();
    Serial.print("Dato recibido: ");
    Serial.println(dato);
  }
}
