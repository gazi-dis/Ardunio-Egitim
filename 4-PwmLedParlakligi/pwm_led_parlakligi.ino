int led=5;

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  //pwm sinyali 0-255 arası deger alir
  analogWrite(led,0);
  delay(300);
  analogWrite(led,100);
  delay(300);
  analogWrite(led,150);
  delay(300);
  analogWrite(led,200);
  delay(300);
  analogWrite(led,255);
  delay(300);
}
