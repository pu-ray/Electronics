int greenled=10;

void setup() {
  pinMode(greenled,OUTPUT);
  

}

void loop() {
 analogWrite (greenled,113);
 delay(1000);
 analogWrite(greenled,0);
 delay(1000);
}
