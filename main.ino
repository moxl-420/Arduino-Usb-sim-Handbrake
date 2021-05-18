#include <Adafruit_EPD.h>
//#include <Adafruit_MCPSRAM.h>
#include <Adafruit_ThinkInk.h>

// Analog eBrake-Handbrake
// PIN A1 to 10k pot output - Throttle Axis
// Use with Arduino ProMicro.
// Tested and working in DiRT RALLY + ASSETTO CORSA
// Inspired by by AMSTUDIO
// 20.1.2017

#include <Joystick.h>
const int pinToButtonMap = A1;

void setup(){
  pinMode(pinToButtonMap, INPUT); 
   Joystick.begin();
}


void loop(){

  int pot = analogRead(pinToButtonMap);
  int mapped = map(pot,1023,0,0,255);
  
  {Joystick.setThrottle(mapped);}

}
