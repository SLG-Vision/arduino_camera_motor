import serial
import argparse

ser = serial.Serial('/dev/tty.usbmodem1201', 9600)  

parser = argparse.ArgumentParser(description='Send a number to Arduino')
parser.add_argument('number', type=int, help='The number to send to Arduino')
args = parser.parse_args()

ser.write(str(args.number).encode())

ser.close()
