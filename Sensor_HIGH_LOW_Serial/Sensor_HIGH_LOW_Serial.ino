int x;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  x = digitalRead (11);
  if(x == 0)
  {
    Serial.println("HIGH");
  }
  else
  {
    Serial.println("LOW");
  }
delay(500);
}

