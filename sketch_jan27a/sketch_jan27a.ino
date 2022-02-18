/* int ritardo = 0;
int nullo = 0;
int led = 3;
int contatore = 3;
void setup(){
  while(led <= 10){
    pinMode(led, OUTPUT); // 8 led
    led++;
  }
  pinMode(11, INPUT); // pulsante
 }
 
void loop(){

  if(digitalRead(11)==1){

    while(contatore <= 10 && ritardo < 1000 ){
      digitalWrite(contatore, HIGH);
      delay(ritardo);
      digitalWrite(contatore, LOW);
      delay(ritardo);
      ritardo+=10;
      contatore++;
    }
  }
} */

int ritardo = 0;
int led = 3;
int contatore = 3;
 
void setup(){
  //Serial.begin(9600);
  while(led <= 10){
  pinMode(led, OUTPUT);
    led++;
  }
  pinMode(11, INPUT);
 }
 
void loop(){
  if(digitalRead(11)==1){
    while(contatore <= 10 && ritardo < 1000){
      digitalWrite(contatore, HIGH);
      delay(ritardo);
      digitalWrite(contatore, LOW);
      delay(ritardo);
      ritardo+=25;
    //Serial.print(ritardo);
      contatore++;
      if(contatore==11){
        contatore = 3;
      }
    }    
   }
}

