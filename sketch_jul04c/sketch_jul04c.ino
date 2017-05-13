int i,j;
 void setup() {
   pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4,INPUT);
   pinMode(7,OUTPUT);
  
}


void loop() 
{
  for(j=0;j<2;j++)
  {
if(digitalRead(4)==HIGH)
 {
    
         for (i = 8; i <= 12; i++)
             {
                    digitalWrite(i, HIGH);
                    delay(200);
                    digitalWrite(i, LOW);
 
               }
     
   }
  }
    

  
 }




 
