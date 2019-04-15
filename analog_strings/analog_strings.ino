int pinpot=A0;
int redled= 10;
int Readvalue;
int Brightness;
int Writevalue;
float voltage;

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
 Serial.print("tpinvalue");
  Serial.print(Readvalue);
  Serial.print(" ");
  Serial.print("mapped values");
  Serial.print(" " );
  Serial.print(Writevalue);
 Serial.print(" " );
 Serial.print("Write value");
  Serial.print(" ");
  Serial.println(voltage);
  delay(1000);
  // put your main code here, to run repeatedly:

}
