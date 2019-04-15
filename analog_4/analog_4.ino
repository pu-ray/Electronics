int pinpot= A0;
int ledred = 5;
int readvalue;
int delayled;

void setup() {
  Serial.begin(9600);
  pinMode(pinpot, INPUT);
  pinMode(ledred,OUTPUT);

}

void loop() {
 readvalue = analogRead(pinpot);
 delayled= readvalue;
 analogWrite(ledred,255);
 delayled =(900./1023)* readvalue;
 analogWrite(ledred,0);
 delay(delayled);

}


