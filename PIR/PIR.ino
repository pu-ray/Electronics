int PIR = 6;
int ledred = 3;
int ReadValue;

void setup() {
  pinMode(PIR,INPUT);
   pinMode(ledred,OUTPUT);
  }

void loop() {
  ReadValue = digitalRead(PIR);
  if(ReadValue==HIGH)
  {digitalWrite(ledred,HIGH);
  
  }
   else{
    digitalWrite(ledred,LOW);
   }
   }

