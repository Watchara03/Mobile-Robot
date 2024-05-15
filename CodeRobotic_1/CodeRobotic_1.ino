#include <Servo.h>
#include <SPI.h>
#include <Wire.h>
#include "constants.h"
#include "animation.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


Servo hipL;
Servo hipR;
Servo kneeL;
Servo kneeR;
Servo ankleL;
Servo ankleR;
int A = 12;
int a = 0;
int frame = 0;
int switchState = 0;     // สถานะปัจจุบันของสวิตช์
int lastSwitchState = 0; // สถานะของสวิตช์ในรอบที่แล้ว
bool Press = true;

void check(){
  switchState = digitalRead(A);
  Serial.print(a);
  if (switchState == lastSwitchState) {
    if (switchState == HIGH) {
      if (Press) {
        Serial.println("1");
      Press = false; 
      a = 1 ;
    }
    else {
      Serial.println("0");
      Press = true; 
      a = 0 ;
      }
        }
lastSwitchState = switchState;
  }

}
void stand(){
  hipL.write(hipLOffset);
  kneeL.write(kneeLOffset);
  ankleL.write(ankleLOffset);
  hipR.write(hipROffset);
  kneeR.write(kneeROffset);
  ankleR.write(ankleROffset);
  delay(1000);
  }
void updateServoPos(int target1, int target2, int target3, char leg){
  if (leg == 'l'){ //ขาขวา
    hipL.write(hipLOffset - target1 + 20);
    kneeL.write(kneeLOffset - target2 + 50);
    ankleL.write(2*ankleLOffset - target3-20);
  }
  else if (leg == 'r'){ // ขาซ้าย
    hipR.write(hipROffset + target1 - 20 );
    kneeR.write(kneeROffset + target2 - 40);
    ankleR.write(target3+20);
  }
}

void pos(float x, float z, char leg){
  float hipRad2 = atan(x/z);
  float hipDeg2 = hipRad2 * (180/PI);

  float z2 = z/cos(hipRad2);

  float hipRad1 = acos((sq(l1) + sq(z2) - sq(l2))/(2*l1*z2));
  float hipDeg1 = hipRad1 * (180/PI);
  
  float kneeRad = PI - acos((sq(l1) + sq(l2) - sq(z2))/(2*l1*l2));

  float ankleRad = PI/2 + hipRad2 - acos((sq(l2) + sq(z2) - sq(l1))/(2*l2*z2));
  
  float hipDeg = hipDeg1 + hipDeg2 ;
  float kneeDeg = kneeRad * (180/PI);
  float ankleDeg = ankleRad * (180/PI);

//Serial.print(hipDeg);
//Serial.print("\t");
//Serial.print(kneeDeg);
//Serial.print("\t");
//Serial.println(ankleDeg);

  updateServoPos(hipDeg, kneeDeg, ankleDeg, leg);  
}

void takeStep(float stepLength, int stepVelocity){
  for (float i = stepLength; i >= -stepLength; i-=0.5){
    pos(i, stepHeight, 'r');
    pos(-i, stepHeight - stepClearance, 'l');
    delay(stepVelocity + 300);
  }

  for (float i = stepLength; i >= -stepLength; i-=0.5){
    pos(-i, stepHeight - stepClearance, 'r');
    pos(i, stepHeight, 'l');
    delay(stepVelocity + 300);
  }
}

void initialize(){
  for (float i = 10.7; i >= stepHeight; i-=0.1){
    pos(0, i, 'l');
    pos(0, i, 'r');
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  hipL.attach(11);
  hipR.attach(6);
  kneeL.attach(10);
  kneeR.attach(5);
  ankleL.attach(9);
  ankleR.attach(3);

  hipL.write(hipLOffset);
  kneeL.write(kneeLOffset);
  ankleL.write(ankleLOffset);
  
  hipR.write(hipROffset);
  kneeR.write(kneeROffset);
  ankleR.write(ankleROffset);
  pinMode(A,INPUT);
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDR);

  
  initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(A);
  Serial.print(a);
  if (switchState != lastSwitchState) {
    if (switchState == LOW) {
      Serial.println("1");
      Press = false; 
      a = 1 ;
    }
    else {
      Serial.println("0");
      Press = true; 
      a = 0 ;
      }
  }
  lastSwitchState = switchState;
  if(a == 0){ 
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(5,25);
  display.println(F("Loading..."));
  display.display();
  stand();
  
  }
  else if(a == 1){
  display.clearDisplay();
  display.drawBitmap(40, 8, moving[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  display.display();
  frame = (frame + 1) % FRAME_COUNT;
  //delay(FRAME_DELAY);
  takeStep(2, 0);
  }
}
