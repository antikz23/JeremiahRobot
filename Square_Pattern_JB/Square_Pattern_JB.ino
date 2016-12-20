
#define RIGHTA 7
#define RIGHTB 8
#define LEFTA 9
#define LEFTB 10

void robot()
{
  digitalWrite(RIGHTA, HIGH);
  digitalWrite(RIGHTB, LOW);
  digitalWrite(LEFTA, HIGH);
  digitalWrite(LEFTB, LOW);
}
void reverse()
{
  digitalWrite(RIGHTA, HIGH);
  digitalWrite(RIGHTB, HIGH);
  digitalWrite(LEFTA, HIGH);
  digitalWrite(LEFTB, LOW);
}
void setup()
{
  pinMode(RIGHTA, OUTPUT);
  pinMode(RIGHTB, OUTPUT);
  pinMode(LEFTA, OUTPUT);
  pinMode(LEFTB, OUTPUT);
}
void loop()
{
  robot();
  delay(3000);
  reverse();
  delay(1500);
}
