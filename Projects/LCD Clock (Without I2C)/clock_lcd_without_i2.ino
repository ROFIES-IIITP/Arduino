
// A small project to make a clock using an LCD display without I2C module
// Author: Deepsh Patil


// Include the Library
#include <LiquidCrystal.h>

// Define the LCD pins
const int rs = 2;
const int en = 3;
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define the variables
int h = 12;
int m = 0;
int s = 0;
int flag = 0;
int TIME = 0;
const int hs = 0;
const int ms = 1;
int state1 = 0;
int state2 = 0;

// Setup the LCD
void setup(){

  lcd.begin(16, 2);
  pinMode(hs, INPUT_PULLUP);
  pinMode(ms, INPUT_PULLUP);

}

// Loop the program
void loop(){

    // Print the time on the LCD
    lcd.setCursor(0, 0);
    s = s + 1;
    lcd.print("TIME:" );
    lcd.print(h);
    lcd.print(":");
    lcd.print(m);
    lcd.print(":");
    lcd.print(s);

    // Print AM or PM
    if (flag < 12) lcd.print(" AM");
    if (flag == 12) lcd.print(" PM");
    if (flag > 12) lcd.print(" PM");
    if (flag == 24) flag = 0;

    // Delay for 1 second
    delay(1000);
    lcd.clear();        // Clear the LCD

    // Update the minutes
    if (s == 60){
        s = 0;
        m = m + 1;
    }

    // Update the hours
    if (m == 60){
        m = 0;
        h = h + 1;
        flag = flag + 1;
    }

    // Reset the hours
    if (h == 13){
        h = 1;
    }

    // Check the button state
    lcd.setCursor(0, 1);
    state1 = digitalRead(hs);

    // Modify the hours when the button is pressed and held
    if (state1 == 0){
        h = h + 1;
        flag = flag + 1;
        if (flag < 12) lcd.print(" AM");
        if (flag == 12) lcd.print(" PM");
        if (flag > 12) lcd.print(" PM");
        if (flag == 24) flag = 0;
        if (h == 13) h = 1;
    }

    // Check the button state
    state2 = digitalRead(ms);

    // Modify the minutes when the button is pressed and held
    if (state2 == 0){
        s = 0;
        m = m + 1;
    }
}

// End of the code