#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 10, 9, 8, 7); //12 = E //11 = RS, //

void setup() {

  lcd.begin(16, 2);

}

int s = 0;
float min;
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("ChubsRP");
  lcd.setCursor(0, 1);
  lcd.print(s);
  delay(1000);
  s++;
  lcd.setCursor(6, 1);
  min = s / 60;
  lcd.print(min);

}