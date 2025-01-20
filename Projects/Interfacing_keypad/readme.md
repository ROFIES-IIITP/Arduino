# INTERFACING KEYPAD USING ARDUINO UNO R3

	## Components needed
		 a. Arduino UNO R3
		 b. Keypad (4x4)
		 c. Jumper wires
	## Building Circuit
		 i. Connect the digital pins (12,11,10,9) of Arduino to pins (Row 1, Row 2, Row 3, Row 4) 
   				of 4x4 Keypad respectively.
	   	 ii. Connect the digital pins (8,7,6,5) of Arduino to pins (Column 1, Column 2, Column 3, Column 4) 
   				of 4x4 Keypad respectively.



 	## CODE 
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

   ## Code Explanation
		First we declare ROWS and COLS for mapping keys into Arduino. Then we declare an object numpad1 of class Keypad. Further we declare a variable ip(input) to 		store the value of key pressed which is read into object numpad1. Then we print the value of ip.

 ## NOTE
		Include header file <Keypad.h>
