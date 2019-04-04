int ledpinRed = 6;
int ledpinGreen = 7;
int ledpinBlue = 8;
int relayPin = 13;
int val;
void setup() {

pinMode(ledpinRed,OUTPUT);
pinMode(ledpinGreen,OUTPUT);
pinMode(ledpinBlue,OUTPUT);
pinMode(relayPin,OUTPUT);
Serial.begin(9600);
}
void loop() {
val = Serial.read();
if (val=='1'){
  digitalWrite(relayPin,LOW);
  digitalWrite(ledpinGreen,LOW);
  digitalWrite(ledpinBlue,LOW);
  digitalWrite(ledpinRed,HIGH);
  
}
else if (val=='2'){
  digitalWrite(relayPin,LOW);
  digitalWrite(ledpinRed,LOW);
  digitalWrite(ledpinBlue,LOW);
  digitalWrite(ledpinGreen,HIGH);
}
else if (val=='3'){
  digitalWrite(relayPin,LOW);
  digitalWrite(ledpinRed,LOW);
  digitalWrite(ledpinGreen,LOW);
  digitalWrite(ledpinBlue,HIGH);
}
else if(val=='0'){
  digitalWrite(relayPin,LOW);
  digitalWrite(ledpinRed,LOW);
  digitalWrite(ledpinGreen,LOW);
  digitalWrite(ledpinBlue,LOW);
}
else if(val=='5'){
  digitalWrite(ledpinRed,LOW);
  digitalWrite(ledpinGreen,LOW);
  digitalWrite(ledpinBlue,LOW);
  digitalWrite(relayPin,HIGH);
}

}
