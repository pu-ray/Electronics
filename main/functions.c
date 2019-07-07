#include "functions.h"


void Blink(){
  
 digitalWrite(redled,HIGH);
 delay(1000);
 digitalWrite(redled,LOW);
 delay(1000);
 
 digitalWrite(greenled,HIGH);
 delay(1000);
 digitalWrite(greenled,LOW);
 delay(1000);
 
 digitalWrite(blueled,HIGH);
 delay(1000);
 digitalWrite(redled,LOW);
 delay(1000);
 
}

