#include <HCPCA9685.h>
#define I2CAdd 0x40
HCPCA9685 HCPCA9685(I2CAdd);
const int array_size=3;
String myArray[array_size];

void setup() {
  HCPCA9685.Init(SERVO_MODE);
  HCPCA9685.Sleep(false);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    String input=Serial.readStringUntil('\n');
    char delimiter[] = ",";
    char* token = strtok(const_cast<char*>(input.c_str()), delimiter);
    int index = 0;
    while (token != NULL && index < array_size) {
      myArray[index++] = String(token).toInt();
      token = strtok(NULL, delimiter);
    }
    int pos= myArray[0].toInt();
    int ros= myArray[1].toInt();
    int tos= myArray[2].toInt();
    int Pos = map(pos,-90,90,20,410);
    int Ros = map(pos,-90,90,20,410);
    int Tos = map(pos,-90,90,20,410);
    Serial.println(Pos);
    Serial.println(Ros);Serial.println(Tos);
    HCPCA9685.Servo(0,Pos);
    HCPCA9685.Servo(2,Ros);
    HCPCA9685.Servo(4,Tos);
   /*
    if(pos>0&&ros>0&&tos>0){
      for(int i=0;i<pos;i++){
        HCPCA9685.Servo(0,i);
        Serial.println(pos);
      }
      
      for(int j=0;j<ros;j++){
        HCPCA9685.Servo(1,j);
        Serial.println(ros);
      
      }
      for(int k=0;k<tos;k++){
        HCPCA9685.Servo(2,k);
        Serial.println(tos);
      }
    }
    else if(pos==0&&ros==0&&tos==0){
      for(int i=0;i<=pos;i++){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j<=ros;j++){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k<=tos;k++){
        HCPCA9685.Servo(2,k);
      }
    }
    else if(pos>0&&ros>0&&tos<0){
      for(int i=0;i<pos;i++){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j<ros;j++){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k>=tos;k--){
        HCPCA9685.Servo(2,k);
      }
    }
    else if(pos>0&&ros<0&&tos>0){
      for(int i=0;i<pos;i++){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j>=ros;j--){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k<tos;k++){
        HCPCA9685.Servo(2,k);
      }
    }
    else if(pos>0&&ros<0&&tos<0){
      for(int i=0;i<pos;i++){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j>=ros;j--){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k>=tos;k--){
        HCPCA9685.Servo(2,k);
      }
    }
    else if(pos<0&&ros>0&&tos>0){
      for(int i=0;i>=pos;i--){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j<ros;j++){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k<tos;k++){
        HCPCA9685.Servo(2,k);
      }
    }
    else if(pos<0&&ros>0&&tos<0){
      for(int i=0;i>=pos;i--){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j<ros;j++){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k>=tos;k--){
        HCPCA9685.Servo(2,k);
      }
    }
    else if(pos<0&&ros<0&&tos>0){
      for(int i=0;i>=pos;i--){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j>=pos;j--){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k<tos;k++){
        HCPCA9685.Servo(2,k);
      }
    }
    else if(pos<0&&ros<0&&tos<0){  
      for(int i=0;i>=pos;i--){
        HCPCA9685.Servo(0,i);
      }
      for(int j=0;j>=ros;j--){
        HCPCA9685.Servo(1,j);
      }
      for(int k=0;k>=tos;k--){
        HCPCA9685.Servo(2,k);
      }
    }*/
  }
}
