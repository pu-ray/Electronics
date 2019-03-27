int LEDGREEN=4;
int LEDRED=6;

void setup() {
  Serial.begin(9600);
  pinMode (LEDGREEN,OUTPUT);
  pinMode (LEDRED,OUTPUT);
  Serial.print("This is my number 1 program");
  Serial.println(" ");

}

void loop() {
  
  Serial.print("blink # 1 is RED");
  Serial.println(" ");
  
  digitalWrite(LEDRED,HIGH);
  delay(1000);

  digitalWrite(LEDRED,LOW);
  delay(1000);

  
  
  
 Serial.print("blink # 2 is GREEN");
 Serial.println(" ");
  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);

 digitalWrite(LEDGREEN,HIGH);
 delay(1000);
 digitalWrite(LEDGREEN,LOW);
 delay(1000);
 
 Serial.print("blink # 3 is RED");
 Serial.println(" ");
 digitalWrite(LEDRED,HIGH);
 delay(1000);
 digitalWrite(LEDRED,LOW);
 delay(1000);

 digitalWrite(LEDRED,HIGH);
 delay(1000);
 digitalWrite(LEDRED,LOW);
 delay(1000);

 digitalWrite(LEDRED,HIGH);
 delay(1000);
 digitalWrite(LEDGREEN,LOW);
 delay(1000);
 Serial.println(" ");


}
