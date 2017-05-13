int i = 8;
int x = 0;
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop()
{

  for (i = 8; i < 12; i++)
  {
    digitalWrite(i, HIGH);
    delay(20
          0);
    digitalWrite(i, LOW);
    delay(20);

  }
}



