int foto;
int fotoscala;
int led = 0;
int i = 0;
/*DIGIT
G = 5
F = 4
A = 2
B = 3
E = 6
D = 7
C = 1
DP = 0

01011110 = 0
0001010 = 1
11101100 = 2*/

// 0 = 222
// 1 = 10
// 2 = 236
// 3 = 174
// 4 = 58
// 5 = 182
// 6 = 246
// 7 = 14
// 8 = 254
// 9 = 62

int numeri[10] = {222, 10, 236, 174, 58, 182, 246, 14, 254, 62};

void setup() {
  while(led<=7){
    pinMode(led, OUTPUT);
    led++;
  }
  pinMode(8, INPUT); // pulsante 1
  pinMode(9, INPUT); // pulsante 2
  //pinMode(A0, INPUT); // fotoresistore con potenziometro (10k)
  pinMode(A5, OUTPUT); // led
}

void loop() {
/*   foto = analogRead(A0);
  fotoscala = map (foto, 0, 1024, 0, 255); */
/*   for(int i = 0; i < 10; i++){
    PORTD = numeri[i];
    delay(1000);
  } */
  if(digitalRead(8)==1){
    PORTD = numeri[i];
    i++;
    PORTD = numeri[i];
    while(digitalRead(8)==1);
  }
    if(digitalRead(9)==1){
    PORTD = numeri[i];
    i--;
    PORTD = numeri[i];
    while(digitalRead(9)==1);
  }
  if(i==9)
    i=1;
  if(i==0)
    i=1;
    PORTD = numeri[i];
}
//by chubs e mich24 