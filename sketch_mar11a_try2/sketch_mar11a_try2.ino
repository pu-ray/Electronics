int LEDGREEN=4;
int LEDRED=6;

void setup() {
  Serial.begin(9600);
  pinMode (LEDGREEN,OUTPUT);
  pinMode (LEDRED,OUTPUT);
  Serial.print("This is my number 1 program");
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LEDRED,HIGH);
  delay(1000);

  digitalWrite(LEDRED,LOW);
  delay(1000);

  Serial.println("blink # 1 is RED");

  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);

 digitalWrite(LEDGREEN,HIGH);
 delay(1000);
 digitalWrite(LEDGREEN,LOW);
 delay(1000);

 Serial.println("blink # 2 is GREEN");

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


 Serial.println("blink # 3 is RED");

 
  // put your main code here, to run repeatedly:

}
