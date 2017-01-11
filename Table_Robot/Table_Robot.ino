
int x;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  x = digitalRead (11);
  if(x == 1)
  {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  else
  {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
}

