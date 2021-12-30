int red = 12; // pin rosso
int green = 11; // pin verde
int blue = 10; // pin blu

void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop(){
  rgb(0, 195, 255);
  delay(100);
  rgb(51, 0, 255);
  delay(100);
  rgb(191, 0, 255);
  delay(100);
  rgb(255, 0, 0);
  delay(100);
  rgb(0, 255, 26);
  delay(100);
  rgb(255, 208, 0);
  delay(100);
  rgb(255, 94, 0);
  delay(100);
  rgb(0, 34, 255);
  delay(100);
  rgb(255, 0, 174);
  delay(100);
}

void rgb(int rosso, int verde, int blu){ // per facilitare l'accensione del led e per evitare di riscrivere di nuovo
  analogWrite(red, rosso);
  analogWrite(green, verde);
  analogWrite(blue, blu);
}