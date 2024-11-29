void setup()
{
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  int LED = analogRead(A0);
  LED = map(LED,0,1023,0,255);
  analogWrite(3,LED);
}
