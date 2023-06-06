
/*
  Stepper Motor Control 

  The program reads a float from the serial port and rotates the stepper motor by an angle equal to the input.
  Positive angle means a clockwise rotation, negative angle means anticlockwise.

*/

#include <Stepper.h>

const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
const int rolePerMinute = 15;         // Adjustable range of 28BYJ-48 stepper is 0~17 rpm

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(rolePerMinute);
  Serial.begin(9600);
  myStepper.step(2048);
}

void loop() {  
  if (Serial.available() > 0) {

    float number = Serial.parseFloat();
  
    myStepper.step(int(number/360*stepsPerRevolution));
    delay(500);
  }
}
