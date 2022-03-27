int pin = 1;
void setup() {
  while(pin<9){
    pinMode(pin, OUTPUT);
    pin++;
  }
}

// NUMERO 0 = 11111100 = 252
// NUMERO 1 = 01100000 = 96
// NUMERO 2 = 11011010 = 218
// NUMERO 3 = 11110010 = 242
// NUMERO 4 = 01100110 = 102
// NUMERO 5 = 10110110 = 182
// NUMERO 6 = 10111110 = 190
// NUMERO 7 = 11100000 = 224
// NUMERO 8 = 11111110 = 254
// NUMERO 9 = 11110110 = 246


int led[10] = {252, 96, 218, 242, 102, 182, 190, 224, 254, 246};
void loop() {

  for(int i = 0; i<10; i++){
    PORTD = led[i];
    delay(3000);
  }
  
}