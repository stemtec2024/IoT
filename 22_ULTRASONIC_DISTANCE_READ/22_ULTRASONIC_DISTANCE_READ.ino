const int trigPin = 9; 
const int echoPin = 8; 
float distance = 0; 
void setup(){
  Serial.begin (9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  
}
void loop(){
  float echoTime; 
  float calculatedDistance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  echoTime = pulseIn(echoPin, HIGH); 
  calculatedDistance = echoTime/58.0; 
  distance = calculatedDistance;
  Serial.print(distance); 
  Serial.println(" cm"); 
  delay(50); 
}
