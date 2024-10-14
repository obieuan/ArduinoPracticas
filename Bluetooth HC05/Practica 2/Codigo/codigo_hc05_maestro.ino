
#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600);
  Serial.println("Conectando al esclavo...");
}

void loop() {
  if (Serial.available()) {
    String comando = Serial.readString();  // Leer comando desde el Monitor Serial
    Bluetooth.println(comando);  // Enviar comando al esclavo
    Serial.print("Comando enviado: ");
    Serial.println(comando);
  }
}
