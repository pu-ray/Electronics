int  redpin = 11;
int greenpin = 10;
int buepin = 6;
int brightness = 255;
String colorchoice;

void setup() {
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  }

void loop() {
  Serial.println("What color would you like the LED?(red,green, blue,purple,cyan)");
  while(Serial.available() == 0){}
  colorchoice = Serial.readString();


    if (colorchoice == "red"){
      
       analogWrite(redpin,brightness);
        analogWrite(bluepin,0);
         analogWrite(greenpin,0);
       }
       if (colorchoice == "blue"){
      
       analogWrite(redpin,0);
        analogWrite(bluepin,0);
         analogWrite(greenpin,brightness);
       }
        if (colorchoice == "green"){
      
       analogWrite(redpin,0);
        analogWrite(bluepin,brightness);
         analogWrite(greenpin,0);
       }
       if (colorchoice == "yellow"){
      
       analogWrite(redpin,0);
        analogWrite(yellowpin,brightness);
         analogWrite(greenpin,0);
       }
       if (colorchoice == "purple"){
      
       analogWrite(redpin,0);
        analogWrite(purplepin,brightness);
         analogWrite(greenpin,0);
       }
       if (colorchoice == "cyan"){
      
       analogWrite(redpin,0);
        analogWrite(cyanpin,brightness);
         analogWrite(greenpin,0);
       }

       if(colorchoice! = "red" && colorchoice! = "green" && colorchoice! = "blue" colorchoice! = "purple" && colorchoice! = "cyan")}
          Serial.println("That is not a valid color choice,please try again");
             Serial.println(" ");
             }
             
 
}
