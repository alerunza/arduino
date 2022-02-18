#include <RTClib.h>
#include <SPI.h>
#include <MFRC522.h>
#include <MFRC522Extended.h>
#include <deprecated.h>
#include <require_cpp11.h>
#include <LiquidCrystal_I2C.h>

/* LiquidCrystal lcd(13, 12, 10, 9, 8, 7); */
LiquidCrystal_I2C lcd(0x27, 16, 2);
MFRC522 rfid(10, 9);
RTC_DS3231 rtc;

int red = A1; // pin rosso
int green = A3; // pin verde
int blue = A2; // pin blu

void setup(){
  Serial.begin(9600);
  rtc.begin();
  if(rtc.lostPower()){
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
  lcd.init();
  lcd.backlight();
  SPI.begin();
  rfid.PCD_Init();
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}
void loop(){
  //lcd.setCursor(0, 0);
  //lcd.print("RFID by Runmich");
  DateTime now = rtc.now();
  printDateTime(now);
  delay(1000);

  if ( ! rfid.PICC_IsNewCardPresent()){
    return;
  }
  if ( ! rfid.PICC_ReadCardSerial()){
    return;
  }
  String content= "";
  byte letter;
  for (byte i = 0; i < rfid.uid.size; i++){
    Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(rfid.uid.uidByte[i], HEX);
    content.concat(String(rfid.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(rfid.uid.uidByte[i], HEX));
  }
  content.toUpperCase();
  if(content.substring(1) == "8E 38 53 D3"){
    lcd.setCursor(0, 1);
    lcd.print("Michele Turco");
    rgb(43, 255, 0);
  }
  if(content.substring(1) == "B0 08 F2 25"){
    lcd.setCursor(0, 1);
    lcd.print("Alessandro Runza");
    rgb(43, 255, 0);
  }
  if(content.substring(1) == "34 6B 71 30"){
    lcd.setCursor(0, 0);
    lcd.print("Utente non valido");
    lcd.setCursor(0, 1);
    lcd.print("Gabriele LaPlaca");
    rgb(255, 0, 0);
  }
  if(content.substring(1) != "8E 38 53 D3" and content.substring(1) != "B0 08 F2 25" and content.substring(1) != "34 6B 71 30"){
    lcd.setCursor(0, 0);
    lcd.print("Carta non valida");
    rgb(255, 0, 0);
  }
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.clear();
}
// 8E 38 53 D3 (card blue (turco))
// B0 08 F2 25 (card white (runza))
// 34 6B 71 30 (card white (la placa))

void printDateTime(DateTime dt){
  char data[] = "  DD/MM/YYYY ";
  char tempo[] = "   hh:mm:ss ";

  lcd.setCursor(0, 0);
  lcd.print(dt.toString(data));
  lcd.setCursor(0, 1);
  lcd.print(dt.toString(tempo));
}

void rgb(int rosso, int verde, int blu){ // per facilitare l'accensione del led e per evitare di riscrivere di nuovo
  analogWrite(red, rosso);
  analogWrite(green, verde);
  analogWrite(blue, blu);
}
