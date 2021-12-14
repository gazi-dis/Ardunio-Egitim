void setup()
{
  pinMode(2, OUTPUT); //2.pini hazirla
}

void loop()
{
  digitalWrite(2, HIGH); //2.pini yak
  delay(1000); //1 saniye bekle
  digitalWrite(2, LOW); //2.pini sondur
  delay(1000); //1 saniye bekle
}
