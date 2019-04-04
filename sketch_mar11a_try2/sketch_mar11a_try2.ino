int LEDGREEN=4;
int LEDRED=6;
int BlinkRed ;
int BlinkGreen;
int LEDREDon;
int LEDREDoff;

String message1="This is the   LEDGREEN Blink #";
String message2="This is the LEDRED Blink #";

void setup() {
  Serial.begin(9600);
  pinMode (LEDGREEN,OUTPUT);
  pinMode (LEDRED,OUTPUT);
  Serial.print("This is my number 1 program");
  Serial.println(" ");
  

}

void loop() {
   for(int j=1; j<=BLINKRED;j=j+1){
    Serial.println(message1);
    Serial.print(" ");
 Serial.println(j);
 Serial.print(" ") ;
digitalWrite (LEDRED,HIGH);
delay(1000);
digitalWrite (LEDRED,LOW);
delay(1000);
   }
    for(int j=1; j<=BLINKGREEN;j=j+1){
    Serial.println(message2);
    Serial.print(" ");
 Serial.println(j);
 Serial.print(" ") ;
digitalWrite (LEDGREEN,HIGH);
delay(1000);
digitalWrite (LEDGREEN,LOW);
delay(1000);
    }

  
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
