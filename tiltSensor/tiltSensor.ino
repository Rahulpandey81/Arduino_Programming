int tiltPin = 2;     
int ledPin =  13;
int rgbPin1 = 7;
int rgbPin2 = 8; 
int rgbPin3 = 9;
int relayPin = 5; 
int tiltState = 0;

void setup() {  
  pinMode(ledPin, OUTPUT);
  pinMode(rgbPin1,OUTPUT);
  pinMode(rgbPin2,OUTPUT);
  pinMode(rgbPin3,OUTPUT);
  pinMode(relayPin,OUTPUT);   
  pinMode(tiltPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  tiltState = digitalRead(tiltPin);
  if (tiltState == HIGH) {     
    digitalWrite(ledPin, LOW);
    digitalWrite(rgbPin1,LOW);
    digitalWrite(rgbPin2,LOW);
    digitalWrite(rgbPin3,LOW);
    digitalWrite(relayPin,LOW);
    Serial.println("No Responce"); 
    delay(500);
  } 
  else {
    
    digitalWrite(ledPin, HIGH);
    digitalWrite(rgbPin1,HIGH);
    digitalWrite(rgbPin2,HIGH);
    digitalWrite(rgbPin3,HIGH);
    digitalWrite(relayPin,HIGH); 
    Serial.println("Position Changed" );
    delay(500);
   
  }
}
