int redled=3;
int blueled=9;
int blinkred;
int blinkblue;
int redon;
int redoff;
int blueon;
int blueoff;
String message1="This is my redled Blink # ";
String message2="This is my blueled Blink # ";


void setup() {
   Serial.begin(9600);
  pinMode (redled,OUTPUT);
  pinMode (blueled,OUTPUT);
  Serial.print("This is my first program");
  Serial.println(" ");

  
  Serial.print("How many blinks for led red?");
  while(Serial.available() == 0){};
  blinkred =Serial.parseInt ();
  Serial.println(" ");

  Serial.print("How many blinks for led green?");
  while(Serial.available() == 0){};
  blinkblue =Serial.parseInt ();
  Serial.println(" ");

  Serial.print("How long will the red led be on?");
  while(Serial.available() == 0){};
  redon =Serial.parseInt ();
  Serial.println(" ");

   Serial.print("How long will the red led be off?");
  while(Serial.available() == 0){};
  redoff =Serial.parseInt ();
  Serial.println(" ");

xss  
  Serial.print("How long will the blue led be off?");
  while(Serial.available() == 0){};
  blueon =Serial.parseInt ();
  Serial.println(" ");

    Serial.print("How long will the blue led be off?");
  while(Serial.available() == 0){};
  blueoff =Serial.parseInt ();
  Serial.println(" ");
  
  }

void loop() {
  for(int j=1; j<=blinkred;j=j+1){
    Serial.println(message1);
    Serial.println(j);
 digitalWrite (redled,HIGH);
delay(redon);
digitalWrite (redled,LOW);
delay(redoff);
  }
  Serial.println(" ");
  for(int j=1; j<=blinkblue;j=j+1){
    Serial.println(message2);
    Serial.println(j);
digitalWrite (blueled,HIGH);
delay(blueon);
digitalWrite (blueled,LOW);
delay(blueoff);
  }
  Serial.println(" ");
}
  
