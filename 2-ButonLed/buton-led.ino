#define Buton 2
#define Led 3

int buton_durumu = 0;

void setup() {
  pinMode(Buton, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  buton_durumu = digitalRead(Buton);
  if(buton_durumu == 1)
    digitalWrite(Led,HIGH);
  else
    digitalWrite(Led,LOW);
}
