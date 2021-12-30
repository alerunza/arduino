void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(9, INPUT); // pulsante 1
  pinMode(10, INPUT); // pulsante 2
}

void loop() {
  if(digitalRead(9)==HIGH){
    digitalWrite(1, HIGH);
  }
  else{
    digitalWrite(1, LOW);
  }
  if(digitalRead(10)==HIGH){
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, LOW);
  }
}
