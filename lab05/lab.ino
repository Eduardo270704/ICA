void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, INPUT);
}
 
void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  if (digitalRead(7) == 1) {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(3000); // Wait for 2000 millisecond(s)
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
  }
}