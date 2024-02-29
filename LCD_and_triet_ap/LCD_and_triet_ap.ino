#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

byte char1[] = {
  0b00000,
  0b00000,
  0b01110,
  0b10101,
  0b11011,
  0b10101,
  0b01110,
  0b00000
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.createChar(0,char1);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  int col = map(x,0,1023,0,15);
  lcd.setCursor(col,0);
  lcd.write((char)0);
  delay(100);
  lcd.clear();
}
