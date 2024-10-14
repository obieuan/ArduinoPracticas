
#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600);
  Serial.println("Esperando conexión...");
}

void loop() {
  if (Bluetooth.available()) {
    String mensaje = Bluetooth.readString();  // Leer mensaje recibido
    Serial.print("Mensaje recibido: ");
    Serial.println(mensaje);

    if (mensaje == "ON") {
      digitalWrite(13, HIGH);  // Encender LED
      Serial.println("LED encendido");
    } else if (mensaje == "OFF") {
      digitalWrite(13, LOW);  // Apagar LED
      Serial.println("LED apagado");
    }
  }
}
