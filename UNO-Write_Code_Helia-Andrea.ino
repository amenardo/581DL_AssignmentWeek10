            {0;0;0}
/*
Firefly Code Generator by Andy Payne
Copyright 2011 All Rights Reserved
Code Generated on 09/14/2020 14:10:50
Special thanks to Panagiotis Michalatos.
For more information visit: www.fireflyexperiments.com
*/

//WARNING: The following functions were not found: GhPython_Script, GhPython_Script

#include "FFCasts.h"
#include <Servo.h>

//******************* Begin Function Definitions *******************

//Degrees Function: Convert an angle specified in radians to degrees.
inline double Degrees(double _v1){
  return _v1*(180.0/3.1415926535897931);
}

//******************** End Function Definitions ********************

Servo servo9;

void setup() {
  servo9.attach(9);
}

void loop() {
  servo9.write(Degrees((double)(GhPython_Script(GhPython_Script(0,Value_List)))));
}
