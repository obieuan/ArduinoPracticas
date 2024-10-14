
// Medición repetida para analizar la consistencia del sensor
const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;
int numMediciones = 20;
int mediciones[20];

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < numMediciones; i++) {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;

    mediciones[i] = distance;
    delay(100);
  }

  Serial.println("Mediciones repetidas:");
  for (int i = 0; i < numMediciones; i++) {
    Serial.print(mediciones[i]);
    Serial.println(" cm");
  }
  delay(1000);
}
