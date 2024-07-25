#include <Servo.h>
Servo myservo;
int pos=0;
  //PWM Linear 1 10pwm,12 linear 2 pwm 11, 13
#define PWM1MD1 PA10
#define PWM2MD1 PA8
#define PWM1MD2 PA7
#define PWM2MD2 PA6
#define PWM1LD1 PA0
//#define PWM2LD2 PB1
// direction
#define DIR1 PA0//direction
#define DIR2 PA1//direction
#define DIR3 PA2//direction
#define DIR4 PA3//direction
#define DIR5 PA4//direction Linear Acctuator1
//#define DIR6 PA5//direction Linear Acctuator2
char a;
float pval;
boolean n=true;
void setup() {
// put your setup code here, to run once:
pinMode(DIR1, OUTPUT);
pinMode(PWM1MD1,OUTPUT);//pwm for DIR1
pinMode(DIR2, OUTPUT);
pinMode(PWM2MD1,OUTPUT);//pwm for DIR2
pinMode(DIR3,OUTPUT);
pinMode(PWM1MD2,OUTPUT);//pwm for DIR3
pinMode(DIR4,OUTPUT);
pinMode(PWM2MD2,OUTPUT);//pwm for DIR4
pinMode(DIR5,OUTPUT);
pinMode(PWM1LD1,OUTPUT);//pwm for DIR5
myservo.attach(PA9);
/*pinMode(DIR6,OUTPUT);
pinMode(PWM2LD2,OUTPUT);*///pwm for DIR6
Serial.begin(9600); 
}
void loop() {
// put your main code here, to run repeatedly:

if (Serial.available()){
a=Serial.read();
pval=150;

switch (a) {
    case 'A':
      digitalWrite(DIR1,1);
      analogWrite(PWM1MD1,pval);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M1 F ADFBADFBADFBADFBADFBAFDBADF");
      n= true;

      break;

    case 'B':
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,pval);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M1 B ");
      n= true;
      break;
    case 'C':
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,1);
      analogWrite(PWM2MD1,pval);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M2 F ");
      n= true;
      break;
    case 'D':
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,pval);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M2 B ");
      n= true;
      break;

    case 'E':
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,1);
      analogWrite(PWM1MD2,pval);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M3 F ");
      n= true;
      break;

    case 'F': 
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,pval);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M3 B ");
      n= true;
      break;
      
    case 'G': 
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,1);
      analogWrite(PWM2MD2,pval);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M4 F ");
      n= true;
      break;

    case 'H': 

      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,pval);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M4 B ");
      n= true;
      break;

    case 'I': 
      
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,1);
      analogWrite(PWM1LD1,pval);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M5 F ");
      n= true;
      break;

    case 'J': 

      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,pval);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" M5 B ");
      n= true;
      break;

    case 'K': 
      
      for (pos = 0; pos <= 45; pos += 1) { // goes from 0 degrees to 45 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    Serial.println(" S CLK +45 ");
      break;
      case 'L': 
      
      for (pos = pos; pos <= 90; pos += 1) { // goes from active position to 90 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    Serial.println(" S CLK +90");
      break;
      case 'M': 
      
      for (pos = pos; pos <= 135; pos += 1) { // goes from active position to 135 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    Serial.println(" S CLK +135 ");
      break;
      case 'N': 
      
      for (pos =pos; pos <= 180; pos += 1) { // goes from active position to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    Serial.println(" S CLK +180");
      break;

    case 'O': 
      for (pos = pos; pos >= 135; pos -= 1) { // goes fromactive position to 135 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);}                       // waits 15ms for the servo to reach the position
     Serial.println(" S ANTICLK -135");
      break;
     case 'P': 
      
      for (pos = pos; pos >= 90; pos -= 1) { // goes from active position to 90 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);}                       // waits 15ms for the servo to reach the position
     Serial.println(" S ANTICLK -90");
      break;
     case 'Q': 
      
      for (pos = pos; pos >= 45; pos -= 1) { // goes from active position to 45 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);}                       // waits 15ms for the servo to reach the position
     Serial.println(" S ANTICLK -45");
      break;
     case 'R': 
      
      for (pos = pos; pos >= 0; pos -= 1) { // goes from active position to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);}                       // waits 15ms for the servo to reach the position
     Serial.println(" S ANTICLK 0 ");
      break;

    case 'X': 

      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);*/
      Serial.println(" STOP ");
      n= true;
      break;
    
    /*default:
      digitalWrite(DIR1,0);
      analogWrite(PWM1MD1,0);
      digitalWrite(DIR2,0);
      analogWrite(PWM2MD1,0);
      digitalWrite(DIR3,0);
      analogWrite(PWM1MD2,0);
      digitalWrite(DIR4,0);
      analogWrite(PWM2MD2,0);
      digitalWrite(DIR5,0);
      analogWrite(PWM1LD1,0);
      /*digitalWrite(DIR6,0);
      analogWrite(PWM2LD2,0);
      Serial.println(" STOP ");
      n= true;
      break;*/

}
}}
/*else{
  if(n==false){
    //n = false;
    digitalWrite(DIR1,0);
    analogWrite(PWM1MD1,0);
    digitalWrite(DIR2,0);
    analogWrite(PWM2MD1,0);
    digitalWrite(DIR3,0);
    analogWrite(PWM1MD2,0);
    digitalWrite(DIR4,0);
    analogWrite(PWM2MD2,0);
    digitalWrite(DIR5,0);
    analogWrite(PWM1LD1,0);
    /*digitalWrite(DIR6,0);
    analogWrite(PWM2LD2,0);
    Serial.println(" STOP ");
}*/
