# Arduino Clock with LCD Display ⏰

## Overview ℹ️
This Arduino project implements a simple clock using an LCD display without an I2C module. It continuously displays the time in hours, minutes, and seconds on the LCD screen. Additionally, it allows users to adjust the hours and minutes using push buttons.

## Author 👨‍💻
- **Author**: Deepsh Patil

## Components Required 🛠️
- Arduino board (e.g., Arduino Uno)
- A Mini Breadboard
- 16x2 LCD Display
- Push Buttons (2 pieces)
- Jumper Wires
- 10k Potentiometer
- 330Ω Resistor

## Installation and Setup 📲
![Circuit Diagram](Circuit Diagram.png)
1. **Wiring Connections**:
   - Connect the LCD display to the Arduino board according to the pin definitions provided in the code (`rs`, `en`, `d4`, `d5`, `d6`, `d7`).
   - Connect two push buttons to the Arduino board for setting hours and minutes. The pins for the buttons are defined as `hs` (hour set) and `ms` (minute set) in the code.

2. **Upload the Code**:
   - Upload the provided Arduino sketch (`clock_lcd_without_i2c.ino`) to your Arduino board using the Arduino IDE or any other compatible software.

3. **Run the Project**:
   - After uploading the code, the clock will start displaying the time on the LCD screen after you have adjusted the potentiometer appropriately. The hours and minutes can be adjusted using the push buttons connected to the Arduino.

## Usage 🚀
- The clock will display the time in hours, minutes, and seconds in the format "HH:MM:SS".
- The clock operates in a 12-hour format, with an "AM" or "PM" indicator.
- Press and hold the hour set button (`hs`) to increment the hours.
- Press and hold the minute set button (`ms`) to increment the minutes.
- The clock automatically resets the seconds to zero when they reach 60.
- The clock also increments the minutes and hours accordingly.

