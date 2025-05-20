import serial # this is from pyserial package (pip install pyserial)

relays = serial.Serial('COM3')

relays.baudrate = 115200

relays.timeout = 5
device_id = 10
relays.write(f'OutP{device_id:02d}\n'.encode('utf-8'))