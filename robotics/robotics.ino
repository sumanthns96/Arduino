#include<SoftwareSerial.h>
SoftwareSerial mySerial(7,8);
int a1=12; 
int a2=11,b1=10,b2=9;
    
void setup() {
  mySerial.begin(9600);
  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
   pinMode(b1,OUTPUT);
pinMode(b2,OUTPUT);
mySerial.begin(9600);
}

void loop() 
{
if(mySerial.available()>0)
{
  char input=mySerial.read();
 //mySerial.println("Hello world");
  if(input=='f')
  {
    forward();
    }
    else if(input=='b')
     {
     backward();
    
     }
     else if(input=='l')
     {
      left();
     }
     else if(input=='r')
     {
      right();
     }
     
  
     else if(input=='s')
       Stop();
    
}
}

void forward()
{
 digitalWrite(a1,LOW);
  digitalWrite(a2,HIGH); 
  digitalWrite(b1,HIGH);
   digitalWrite(b2,LOW);

}
   

void backward()
{
 digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW); 
  digitalWrite(b1,LOW);
   digitalWrite(b2,HIGH);
}

void left()
{
   digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
    digitalWrite(b1,HIGH);
  digitalWrite(b2,LOW); 
}

void right()
{
 digitalWrite(b1,LOW);
  digitalWrite(b2,HIGH); 
  digitalWrite(a1,LOW);
  digitalWrite(a2,HIGH);
}
void Stop()
{
   digitalWrite(a1,LOW);
  digitalWrite(a2,LOW); 
  digitalWrite(b1,LOW);
   digitalWrite(b2,LOW);
}

