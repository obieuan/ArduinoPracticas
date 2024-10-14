
// Promediar lecturas de luz con LDR (fotoresistor)
const int ldrPin = A0; // Pin donde está conectado el LDR
#define NUM_LECTURAS 10 // Número de lecturas para promediar

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sumaLuz = 0;
  for (int i = 0; i < NUM_LECTURAS; i++) {
    sumaLuz += analogRead(ldrPin);
    delay(500);  // Esperar entre lecturas
  }
  
  // Calcular el promedio
  int promedioLuz = sumaLuz / NUM_LECTURAS;
  Serial.print("Promedio de luz: ");
  Serial.println(promedioLuz);
  delay(2000); // Pausa entre promedios
}
