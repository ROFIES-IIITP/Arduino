# 🚦 Arduino Traffic Light Signaling System

This project demonstrates how to use Arduino to create a prototype traffic signal .
## 🛠️ Components Needed

- 🛡️ Arduino ( Uno)
- 🔴 Push Button
- 💡 LED (Red|Yellow|Green color)
- ⚡ Resistor (220|1000 ohms for the LED)
- 🪢 Jumper wires
- ⚙️ Breadboard (optional)

## 🔌 Circuit Diagram

1. **Push Button Connections:**
   - `VCC` -> Arduino `5V`
   - `GND` -> Arduino `GND` via 1000 Ohm resistance
   - `OUT` -> Arduino digital pin (pin 2)

2. **LED Connections:**
   - Positive leg (longer) -> Arduino digital pin (pin 13|pin12|pin8) via a 220-ohm resistor
   - Negative leg (shorter) -> Arduino `GND`

## 📜 Code

You can get the code from [here](./sketch_jan12a.ino)

## 🚦 How It Works

1. The **Push Button** provides input .
2. When pressed , it sends a `HIGH` signal to the Arduino.
3. The Arduino turns on the **Red|Yellow|Green LED** simultaneously when it receives the `HIGH` signal .

## ❗️ Notes

- Adjust the delay of LED.
- Ensure proper connections to avoid any short circuits.

## 📸 Example Setup
Here is the schematics of the circuit
![schematic](./Arduino/Projects/TrafficLight/traffic light aurdino.png)


---

Enjoy building your Arduino Traffic Light Signaling System ! 🥳 Feel free to share any feedback or improvements. 🚀
