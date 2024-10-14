
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Dirección I2C de la pantalla LCD

void setup() {
  lcd.begin();  // Iniciar la pantalla LCD
  lcd.backlight();  // Encender retroiluminación
  lcd.setCursor(0, 0);  // Establecer el cursor en la primera línea
  lcd.print("Hola, Mundo");  // Mostrar texto
}

void loop() {
  // No se necesita código adicional para esta actividad
}
