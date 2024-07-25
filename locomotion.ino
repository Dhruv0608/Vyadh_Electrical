//PWM
#define PWM1MD1 PA1//pwm
#define PWM2MD1 PA3//pwm
#define PWM1MD2 PA6//pwm
#define PWM2MD2 PA7//pwm
#define PWM1MD3 PA9//pwm
#define PWM2MD3 PA10//pwm
// direction
#define DIR1 PA0//direction
#define DIR2 PA4//direction
#define DIR3 PA5//direction
#define DIR4 PA8//direction
#define DIR5 PB1//direction
#define DIR6 PB0//direction 
char a;
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
pinMode(PWM1MD3,OUTPUT);//pwm for DIR5 
pinMode(DIR6,OUTPUT); 
pinMode(PWM2MD3,OUTPUT);//pwm for DIR6 
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
if (Serial.available()){
a=Serial.read();
switch (a) {
    case 'A':
        digitalWrite(DIR1,HIGH); 
        analogWrite(PWM1MD1,180);
        digitalWrite(DIR2,HIGH); 
        analogWrite(PWM2MD1,180); 
        digitalWrite(DIR3,HIGH); 
        analogWrite(PWM1MD2,180); 
        digitalWrite(DIR4,HIGH);
        analogWrite(PWM2MD2,116);
        digitalWrite(DIR5,HIGH); 
        analogWrite(PWM1MD3,124); 
        digitalWrite(DIR6,HIGH); 
        analogWrite(PWM2MD3,124); 
        Serial.println(" moving forward ");
        break;
     case 'B':
        digitalWrite(DIR1,LOW);
        analogWrite(PWM1MD1,180); 
        digitalWrite(DIR2,LOW);
        analogWrite(PWM2MD1,180); 
        digitalWrite(DIR3,LOW); 
        analogWrite(PWM1MD2,180); 
        digitalWrite(DIR4,LOW); 
        analogWrite(PWM2MD2,116); 
        digitalWrite(DIR5,LOW); 
        analogWrite(PWM1MD3,124); 
        digitalWrite(DIR6,LOW); 
        analogWrite(PWM2MD3,124); 
        Serial.println(" moving backward ");
        break;
     case 'C':
        digitalWrite(DIR1,LOW); 
        analogWrite(PWM1MD1,0); 
        digitalWrite(DIR2,LOW); 
        analogWrite(PWM2MD1,0); 
        digitalWrite(DIR3,HIGH); 
        analogWrite(PWM1MD2,180); 
        digitalWrite(DIR4,HIGH); 
        analogWrite(PWM2MD2,116); 
        digitalWrite(DIR5,LOW); 
        analogWrite(PWM1MD3,0);
        digitalWrite(DIR6,HIGH); 
        analogWrite(PWM2MD3,124); 
        Serial.println(" moving left ");
        break;
     case 'D':
        digitalWrite(DIR1,HIGH); 
        analogWrite(PWM1MD1,180); 
        digitalWrite(DIR2,HIGH); 
        analogWrite(PWM2MD1,180);
        digitalWrite(DIR3,LOW); 
        analogWrite(PWM1MD2,0); 
        digitalWrite(DIR4,LOW); 
        analogWrite(PWM2MD2,0); 
        digitalWrite(DIR5,HIGH); 
        analogWrite(PWM1MD3,124); 
        digitalWrite(DIR6,LOW); 
        analogWrite(PWM2MD3,0);//zero % duty cycle 
        Serial.println(" moving right ");
        break;
     case 'E':
        digitalWrite(DIR1,LOW); 
        analogWrite(PWM1MD1,100);//30% of duty cycle 
        digitalWrite(DIR2,LOW); 
        analogWrite(PWM2MD1,100);//80 % of duty cycle 
        digitalWrite(DIR3,HIGH); 
        analogWrite(PWM1MD2,140); 
        digitalWrite(DIR4,HIGH); 
        analogWrite(PWM2MD2,90); 
        digitalWrite(DIR5,LOW); 
        analogWrite(PWM1MD3,69); 
        digitalWrite(DIR6,HIGH); 
        analogWrite(PWM2MD3,97);
        Serial.println(" moving partially left ");
        break;
     case 'F':
        digitalWrite(DIR1,HIGH); 
        analogWrite(PWM1MD1,140); 
        digitalWrite(DIR2,HIGH); 
        analogWrite(PWM2MD1,140); 
        digitalWrite(DIR3,LOW); 
        analogWrite(PWM1MD2,100); 
        digitalWrite(DIR4,LOW);
        analogWrite(PWM2MD2,65); 
        digitalWrite(DIR5,HIGH); 
        analogWrite(PWM1MD3,97);//80% duty cycle 
        digitalWrite(DIR6,LOW); 
        analogWrite(PWM2MD3,69);//30 % duty cycle 
        Serial.println(" moving partially right ");
        break;
     case 'X':
        analogWrite(PWM1MD1,0); 
        analogWrite(PWM2MD1,0); 
        analogWrite(PWM1MD2,0); 
        analogWrite(PWM2MD2,0); 
        analogWrite(PWM1MD3,0); 
        analogWrite(PWM2MD3,0);
        Serial.println("STOP");
        break;
/*}
else if(a=='G')
// FOR MOTOR 1 SEPARATE CODE 
{
digitalWrite(DIR1,HIGH);
analogWrite(PWM1MD1,200);//100% duty cycle
}
else if(a=='Q'){
digitalWrite(DIR1,LOW); 
analogWrite(PWM1MD1,200);//100% duty cycle
}
else if(a=='H')//FOR MOTOR 2 SEPARATE CODE 
{
digitalWrite(DIR2,HIGH); 
analogWrite(PWM2MD1,200);//100% duty cycle

}else if(a=='C'){
digitalWrite(DIR2,LOW); 
analogWrite(PWM2MD1,200);//100% duty cycle
}
else if(a=='I')//FOR MOTOR 3 SEPARATE CODE 
{digitalWrite(DIR3,HIGH);
analogWrite(PWM1MD2,200);//100% duty cycle
}else if(a=='D')
{digitalWrite(DIR3,LOW);
analogWrite(PWM1MD2,200);//100% duty cycle
}
else if(a=='J')//FOR MOTOR 4 SEPARATE CODE
{
digitalWrite(DIR4,HIGH);
analogWrite(PWM2MD2,200);//100% duty cycle
}else if(a=='E')
{ digitalWrite(DIR4,LOW);
analogWrite(PWM2MD2,200);//100% duty cycle
}
 else if(a=='K')//FOR MOTOR 5 SEPARATE CODE
 {
digitalWrite(DIR5,HIGH);
analogWrite(PWM1MD3,200);//100% duty cycle
}
else if(a=='M')
{
digitalWrite(DIR5,LOW); 
analogWrite(PWM1MD3,200);//100% duty cycle
}
else if(a=='N')//FOR MOTOR 6 SEPARATE CODE
{digitalWrite(DIR6,HIGH); 
analogWrite(PWM2MD3,200);//100% duty cycle 
}
else if(a=='O'){
digitalWrite(DIR6,LOW); 
analogWrite(PWM2MD3,200);//100% duty cycle
}*/
}
}
}
