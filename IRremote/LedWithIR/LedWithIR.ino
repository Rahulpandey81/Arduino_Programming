
#include <IRremote.h>
int IRpin = 11;
int LED = 13;  
IRrecv irrecv(IRpin);
decode_results results;




void setup()
{
   pinMode(13, OUTPUT);
   Serial.begin(9600);
  irrecv.enableIRIn();    
}
 
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    irrecv.resume(); 
     
  if(results.value== 2775432581)                                      
  {
             digitalWrite(13,HIGH);
  }
  else if(results.value == 3772793023) 
  {
             digitalWrite(13,LOW);
  }
                                }
}
 
 
