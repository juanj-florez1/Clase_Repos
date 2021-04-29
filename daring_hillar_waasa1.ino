int pinLED = 2;

void setup()
{
  pinMode(pinLED, OUTPUT);
  
  digitalWrite(pinLED,1);
}

void loop()
{
  digitalWrite(pinLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pinLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}