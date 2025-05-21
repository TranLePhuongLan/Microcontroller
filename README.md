# Python with Arduino

- 1. [Pyserial](https://projecthub.arduino.cc/ansh2919/serial-communication-between-python-and-arduino-663756)

  - According to the link 1., the concept to use have the local computer (which installs python and pyserial) to comminicate with the Arduino board. To setup this comminucation, we must also use Arduino IDE to write a program keep running on the Arduino board, this program communicates with our python local computer. 

  - Disadvantage:

    - need to run a constant server on Arduino board to communicate with the local computer running our python code

  - Advantages:

   - Because the python code runs in the local computer, we can have use any python packages available to make a complex application to control the Arduino

- 2. [Firmata](https://realpython.com/arduino-python/)

  - According to the link 2., the **firmata** is a package to support python program in local PC to communicate with the Arduino board (same as `Pyserial`, but much more easier to use) 

  - Disadvantages:

   - same as `Pyserial`

  - Advantages:

   - More high-level language library compared to `Pyserial`.

# Arduino IDE

Based on the section **Python with Arduino**, it might be preferably to work directly with Arduino IDE, native language.

# Repository description


## reference_code

This folder contains reference code from colleagues.