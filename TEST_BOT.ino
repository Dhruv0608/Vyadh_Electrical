

































#define motor1f 2
#define motor1b 4
#define motor2f 5
#define motor2b 6
#define motor3f 7
#define motor3b 8
#define motor4f 12
#define motor4b 13
#define mpwm1 3
#define mpwm2 9
#define mpwm3 10
#define mpwm4 11
char a;

void setup() {
  pinMode(motor1f,OUTPUT);
  pinMode(mpwm1,OUTPUT);
  pinMode(motor1b,OUTPUT);
  pinMode(motor2f,OUTPUT);
  pinMode(mpwm2,OUTPUT);
  pinMode(motor2b,OUTPUT);
  pinMode(motor3f,OUTPUT);
  pinMode(mpwm3,OUTPUT);
  pinMode(motor3b,OUTPUT);
  pinMode(motor4f,OUTPUT);
  pinMode(mpwm4,OUTPUT);
  pinMode(motor4b,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
    a=Serial.read();
    switch(a){
      case 'w':
          digitalWrite(motor1f,HIGH);
          analogWrite(mpwm1,20);
          digitalWrite(motor1b,LOW);
          digitalWrite(motor2f,LOW);
          digitalWrite(motor2b,HIGH);
          analogWrite(mpwm3,20);
          digitalWrite(motor3f,LOW);
          digitalWrite(motor3b,HIGH);
          analogWrite(mpwm3,20);
          digitalWrite(motor4f,HIGH);
          analogWrite(mpwm4,20);
          digitalWrite(motor4b,LOW);
          Serial.println("w");
          break;
       case 'a':
          digitalWrite(motor1f,HIGH);
          analogWrite(mpwm1,20);
          digitalWrite(motor1b,LOW);
          digitalWrite(motor2f,LOW);
          digitalWrite(motor2b,HIGH);
          analogWrite(mpwm2,20);
          digitalWrite(motor3f,HIGH);
          analogWrite(mpwm3,20);
          digitalWrite(motor3b,LOW);
          digitalWrite(motor4f,LOW);
          digitalWrite(motor4b,HIGH);
          analogWrite(mpwm4,20);
          Serial.println("a");
          break;
       case 's':
          digitalWrite(motor1f,LOW);
          digitalWrite(motor1b,HIGH);
          analogWrite(mpwm1,20);
          digitalWrite(motor2f,HIGH);
          analogWrite(mpwm2,20);
          digitalWrite(motor2b,LOW);
          digitalWrite(motor3f,HIGH);
          analogWrite(mpwm3,20);
          digitalWrite(motor3b,LOW);
          digitalWrite(motor4f,LOW);
          digitalWrite(motor4b,HIGH);
          analogWrite(mpwm4,20);
          Serial.println("s");
          break;
       case 'd':
          digitalWrite(motor1f,LOW);
          digitalWrite(motor1b,HIGH);
          analogWrite(mpwm1,20);
          digitalWrite(motor2f,HIGH);
          analogWrite(mpwm2,20);
          digitalWrite(motor2b,LOW);
          digitalWrite(motor3f,LOW);
          digitalWrite(motor3b,HIGH);
          analogWrite(mpwm3,20);
          digitalWrite(motor4f,HIGH);
          analogWrite(mpwm4,20);
          digitalWrite(motor4b,LOW);
          Serial.println("d");
          break;
       case 'q':
          digitalWrite(motor1f,HIGH);
          analogWrite(mpwm1,100);
          digitalWrite(motor1b,LOW);
          digitalWrite(motor2f,HIGH);
          analogWrite(mpwm2,100);
          digitalWrite(motor2b,LOW);
          digitalWrite(motor3f,HIGH);
          analogWrite(mpwm3,100);
          digitalWrite(motor3b,LOW);
          digitalWrite(motor4f,HIGH);
          analogWrite(mpwm4,100);
          digitalWrite(motor4b,LOW);
          Serial.println("q");
          break;
       case 'e':
          digitalWrite(motor1f,LOW);
          digitalWrite(motor1b,HIGH);
          analogWrite(mpwm1,20);
          digitalWrite(motor2f,LOW);
          digitalWrite(motor2b,HIGH);
          analogWrite(mpwm2,20);
          digitalWrite(motor3f,LOW);
          digitalWrite(motor3b,HIGH);
          analogWrite(mpwm3,20);
          digitalWrite(motor4f,LOW);
          digitalWrite(motor4b,HIGH);
          analogWrite(mpwm4,20);
          Serial.println("e");
          break;
       case ' ':
          digitalWrite(motor1f,HIGH);
          analogWrite(mpwm1,0);
          digitalWrite(motor1b,LOW);
          digitalWrite(motor2f,HIGH);
          analogWrite(mpwm2,0);
          digitalWrite(motor2b,LOW);
          digitalWrite(motor3f,HIGH);
          analogWrite(mpwm3,0);
          digitalWrite(motor3b,LOW);
          digitalWrite(motor4f,HIGH);
          analogWrite(mpwm4,0);
          digitalWrite(motor4b,LOW);
          Serial.println("stop");
          break;
    }
  }
}
