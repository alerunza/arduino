int led = 1;
void setup() {
  while(led<=4){
    pinMode(led, OUTPUT);
    led++;
  }
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {
  if(digitalRead(10)==1){
    digitalWrite(led, LOW);
    led--;
    while(digitalRead(10)==1);
    digitalWrite(led, HIGH);
  }
  if(digitalRead(11)==1){
    digitalWrite(led, LOW);
    led++;
    while(digitalRead(11)==1);
    digitalWrite(led, HIGH);
  }

}
