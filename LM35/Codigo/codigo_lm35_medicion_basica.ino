 
// Medición básica de temperatura con el sensor LM35
const int lm35Pin = A0; // Pin donde está conectado el LM35

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorAnalogico = analogRead(lm35Pin); // Leer el valor analógico del sensor
  float voltaje = valorAnalogico * (5.0 / 1023.0); // Convertir el valor a voltaje
  float temperatura = voltaje * 100.0; // Convertir voltaje a grados Celsius

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  delay(1000); // Esperar entre mediciones
}
