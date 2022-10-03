int a=0;
int b=0;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  Serial.print("Angka Pembacaan =");
  digitalWrite(8,LOW);
  a = analogRead(A0);
  b = (a*255)/1023;
  analogWrite(11,b);
  Serial.println(b);
  delay(500);
}
