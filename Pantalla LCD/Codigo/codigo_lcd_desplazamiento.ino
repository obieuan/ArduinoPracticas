
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Dirección I2C de la pantalla LCD

void setup() {
  lcd.begin();  // Iniciar la pantalla LCD
  lcd.backlight();  // Encender retroiluminación
  lcd.setCursor(0, 0);  // Establecer el cursor en la primera línea
  lcd.print("Texto desplazado");  // Mostrar texto
  delay(1000);
}

void loop() {
  lcd.scrollDisplayLeft();  // Desplazar texto hacia la izquierda
  delay(500);  // Esperar 500 ms entre cada desplazamiento
}
