
#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(10, 11); // RX, TX
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Bluetooth.begin(9600); // Velocidad predeterminada del HC-05
  Serial.println("Envia 'ON' para encender el LED y 'OFF' para apagarlo.");
}

void loop() {
  if (Bluetooth.available()) {
    String comando = Bluetooth.readString();

    if (comando == "ON") {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED encendido");
    } else if (comando == "OFF") {
      digitalWrite(ledPin, LOW);
      Serial.println("LED apagado");
    } else {
      Serial.println("Comando no reconocido");
    }
  }
}
