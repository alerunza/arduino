void setup() {
  int l = 1; //led
  while(l<=4){
    pinMode(l, OUTPUT);
    l++;
  }
  pinMode(9, INPUT); // pulsante
  pinMode(10, INPUT); // pulsante
}

void loop() {
  
  int l = 4;
  while(l>=0){
  digitalWrite(l, LOW);
  delay(180);
  digitalWrite(l, LOW);
  digitalWrite(l, HIGH);
  delay(180);
  digitalWrite(l, HIGH);
  l--;
  }
  
  
  
  if(digitalRead(10) == HIGH){
  int l = 4;
  while(l>=0){
  digitalWrite(l, LOW);
  delay(100);
  digitalWrite(l, LOW);
  digitalWrite(l, HIGH);
  delay(100);
  digitalWrite(l, HIGH);
  l--;
  }
} 
  if(digitalRead(9) == HIGH){
  int l = 4;
  while(l>=0){
  digitalWrite(l, LOW);
  delay(200);
  digitalWrite(l, LOW);
  digitalWrite(l, HIGH);
  delay(200);
  digitalWrite(l, HIGH);
  l--;
    }
  }
}
