
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int soilSensor = A0;
const int pumpPin = 7;
int dryValue = 600;
void setup() {
  pinMode(pumpPin, OUTPUT);
  pinMode(soilSensor,INPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Irrigation Sys");
  delay(2000);
  lcd.clear();
}
void loop() {
  int moisture = analogRead(soilSensor);
  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  if (moisture > dryValue){
    digitalWrite(pumpPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Pump:OFF");
  } else {
    digitalWrite(pumpPin,HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Pump:ON");
  }
  delay(1000);
}
