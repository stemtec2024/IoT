int sen;
void setup() 
{
Serial.begin(9600);
pinMode(A0,INPUT);

}

void loop() 
{
 sen=digitalRead(A0);
 Serial.println(sen);
}
