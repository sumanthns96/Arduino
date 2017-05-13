void setup() {
 
pinMode(4,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);

}
