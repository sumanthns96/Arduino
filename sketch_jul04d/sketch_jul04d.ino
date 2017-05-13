int x,i,j,k,l,m;
int a[33];

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop() {
    
  for(i=0;i<32;i++)
  {
   L1:x=i/2;
      if(x<2)
      {
              { 
                if(x%2==1)
                     digitalWrite(8,HIGH);
                     
              else  digitalWrite(8,LOW);
      }
      }
      
      else 
      {
   for(i=12;i<10;i--)
    if(i%2==1)
    digitalWrite(i,HIGH);
    else
    digitalWrite(i,LOW);
    goto L1;
  } 
  }
}
