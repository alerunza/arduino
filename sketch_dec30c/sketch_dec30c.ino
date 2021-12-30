int led = 1;
int sensore = 7;
//int analogicopin = A0;
int soglia = 600;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sensore, INPUT);

}

void loop() {
  int suono = analogRead(sensore);

  if(suono>=soglia){
    digitalWrite(led, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(led, LOW);
  }

  delay(50);

}
