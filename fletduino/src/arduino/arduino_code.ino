const int ledPin = 13; // Pines del LED o relé
const int sensorPin = A0; // Pin del sensor, por ejemplo un sensor de temperatura

void setup() {
    Serial.begin(9600); // Configura la comunicación serial
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW); // Inicia con el LED apagado
}

void loop() {
    int sensorValue = analogRead(sensorPin);
    Serial.print("SENSOR:");
    Serial.println(sensorValue);
    delay(1000);

    if (Serial.available() > 0) {
        String comando = Serial.readStringUntil('\n');
        
        if (comando == "ENCENDER") {
            digitalWrite(ledPin, HIGH);
            Serial.println("LED:Encendido");
        } else if (comando == "APAGAR") {
            digitalWrite(ledPin, LOW);
            Serial.println("LED:Apagado");
        } else if (comando == "ESTADO_LED") {
            if (digitalRead(ledPin) == HIGH) {
                Serial.println("LED:Encendido");
            } else {
                Serial.println("LED:Apagado");
            }
        }
    }
}
