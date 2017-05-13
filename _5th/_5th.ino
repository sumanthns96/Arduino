#include <SoftwaremySerial.h>
SoftwareSerial mySerial(11,10);
#define IP 192.168.43.27
#define PASS pappusucks

void setup() {
  
 mySerial.begin(115200);
}

void loop() {
  
 mySerial.println("AT");                               
 delay(1000);
 if(Serial.find("OK");
 
mySerial.println("AT+RST");
 delay(1000);
 mySerial.println("AT+GMR");
 delay(1000);
 mySerial.println("AT+CWLAP");
 delay(1000);
 mySerial.println("AT+CWJAP?");
 delay(1000);
 mySerial.println("AT+CWJAP=\"Enigma\",\"pappusucks\"");
 delay(1000);
mySerial.println("AT");
 delay(1000);
 mySerial.println("AT+RST");
 delay(1000);
 mySerial.println("AT+GMR");
 delay(1000);
 gtt
exit(1);
}
