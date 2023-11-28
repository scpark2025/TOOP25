//TOOP25
//Sydney Park

#include <Arduino.h>
#include <Pololu3piPlus32U4.h>
#include <Pololu3piPlus32U4IMU.h>

using namespace Pololu3piPlus32U4;

OLED display;
ButtonA buttonA;
ButtonB buttonB;
ButtonC buttonC;
Motors motor;
IMU imu;
BumpSensors bumpsensors;
LineSensors lineSensors;

#include <Arduino.h>

//declare class
class exampleRobot{
  //private variable
  private:
    String line1;

  public:
    //constructor
    exampleRobot::exampleRobot(){
      //set OLED layout
      Serial.begin(9600);
      display.init();
      display.clear();
    }

    //set contents of line1
    void setline(String content){
      line1 = content;
    }

  //uses display to show line1 on screen
  void displine(){
    display.gotoXY(1,0);
    display.print(line1);
  }
};

//create instance of exampleRobot
exampleRobot myRobot;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  display.init();   //init display

  //display Go Bears! on first line
  display.gotoXY(0,0);  
  display.print("Go Bears!"); 
}

void loop() {
  //call displine, use delay() as needed
  myRobot.displine();
  delay(500);
}
