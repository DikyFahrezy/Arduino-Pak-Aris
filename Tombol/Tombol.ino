int a = 0;
int b = 0;
int matikan = 0;
int Led = 0;

void setup()
{
  pinMode(9, INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
 a = digitalRead(9);
 b = digitalRead(10);
  if (a == 1)
  {Led = 2;}
  if (b == 1)
  {Led = 1;}
 matikan = a + b;
  if (matikan == 2)
  {Led = 0;}
  
if ( Led == 1)
 {
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  }
if ( Led == 2)
 {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
 }
if ( Led == 0)
 {
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
 }
}
