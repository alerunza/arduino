int ritardo = 0;
int nullo = 0;
int led = 1;
int contatore = 1;
void setup(){
  while(led <= 8){
    pinMode(led, OUTPUT); // 8 led
    led++;
  }
  pinMode(9, INPUT); // pulsante
 }
 
void loop(){

  //if(digitalRead(2)==1){
    //for(int i = 0; )

    while(contatore <= 8 && ritardo < 1000 ){
      digitalWrite(contatore, HIGH);
      delay(ritardo);
      digitalWrite(contatore, LOW);
      delay(ritardo);
      ritardo+=10;
      contatore++;
    }
  //}
}
