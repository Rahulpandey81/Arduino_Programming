int val;
int RelayPin = 13;
void setup() {
  pinMode(RelayPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
val=Serial.read();
  if(val=='1'){
    digitalWrite(RelayPin,HIGH);
  }
  else if (val=='0'){
    digitalWrite(RelayPin,LOW);
  }

}
