 
#include <IRremote.h>

const int receiverPin = 11; // Pin donde está conectado el receptor IR
IRrecv irrecv(receiverPin);
decode_results resultados;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Iniciar receptor IR
}

void loop() {
  if (irrecv.decode(&resultados)) {
    Serial.print("Código recibido: ");
    Serial.println(resultados.value, HEX);
    irrecv.resume(); // Recibir el próximo valor
  }
}
