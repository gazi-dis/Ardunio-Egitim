int ledler[] = { 2,3,4,5,6,7,8,9 };

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledler[i], OUTPUT); 
  }
}
void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledler[i], HIGH);
    delay(50);
    digitalWrite(ledler[i], LOW);
  } 
  for (int j = 7; j > 0; j--) {
    digitalWrite(ledler[j], HIGH);
    delay(50);
    digitalWrite(ledler[j], LOW);
  } 
} 
