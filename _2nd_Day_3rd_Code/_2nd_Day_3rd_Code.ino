void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
 if(Serial.println("HeLL"))
  Serial.println("Hello");
  else Serial.println("Hell");
exit(1);
}
