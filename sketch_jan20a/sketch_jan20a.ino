int val = 0;
void setup() {

  pinMode(8, INPUT); // pulsante
  pinMode(7, INPUT); // pulsante 2
  pinMode(3, OUTPUT); // pin con la tilde (analogico)


}
void loop() {

  if(digitalRead(8) == HIGH){
    while((val<=255) && (digitalRead(8) == 1)){
      val++;
      analogWrite(3, val);
      delay(100);
    }
  }
  if(digitalRead(7) == HIGH){
    while((val>0) && (digitalRead(7) == 1)){
      val--;
      analogWrite(3, val);
      delay(100);
    }
  }

}
