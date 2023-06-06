import serial
import argparse





class MySerial():
    def __init__(self, serial_port: str = "/dev/tty.usbmodem1201") -> None:
        self.serial = serial.Serial(serial_port, 9600)  

    def write(self, number):
        self.serial.write(number.encode('utf-7'))

    def close(self):
        self.serial.close()


ser = MySerial()
parser = argparse.ArgumentParser(description='Send a number to Arduino')
parser.add_argument('number', type=int, help='The number to send to Arduino')
args = parser.parse_args()
ser.write(str(args.number))
ser.close()
