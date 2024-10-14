 
// Promediar lecturas de temperatura con el sensor LM35
const int lm35Pin = A0; // Pin donde está conectado el LM35
#define NUM_LECTURAS 10 // Número de lecturas para promediar

void setup() {
  Serial.begin(9600);
}

void loop() {
  float sumaTemperaturas = 0;

  for (int i = 0; i < NUM_LECTURAS; i++) {
    int valorAnalogico = analogRead(lm35Pin); // Leer el valor analógico del sensor
    float voltaje = valorAnalogico * (5.0 / 1023.0); // Convertir el valor a voltaje
    float temperatura = voltaje * 100.0; // Convertir voltaje a grados Celsius

    sumaTemperaturas += temperatura;
    delay(500);  // Esperar entre lecturas
  }

  // Calcular el promedio
  float promedioTemperatura = sumaTemperaturas / NUM_LECTURAS;
  Serial.print("Promedio de temperatura: ");
  Serial.print(promedioTemperatura);
  Serial.println(" °C");

  delay(2000); // Pausa entre promedios
}
