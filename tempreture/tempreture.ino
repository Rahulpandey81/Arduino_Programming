#include <dht.h>
dht DHT;
#define DHT11_PIN 7
void setup()
{
  Serial.begin(9600);
 pinMode(11,OUTPUT);
  Serial.println("welcome to TechPonder Humidty and temprature Detecor");
  
}

void loop()
{
  int chk =DHT.read11(DHT11_PIN);
  Serial.println("humidity");
  Serial.println(DHT.humidity,1);
  Serial.println("Temparature");
  Serial.println(DHT.temperature,1);
  float temp=DHT.temperature;
  delay(1000);
  if(temp>25)
  {
  digitalWrite(11,HIGH);
  
  
  }
}
