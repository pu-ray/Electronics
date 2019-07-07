# include < LiquidCrystal.h>
LiquidCrystal led (7,8,9,10,11,12);
int PIR = 6;

void setup() {
  pinMode(PIR,INPUT);
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  ReadValue = digitalRead(PIR);
  if(ReadValue==HIGH){
  lcd.print("haiyah!!!catch the theif!!");
  
  }
   else{
    digitalWrite(ledred,LOW);
   }
}
lcd.print("alert");
}


