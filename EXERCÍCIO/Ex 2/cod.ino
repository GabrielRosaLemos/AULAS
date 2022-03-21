// C++code
//
void setup()
{
  pinMode(13,OUTPUT); // LED VERMELHO
  pinMode(12,OUTPUT); // LED AZUL
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(5000);
  digitalWrite(12, LOW);
  delay(2000);
}
