// C++ code
#include <LiquidCrystal.h>
#include<Servo.h>

Servo S1,S2;

#define IR_p1 7 //Parking Slot - 1
#define IR_p2 8 //Parking Slot -2 
#define IR_entry 6 //Sensor at entry
#define IR_exit 13 //Sensor at exit

int pos=0; //Used for controlling the Servo-motor those act as gates 

LiquidCrystal lcd(12,11,5,4,3,2); //The pins that are connected to LED

void setup()
{
  S1.attach(10);
  S2.attach(9);
  
  S1.write(pos);
  S2.write(pos);
  
  pinMode(IR_p1, INPUT);
  pinMode(IR_p2, INPUT);
  pinMode(IR_entry, INPUT);
  pinMode(IR_exit, INPUT);
  
  lcd.begin(16,2);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("    System");
  
  delay(1500); 
  
  lcd.clear();
  
  //At first both Slots are available
  lcd.setCursor(0,0); 
  lcd.print(" Slot - 1 = A ");
  lcd.setCursor(0,1);
  lcd.print(" Slot - 2 = A ");
  delay(1500);
}

void loop()
{
  if(digitalRead(IR_p1)==HIGH)
     {
       lcd.setCursor(0,0);
       lcd.print(" Slot - 1 = UA "); //Unavailable
     } 
  else
     {
       lcd.setCursor(0,0);
       lcd.print(" Slot - 1 = A "); //Avaialble
     }
   if(digitalRead(IR_p2)==HIGH)
     {
       lcd.setCursor(0,1);
       lcd.print(" Slot - 2 = UA ");
     } 
  else
     {
       lcd.setCursor(0,1);
       lcd.print(" Slot - 2 = A ");
     }
  
   if(digitalRead(IR_entry)==HIGH)
   {
     S1.write(pos+90); 
   } 
   else
   {
     S1.write(pos);
   }
    if(digitalRead(IR_exit)==HIGH)
   {
     S2.write(pos+90);
   } 
   else
   {
     S2.write(pos);
   }   
  
}