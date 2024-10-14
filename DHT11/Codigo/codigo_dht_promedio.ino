
// Promediar lecturas de temperatura y humedad con DHT11/DHT22
#include "DHT.h"

#define DHTPIN 2     // Pin donde está conectado el sensor
#define DHTTYPE DHT11   // Cambiar a DHT22 si es necesario
#define NUM_LECTURAS 10 // Número de lecturas para promediar

DHT dht(DHTPIN, DHTTYPE);
float temperaturas[NUM_LECTURAS];
float humedades[NUM_LECTURAS];

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float sumaTemperaturas = 0;
  float sumaHumedades = 0;

  for (int i = 0; i < NUM_LECTURAS; i++) {
    delay(2000);  // Esperar entre lecturas
    humedades[i] = dht.readHumidity();
    temperaturas[i] = dht.readTemperature();
    
    if (isnan(humedades[i]) || isnan(temperaturas[i])) {
      Serial.println("Error al leer del sensor DHT");
      return;
    }
    
    sumaHumedades += humedades[i];
    sumaTemperaturas += temperaturas[i];
  }

  // Calcular el promedio
  float promedioHumedad = sumaHumedades / NUM_LECTURAS;
  float promedioTemperatura = sumaTemperaturas / NUM_LECTURAS;

  // Mostrar resultados en el Monitor Serial
  Serial.print("Promedio Humedad: ");
  Serial.print(promedioHumedad);
  Serial.print(" %	");
  Serial.print("Promedio Temperatura: ");
  Serial.print(promedioTemperatura);
  Serial.println(" *C");
  delay(5000); // Pausa entre promedios
}
