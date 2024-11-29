#include <Servo.h>
int sen;
Servo myservo;    
void setup() 
{
  pinMode(A0,INPUT);
  myservo.attach(9); 
}

void loop() 
{
  sen=digitalRead(A0);
  if(sen==1)
  {
    myservo.write(0);            
  }
  else
  {
    myservo.write(180);            
  }
}
