int c=0;
int val;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600); 
}

void loop()
{
 val=digitalRead(2);
  if(val==1)
  {
    c=c+1;
    if(c==1)
    {
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);  
      digitalWrite(10,LOW);
      delay(500);
    
   }
    else if(c==2)
    {
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);  
      digitalWrite(10,LOW);
      delay(500);
    }
    else if(c==3)
    {
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);  
      digitalWrite(10,LOW);
      delay(500);
    }
    else if(c==4)
    {
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      delay(500);   }
     else if(c==5)
    {
     digitalWrite(13,LOW);
     digitalWrite(12,LOW);
     digitalWrite(11,LOW);
     digitalWrite(10,LOW);
     delay(500);
       c=0;
    }
    }
    }
