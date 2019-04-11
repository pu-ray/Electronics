int pinpot=A0;
int redled=10;
int Readvalue;
float Writevalue;
float voltage;
void setup() {
  pinMode(pinpot,INPUT);
  pinMode(redled,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  Readvalue=analogRead(pinpot); //read potentiometer
  Writevalue=(255./1023)*Readvalue; //mappedvalue
  voltage=(5./1023)*Readvalue; // scale
  analogWrite(Readvalue,Writevalue); // write led at a varying brightness
  Serial.print("tpinvalue"); // read from specific led
  Serial.print(Readvalue);
  Serial.print(" ");
  Serial.print("mapped values");
  Serial.print(" ");
  Serial.print("Writevalue");
  Serial.print(" ");
  Serial.print("Write value");
  Serial.print(" ");
  Serial.println(voltage);
  digitalWrite(redled,HIGH); //on
  delay(Readvalue); // determine value
  digitalWrite(redled,LOW); //off
  delay(Readvalue);
  
  // put your main code here, to run repeatedly:

}
