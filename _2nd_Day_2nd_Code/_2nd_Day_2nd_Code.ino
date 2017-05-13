void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);


}

void loop() {
  //char a;
  while(Serial.available()>0)
  {
    char a=Serial.read();
    Serial.println(a);
  }

}
