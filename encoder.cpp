const int sensorPin = 2;  // Pin del sensor FC-03
volatile int pulseCount = 0;  // Contador de pulsos
unsigned long lastTime = 0;   // Último tiempo de muestreo
unsigned long sampleTime = 1000;  // Tiempo de muestreo (1 segundo)
int numRanuras = 20;  // Número de ranuras en el disco

void setup() {
  pinMode(sensorPin, INPUT);  // Configurar el pin del sensor como entrada
  attachInterrupt(digitalPinToInterrupt(sensorPin), countPulses, FALLING);  // Configurar interrupción
  Serial.begin(9600);  // Inicializar el monitor serial
}

void loop() {
  unsigned long currentTime = millis();
  if (currentTime - lastTime >= sampleTime) {
    // Calcular RPM
    int rpm = (pulseCount * 60) / numRanuras;
    Serial.print("RPM: ");
    Serial.println(rpm);
    pulseCount = 0;  // Reiniciar contador de pulsos
    lastTime = currentTime;  // Actualizar tiempo de muestreo
  }
}

void countPulses() {
  pulseCount++;  // Incrementar contador cada vez que el sensor detecta un pulso
}
