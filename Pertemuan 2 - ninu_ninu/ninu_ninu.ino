void setup() {
  // put your setup code here, to run once:
pinMode (3,OUTPUT);
pinMode (4,OUTPUT);
pinMode (5,OUTPUT);
pinMode (6,OUTPUT);
pinMode (7,OUTPUT);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
pinMode (11,OUTPUT);
pinMode (12,OUTPUT);
pinMode (13,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (3, HIGH);
digitalWrite (7, HIGH);
digitalWrite (11,HIGH);
delay(100);
digitalWrite (3, LOW);
digitalWrite (7, LOW);
digitalWrite (11,LOW);
delay(50);
digitalWrite (4, HIGH);
digitalWrite (8, HIGH);
digitalWrite (12,HIGH);
delay(100);
digitalWrite (4, LOW);
digitalWrite (8, LOW);
digitalWrite (12,LOW);
delay(50);

}
