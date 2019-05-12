# include < LiquidCrystal.h>
LiquidCrystal led (7,8,9,10,11,12);
int TRIG =4 ;
int ECHO = 6 ;
float Time;
float Distance;


void setup() {
  lcd.begin(16,2);
  lcd.clear();
  
   pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop(){
 digitalWrite(TRIG,LOW);
 delayMicroseconds(2);
 digitalWrite(TRIG,HIGH);
 delayMicroseconds(10);
 digitalWrite(TRIG,LOW);

 Time = pulseIn(ECHO,HIGH);

 Distance = (Time*0.0343)/2;

 lcd setCursor(0,0);
 lcd.print(Distance);
 lcd.print("cm");

}
