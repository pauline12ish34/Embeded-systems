/*
 The circuit:
 * LCD RS pin to digital pin 9
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 7
 * LCD D5 pin to digital pin 6
 * LCD D6 pin to digital pin 5
 * LCD D7 pin to digital pin 4
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3 of LCD)
*/
// include the library code:
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(9, 8, 4, 5, 6, 7);
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2); 
  lcd.print("I'm learning"); 
  lcd.setCursor(0, 1);
  lcd.print("Embedded Systems");
}
void loop(){}
