# Interfacing keypad using Arduino UNO R3

## Overview
This project demonstrates interfacing a 4x4 numeric keypad with arduino for taking input.


## Components Used
- **Arduino Board (Uno)**
  <br>
-**4x4 Keypad**
## Circuit Diagram
 i.Connect the digital pins (12,11,10,9) of Arduino to pins (Row 1, Row 2, Row 3, Row 4) 
	of Keypad respectively. <br>
 ii. Connect the digital pins (8,7,6,5) of Arduino to pins (Column 1, Column 2, Column 3, Column 4) 
	 of 4x4 Keypad respectively.
<br>


## Code Explanation
	First we declare ROWS and COLS for mapping keys into Arduino. The `keys` array defines the mapping of keys to characters. We customize this array according to our keypad. Then we declare an object numpad1 of class `Keypad`. Next, we declare a variable ip(input) to store the value of key pressed which is read into object numpad1.

## Code
```cpp
#include<Keypad.h>

	const byte ROWS =4;
	const byte COLS =4;

	char keys[ROWS][COLS] = {{'1','2','3','A'}, {'4','5','6','B'},
					{'7','8','9','C'}, {'*','0','#','D'}};
	byte rowPins[ROWS]={12,11,10,9};
	byte colPins[COLS]={8,7,6,5};

	Keypad numpad1 = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

	void setup()
		{
			 Serial.begin(9600);
		}

	void loop()
		{
			char ip = numpad1.getKey();

				if (ip)
					{
						Serial.print("Key Pressed :  ");
						Serial.println(ip);
					}
		}
```

## Usage Instructions
1. Upload the code to your Arduino board using the Arduino IDE.
2. Connect the components as per the circuit diagram.
3. Open the serial monitor to view the input read.

## Note
Do not forget to include library `#include<keypad.h>`. You might need to download the header file manually in the Arduino IDE. In this project we included the `Keypad` library by **Mark Stanley** and **Alexander Brevig**.
