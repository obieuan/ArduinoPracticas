
// Medición básica de luz con LDR (fotoresistor)
const int ldrPin = A0; // Pin donde está conectado el LDR

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorLuz = analogRead(ldrPin); // Leer el valor del LDR
  Serial.print("Valor de luz: ");
  Serial.println(valorLuz);
  delay(1000); // Esperar entre mediciones
}
