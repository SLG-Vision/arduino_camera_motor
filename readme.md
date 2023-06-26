# Arduino camera tracker

Simple Arduino script to control the camera using a stepper motor.
The program reads a float from the serial port and rotates the stepper motor by an angle equal to the input.
A positive angle means a clockwise rotation, negative angle means anticlockwise.
Note that the motor has a sensibility of 2048 steps per revolution, which means that each step is about 0.175°.

The enclosure and the camera stand has been designed and 3d printed by ourselves.

## Schematics

![Schematics](/arduino-motor-schem.svg)
Created with https://www.circuit-diagram.org/

## Python support

See `sender.py` to see the sender sample code. 
