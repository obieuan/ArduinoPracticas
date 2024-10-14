
#include <IRremote.h>

const int emitterPin = 3; // Pin donde está conectado el emisor IR
IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Aquí se envía una señal grabada (ejemplo: código hexadecimal capturado con el receptor)
  unsigned long codigo = 0x20DF10EF; // Código grabado de un control remoto, reemplazar según grabación
  irsend.sendNEC(codigo, 32); // Enviar código con protocolo NEC
  Serial.println("Código enviado: 0x20DF10EF");
  delay(5000); // Esperar antes de repetir el envío
}
