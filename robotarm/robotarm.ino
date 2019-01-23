#define XSTEP 2
#define YSTEP 3
#define ZSTEP 4

#define XDIR 5
#define YDIR 6
#define ZDIR 7

#define ENABLE 8

#define XLIMIT 9
#define YLIMIT 10
#define ZLIMIT 11

#define XMOTORACC 250
#define XMOTORMAXSPEED 1000

#define YMOTORACC 250
#define YMOTORMAXSPEED 1000

#include <AccelStepper.h>

AccelStepper XMOTOR(1,XSTEP,XDIR);
AccelStepper YMOTOR(1,YSTEP,YDIR);
AccelStepper ZMOTOR(1,ZSTEP,ZDIR);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinsetup();
  autohome();
  Serial.println("HOMING OK");
  

}

void loop() {
  XMOTOR.runToNewPosition(100);
  delay(1000);
  YMOTOR.runToNewPosition(50);
  delay(1000);
  YMOTOR.runToNewPosition(-50);
  delay(1000);
  YMOTOR.runToNewPosition(0);
  delay(1000);
  XMOTOR.runToNewPosition(0);
  delay(1000);


}
