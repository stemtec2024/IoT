int val;
void setup() 
{
 Serial.begin(9600);
 pinMode(3,INPUT);
 pinMode(13,OUTPUT);

}

void loop() 
{
 val=digitalRead(3);
 if(val==1)
 {
  digitalWrite(13,HIGH);
 }
 else
 {
  digitalWrite(13,LOW);
 }

}
