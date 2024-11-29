int val;
void setup() 
{
Serial.begin(9600);
pinMode(3,INPUT);

}

void loop() 
{
 val=digitalRead(3);
 Serial.println(val);

}
