int deger = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  //analogRead() fonksiyonu 0-1024 arasi deger doner
  deger = analogRead(A0);
  Serial.println(deger);
  delay(10); 
}
