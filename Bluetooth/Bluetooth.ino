int val;
int ledpin=12;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  val=Serial.parseInt();
  
}
Serial.println(val);
if(val==1)
{
  digitalWrite(ledpin,HIGH);
  
}
else
{
  digitalWrite(ledpin,LOW);
}
delay(100);
}
