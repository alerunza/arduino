#include <DHT.h>
#include <DHT_U.h>
#include <Adafruit_Sensor.h>
#include <LiquidCrystal_I2C.h>

/* LiquidCrystal lcd(13, 12, 10, 9, 8, 7); */
LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(2, DHT11);

void setup() {
  lcd.init();
  lcd.backlight();
  dht.begin();
}
void loop(){
// dopo tot secondi si cambia il valore di misura, CELSIUS e dopo 3 sec in fahrenheit
int umidita;
int temperatura; 
  umidita = dht.readHumidity();
  temperatura = dht.readTemperature(); // in celsius (nota: Fahrenheit bisogna mettere true tra le parentesi)

  lcd.setCursor(0, 0);
  lcd.print("Hum&Temp Runmich");
  lcd.setCursor(0, 2);
  lcd.print("HT: "); // umidità
  lcd.setCursor(3, 2);
/*   if(umidita>30){
    tone(8, 550);
  }else{
    noTone(8);
  } */
  lcd.print(umidita);
  lcd.setCursor(7, 2);
  lcd.print("TempC: "); // temp celsius
  lcd.setCursor(13, 2);
  lcd.print(temperatura);
  delay(2500);
  lcd.setCursor(7, 2);
  lcd.print("TempF: ");
  lcd.setCursor(13, 2);
  temperatura = dht.readTemperature(true);
  lcd.print(temperatura);
  delay(2500);

}
