#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

byte mychar2[] = {
  0b11100,
  0b10100,
  0b11111,
  0b00010,
  0b10111,
  0b11111,
  0b10100,
  0b10100
};

byte mychar[] = {
    0b00100,
    0b01010,
    0b00100,
    0b10101,
    0b01110,
    0b00100,
    0b01010,
    0b10001
  };

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.createChar(0,mychar); //Ghi bieu do vao vi tri dau tien cua CGRAM
  lcd.createChar(1,mychar2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Welcome to VJUA");
  lcd.setCursor(2, 1);
  lcd.write((char)0);
  lcd.setCursor(6, 1);
  lcd.write((char)1);
  //lcd.write((char)183);
  //lcd.write((char)66);
  //lcd.print("Gaitling Gun");
  delay(1000);
  //lcd.home();
}
