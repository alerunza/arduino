int red = 12; // pin rosso
int green = 11; // pin verde
int blue = 10; // pin blu
int red2 = 9; // pin rosso
int green2 = 8; // pin verde
int blue2 = 7; // pin blu

int pulsante1 = 2;
int pulsante2 = 3;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(pulsante1, INPUT); //pulsante 1
  pinMode(pulsante2, INPUT); //pulsante 2
}

void loop(){
  if(digitalRead(pulsante1)==HIGH){
    rgb(0, 174, 255); // vittoria puls. 1
    rgb2(255, 0, 0); // sconfitta puls. 2
  }

  rgb(0, 0, 0);
  rgb2(0, 0, 0);

  if(digitalRead(pulsante2)==HIGH){
    rgb2(0, 174, 255); // vittoria puls. 2
    rgb(255, 0, 0); // sconfitta puls. 1
  }
  
  rgb(0, 0, 0);
  rgb2(0, 0, 0);
}

void rgb(int rosso, int verde, int blu){ // per facilitare l'accensione del led e per evitare di riscrivere di nuovo // 1° led rgb
  analogWrite(red, rosso);
  analogWrite(green, verde);
  analogWrite(blue, blu);
}
void rgb2(int rosso, int verde, int blu){ // 2° led rgb
  analogWrite(red2, rosso);
  analogWrite(green2, verde);
  analogWrite(blue2, blu);
}