int LEDBLUE=4;
int LEDGREEN=7;
int BLINKBLUE=10; 
int BLINKGREEN=5;
String message="i love electronics"; 


void setup() {
  Serial.begin(9600);
    pinMode(LEDBLUE,OUTPUT);
    pinMode(LEDGREEN,OUTPUT);
    Serial.println("Hellow ");
    Serial.println(" ");
    

}

void loop(){

  for(int j=1; j<=BLINKBLUE;j=j+1)
  
  {
    Serial.println(message);
    Serial.print(" ");
 Serial.println(j);
 Serial.print(" ") ;
digitalWrite (LEDBLUE,HIGH);
delay(1000);
digitalWrite (LEDBLUE,LOW);
delay(1000);

}
  
digitalWrite (LEDGREEN, HIGH);
delay(1000);
digitalWrite (LEDGREEN,LOW);
delay(1000);

}




 
 
 



