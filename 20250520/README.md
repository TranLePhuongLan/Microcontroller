# Using Arduino Due board

- 1. Download the [Arduino IDE](https://www.arduino.cc/en/software/download-thank-you)

- 2. Install anything asked when installing Arduino IDE.

- 3. Install anything asked when opening Arduino IDE.

- 4. Opening the Arduino IDE app, `Tools` tab -> choose the board, in case the Aruino board is not available:

  - 4.1 `Tools` tab -> `Board Manager...` -> search for the board name.

    For example, in case of using the `Arduino Due`, the board is not avialble (that is why if we try to upload sketch (e.g the `Blink` example sketch) to this board while choosing the wrong Arduino board, the uploading process runs forever (i.e stuck at this step)). In `Tools` tab -> `Board Manager...` -> search for `Arduino Due`, and install the package.

- 5. `Tools` tab -> `Port: ` -> choose the port the board is connected to.

  - 5.1 When choosing the `Port: `, there will be two types of port: programming port and native USB port. As research on the Google, the programming port is preferred. Which port on the `Arduino Due` is the programming port?

    - [5.1.1] [Description of Arduino Due](https://www.jameco.com/Jameco/Products/ProdDS/2170222QuickGuide.pdf)

    According to [5.1.1], the programming port is the one near to the DC power supply.

# Reference

- [1]. [Full description of Arduino Due](https://store.arduino.cc/products/arduino-due?srsltid=AfmBOorjWUPvhzC2HJqAIF4strsw3QKmysB65aVJLtt97TjPuMVfN3QW)

  - [1.1] [Full description of Arduino Due, 2](https://docs.arduino.cc/resources/datasheets/A000062-datasheet.pdf?_gl=1*1vzliev*_up*MQ..*_ga*ODIzMzUxMTg4LjE3NDc3NDY2MzI.*_ga_NEXN8H46L5*czE3NDc3NDY2MzAkbzEkZzAkdDE3NDc3NDY2MzAkajAkbDAkaDIwNDY5NjI0ODA.)
