int pot;
void setup() 
{
  Serial.begin(9600);
  pinMode(3,INPUT);

}

void loop() 
{
 pot=analogRead(3);
 Serial.println(pot);
}
