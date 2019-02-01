const int trigPin=9;
const int echoPin=10;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  pinMode(5,OUTPUT);
   pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=duration*0.034/2;
Serial.println("Distance:");
Serial.println(distance);
delay(1000);
if(distance<=15){
  digitalWrite(5,HIGH);
  
  digitalWrite(7,HIGH);
  delay(200);
  
}
else
{
  digitalWrite(5,LOW);
   digitalWrite(7,LOW);
  delay(200);
}


}
