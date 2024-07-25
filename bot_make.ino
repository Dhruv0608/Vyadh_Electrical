#include <MFRC522.h>
#include <SPI.h>
#include <WiFi.h>
#define WIFI_SSID "One Plus 11R" // wifi ssid input lelo
#define WIFI_PASSWORD "nopassword" // ssid ka password
constexpr uint8_t RST_PIN = D3; // reset pin
constexpr uint8_t SS_PIN = D4;
MFRC522 rfid(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;
#define dir1
#define dir2
#define dir3
#define dir4
#define pwm1
#define pwm2
#define pwm3
#define pwm4
String tag;
void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  WiFi.begin(WIFI_SSID,WIFI_PASSWORD);
  Serial.begin(115200);
  spi.begin();
  rfid.PCD_Init();//initialising rfid
  if(WiFi.status()==WL_CONNECTED){
    digitalWrite(LED_BUILTIN,HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN,LOW);
    delay(100);
  }
  else{
    digitalWrite(LED_BUILTIN,LOW);
  }
  pinMode(dir1,OUTPUT);
  pinMode(pwm1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(pwm2,OUTPUT);
  pinMode(dir3,OUTPUT);
  pinMode(pwm3,OUTPUT);
  pinMode(dir4,OUTPUT);
  pinMode(pwm4,OUTPUT);

}

void loop() {
  if ( ! rfid.PICC_IsNewCardPresent())
    return;
  if (rfid.PICC_ReadCardSerial()) {
    for (byte i = 0; i < 4; i++) {
      tag += rfid.uid.uidByte[i];
    }
    if(tag==''){
      if(ir_read==1){
        digitalWrite(dir1,HIGH);
        analogWrite(pwm1,200);
        digitalWrite(dir2,HIGH);
        analogWrite(pwm2,200);
        digitalWrite(dir3,HIGH);
        analogWrite(pwm3,200);
        digitalWrite(dir4,HIGH);
        analogWrite(pwm4,200);       
      }
      else if(ir_read==0){
        
        digitalWrite(dir1,HIGH);
        analogWrite(pwm1,0);
        digitalWrite(dir2,HIGH);
        analogWrite(pwm2,0);
        digitalWrite(dir3,HIGH);
        analogWrite(pwm3,0);
        digitalWrite(dir4,HIGH);
        analogWrite(pwm4,0);
      }
    }
    Serial.println(tag);
    tag = "";
    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }
}
