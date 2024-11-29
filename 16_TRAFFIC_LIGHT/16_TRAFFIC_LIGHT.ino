#define g1 10
#define r1 11
#define y1 12
#define g2 10
#define r2 9
#define y2 8

void setup() 
{
 pinMode(g1,OUTPUT);
 pinMode(r1,OUTPUT);
 pinMode(y1,OUTPUT);
 pinMode(g2,OUTPUT);
 pinMode(r2,OUTPUT);
 pinMode(y2,OUTPUT);
}

void loop() 
{
 digitalWrite(g1,HIGH);
 digitalWrite(y1,LOW);
 digitalWrite(r1,LOW);
 digitalWrite(g2,LOW);
 digitalWrite(y2,LOW);
 digitalWrite(r2,HIGH);
 delay(10000);
 digitalWrite(g1,LOW);
 digitalWrite(y1,HIGH);
 digitalWrite(r1,LOW);
 digitalWrite(g2,LOW);
 digitalWrite(y2,LOW);
 digitalWrite(r2,HIGH);
 delay(3000);
 digitalWrite(g1,LOW);
 digitalWrite(y1,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(g2,HIGH);
 digitalWrite(y2,LOW);
 digitalWrite(r2,LOW);
 delay(10000);
 digitalWrite(g1,LOW);
 digitalWrite(y1,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(g2,LOW);
 digitalWrite(y2,HIGH);
 digitalWrite(r2,LOW);
 delay(3000);
 
}
