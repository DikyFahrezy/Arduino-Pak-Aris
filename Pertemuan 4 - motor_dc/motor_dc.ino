int i;
  
void setup() {
 pinMode(8 ,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop() {
  for (int i=0;i<=255;i++){
   digitalWrite(8,LOW);
   analogWrite(11,i);
   delay(100);
  }
}
