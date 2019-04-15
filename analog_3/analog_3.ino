int pinpot=A0;
int redled= 10;
int Readvalue;
int Brightness;


String message="pinpot value=";
String message2="Brightness=";


void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(redled,OUTPUT);
 
}

void loop() {
  Readvalue= analogRead(pinpot);
  Serial.print(message);
  Serial.print(Readvalue);
  Serial.print(message2);
  Serial.println( Brightness);
  Brightness =(255./1023)*Readvalue;
  analogWrite(redled,Brightness);
  delay(1000);
  analogWrite(redled,0);
  delay(1000);

}
