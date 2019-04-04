#include <IRremote.h>
IRsend irsend;
int val;
void setup()
{
 Serial.begin(9600);
}       
void loop() 
{ val=Serial.read();
    //for(int i=1;i<50;i++)
    if(val=='1'){ 
     irsend.sendSony(PANASONIC,4294967295);
     Serial.println("Transfering Signal");
     delay(50);
   }
}
