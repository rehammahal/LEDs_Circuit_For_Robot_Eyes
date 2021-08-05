void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(5); // Wait for 20 millisecond(s)
  digitalWrite(11, LOW);
  delay(5); // Wait for 20 millisecond(s)
}