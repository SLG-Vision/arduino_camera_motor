
/*
  Stepper Motor Control 

  The program reads a float from the serial port and rotates the stepper motor by an angle equal to the input.
  Positive angle means a clockwise rotation, negative angle means anticlockwise.

*/

#include <Stepper.h>

const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
const int rolePerMinute = 15;         // Adjustable range of 28BYJ-48 stepper is 0~17 rpm


// for istance 8, 10, 9, 11 resp in1, in2, in3, in4 - please note that they are not in ascending order
Stepper myStepper(stepsPerRevolution, 2, 4, 3, 5);

void setup() {
  myStepper.setSpeed(rolePerMinute);
  Serial.begin(9600);
}

void loop() {  
  if (Serial.available() >= sizeof(float) ) {

    float number;
    Serial.readBytes((char*)&number, sizeof(float));
  
    myStepper.step(int(number/360.0*float(stepsPerRevolution)));
    
  }
}
