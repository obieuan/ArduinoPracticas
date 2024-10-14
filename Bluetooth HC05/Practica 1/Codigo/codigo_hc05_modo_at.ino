
#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(10, 11); // RX, TX

void setup() {
  Serial.begin(38400);  // Velocidad de comandos AT
  Bluetooth.begin(38400);
  Serial.println("En modo AT. Esperando comandos AT...");
}

void loop() {
  if (Serial.available()) {
    Bluetooth.write(Serial.read());
  }
  if (Bluetooth.available()) {
    Serial.write(Bluetooth.read());
  }
}
