int sen;
void setup()
{
 pinMode(A0,INPUT);
 pinMode(13,OUTPUT);

}

void loop() 
{
 sen = digitalRead(A0);
 if(sen==0)
 {
  digitalWrite(13,LOW);
 }
 else
 {
  digitalWrite(13,HIGH);
 }

}
