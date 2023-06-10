# Arduino camera tracker

Simple Arduino script to control the camera using a stepper motor.
The program reads a float from the serial port and rotates the stepper motor by an angle equal to the input.
A positive angle means a clockwise rotation, negative angle means anticlockwise.
Note that the motor has a sensibility of 2048 steps per revolution, which means that each step is about 0.175°.

## Schematics

![Schematics](https://lastminuteengineers.b-cdn.net/wp-content/uploads/arduino/Wiring-28BYJ48-Stepper-Motor-with-ULN2003-Driver-and-Arduino.png)
Actually, in the current code version, pins used are 2, 3, 4, 5.

## Python support

See `sender.py` to see the sender sample code. 