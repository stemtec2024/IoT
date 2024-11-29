void setup()
{
  pinMode(6, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  tone(6, 396, 100); 
  delay(150); 
  tone(6, 396, 100); 
  delay(300); 
  tone(6, 495, 100); 
  delay(300); 
  tone(6, 495, 100); 
  delay(100); 
  tone(6, 264, 100); 
  delay(300); 
  tone(6, 264, 100); 
  delay(550); 
  tone(6, 495, 100); 
  delay(1000); 
}
