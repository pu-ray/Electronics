int TRIG =4 ;
int ECHO = 6 ;
float Time;
float Distance;
void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  }

void loop() {
 digitalWrite(TRIG,LOW);
 delayMicroseconds(2);
 digitalWrite(TRIG,LOW);
 delayMicroseconds(10);
 digitalWrite(TRIG,LOW);

 Time = pulseIn(ECHO,HIGH);

 Distance = (Time*0.0343)/2;

 Serial.print(Distance);
 Serial.print("cm");
 delay(500);
 
 
 
 
}
