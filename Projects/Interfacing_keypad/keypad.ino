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