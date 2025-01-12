# 🚀 Arduino PIR Motion Detector with LED

This project demonstrates how to use a PIR (Passive Infrared) motion sensor with an Arduino to light up an LED when motion is detected. 🎉

## 🛠️ Components Needed

- 🛡️ Arduino (e.g., Uno, Nano, etc.)
- 🔴 PIR Motion Sensor (HC-SR501 or similar)
- 💡 LED (any color)
- ⚡ Resistor (220 ohms for the LED)
- 🪢 Jumper wires
- ⚙️ Breadboard (optional)

## 🖇️ Circuit Diagram

1. **PIR Sensor Connections:**
   - `VCC` -> Arduino `5V`
   - `GND` -> Arduino `GND`
   - `OUT` -> Arduino digital pin (e.g., pin 2)

2. **LED Connections:**
   - Positive leg (longer) -> Arduino digital pin (e.g., pin 13) via a 220-ohm resistor
   - Negative leg (shorter) -> Arduino `GND`

## 📜 Code

You can get the code from [here](./code.ino)

## 🚦 How It Works

1. The **PIR sensor** detects motion by sensing infrared radiation changes (e.g., when a person moves).
2. When motion is detected, the sensor sends a `HIGH` signal to the Arduino.
3. The Arduino turns on the **LED** when it receives the `HIGH` signal and turns it off when there is no motion.

## 🛡️ Notes

- Adjust the sensitivity and delay of the PIR sensor using the onboard potentiometers.
- Ensure proper connections to avoid any short circuits.

## 🌟 Demo

When the PIR sensor detects motion:
- The LED lights up. 💡

When no motion is detected:
- The LED remains off. 🌙

## 📸 Example Setup
Here is the schematics of the circuit
![schematic](./Terrific%20Hango.png)


---

Enjoy building your motion-detection project! 🥳 Feel free to share any feedback or improvements. 🚀
