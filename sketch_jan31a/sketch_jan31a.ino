int i = 1;
int led = 2;
int pulsante = 3;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pulsante, INPUT);
}

void loop() {
/*   if(digitalRead(pulsante)==HIGH){
    i = 1;
    while(digitalRead(pulsante)==HIGH and i==1){
      digitalWrite(led, HIGH);
    }
  }else{
    i = 0;
    while(digitalRead(pulsante)==HIGH and i==0){
      digitalWrite(led, LOW);
    }
  } */
  while(digitalRead(pulsante)==0);
    digitalWrite(led, i);
    i = 1 - i;
  while(digitalRead(pulsante)==1);
}