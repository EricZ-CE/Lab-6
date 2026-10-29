# Lab-6
This project uses an Arduino Uno to control external LEDs in two tasks.

## Equipment

- Arduino Uno
- Breadboard
- Two LEDs
- Two 330 Ω resistors
- Jumper wires
- USB cable

## Circuit Connections

| LED | Arduino pin | Connection |
|-----|-------------|------------|
| LED1 | 12 | Pin 12 → 330 Ω resistor → LED anode; cathode → GND |
| LED2 | 8 | Pin 8 → 330 Ω resistor → LED anode; cathode → GND |

Task 1 uses only LED1. Task 2 uses both LEDs. Each LED has its own current-limiting resistor.

## Task 1

The program toggles LED1 every 500 milliseconds using `delay(500)`.

- On time: 0.5 seconds
- Off time: 0.5 seconds
- Complete blink period: 1 second
- Blink frequency: 1 Hz

The Boolean variable `state1` stores the LED state. The expression `!state1` reverses that state, and `digitalWrite()` applies it to pin 12.

## Task 2

The program uses `delay(1000)` and a counter to control two LEDs.

- LED1 toggles every loop.
- LED2 toggles whenever the counter is even.

| LED | On time | Off time | Complete blink period |
|-----|---------|----------|-----------------------|
| LED1 | 1 second | 1 second | 2 seconds |
| LED2 | 2 seconds | 2 seconds | 4 seconds |

These values describe the current code. A state change is half of a complete on/off cycle.

To produce one complete blink per second for LED1 and one complete blink every two seconds for LED2, change the Task 2 delay to `delay(500)`.

## Running the Programs

1. Connect the circuit for the selected task.
2. Open the corresponding `.ino` file in Arduino IDE.
3. Connect the Arduino Uno to the computer using USB.
4. Select the Arduino Uno board and its port.
5. Upload the program and observe the LEDs.

Upload each task separately, since each program defines its own `setup()` and `loop()` functions.

## Author

Eric Zhuang
