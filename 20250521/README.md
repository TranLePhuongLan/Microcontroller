# Pyserial

## Before using Pyserial

- 1. Must check that the arduino board has proper functioning serial port through the USB connection to the computer.

  - 1.1 To test it, run the `tst_serial_comm_arduino_board.ino` (in the same folder with this README.md) in Arduino IDE. Then, open the **Tools -> Serial Monitor**, must see messages print out on the monitor, and must be able to interact with the monitor. Otherwise, the serial connection through the USB is not able to use the serial communication at all. If that is the case, change to other board.

- 2. NOTE:

  - 2.1 **There is one serial communication channel: if one of the application takes it, the other can not**. For example: when uploading a sketch from Arduino IDE to the Arduino board, the serial communication through USB cable is taken (during this time, if the **Device Manager** in Windows is open, the USB COM where the arduino board is connected will show message `Bossa program...` = The Arduino IDE is taking over the only serial USB channel to program the microcontroller on the arduino board). If the **Serial Monitor** in the **Arduino IDE** is opened, that means the **Serial Monitor** is taking over the serial comminucation, therefore, if we want to run a python program (with `pyserial` library), the python program will have error `access denied`. `access denied` is because the only usb serial communication is already taken by the **Serial Monitor**. We must close the **Serial Monitor** if we want to use the python program to communicate with our arduino board through the only available serial communication usb cable.

## Arduino Due

- After running the test according to section **Before using Pyserial** (above), both Programming port and Native USB port of the Arduino Due can not be used for serial communication.

## Arduino Nano

- This board passes the test in section **Before using Pyserial** (above)

- Because the board passes the serial communication test, we could run the following example:

  - The following example shows the python program (in local computer) will send data to the Arduino board, the Arduino board will receive this message and send back exactly the received message (echo) to the python program.

  - In Arduino IDE, compile and upload the sketch `pyserial_prac_1.ino` (in the same folder with this README.md) to the Arduino board

  - Open any IDE (e.g Vscode) to run the `microcontroller.ipynb` (in the same folder with this README.md) 

# Firmata

- [1] refer to `../README.md` - section **Python with Arduino** - subsection 2. Firmata

- [2] https://www.geeksforgeeks.org/control-arduino-with-python-and-pyfirmata/

## How to use it?

- refer to the reference [1] of Firmata section (above)

  - Step 1: open Arduino IDE, upload the **Files -> Examples -> Firmata -> StandardFirmata** to the arduino board (setup the serial communication support by the pyfirmata library).

  - Step 2: run the `pyfirmata_prac_1.ipynb` (in the same folder with this README.md), if encounter problems (refer to the subsection **Problem** of this section **Firmata** to find possible solutions).

## Problem

- `AttributeError: module 'inspect' has no attribute 'getargspec' with pyfirmata`, 

  - According to ChatGPT: "because getargspec was removed in Python 3.11, and pyFirmata (or a dependency like pyserial or pyfirmata2) may still try to use it..Use Python 3.10 or earlier"

    - Solution: going into the working conda env, downgrade the python verison: `conda install python=3.10`