#include<SoftwareSerial.h>
SoftwareSerial mySerial(10,11);
void setup() {
mySerial.begin(9600);
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  while(Serial.available()>0)
  {
      String a=Serial.readString();
      Serial.println(a);
      
  }

}
