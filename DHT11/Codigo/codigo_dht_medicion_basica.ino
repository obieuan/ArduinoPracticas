
// Medición básica de temperatura y humedad con DHT11/DHT22
#include "DHT.h"

#define DHTPIN 2     // Pin donde está conectado el sensor
#define DHTTYPE DHT11   // Cambiar a DHT22 si es necesario

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Esperar entre lecturas
  delay(2000);

  // Leer la humedad
  float humedad = dht.readHumidity();
  // Leer la temperatura en Celsius
  float temperatura = dht.readTemperature();

  // Verificar si las lecturas son válidas
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer del sensor DHT");
    return;
  }

  // Mostrar resultados en el Monitor Serial
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print(" %	");
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" *C");
}
