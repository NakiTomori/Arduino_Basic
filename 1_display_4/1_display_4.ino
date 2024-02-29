#include "TM1637.h"
#define CLK 7//pins definitions for TM1637 and can be changed to other ports
#define DIO 8
TM1637 tm1637(CLK,DIO);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tm1637.init();
  tm1637.set(BRIGHT_TYPICAL);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  int a,b,c,d;
  a = x/1000;
  b = (x - a*1000)/100;
  c = (x - a*1000 - b*100)/10;
  d = (x - a*1000 - b*100 - c*10);
  int8_t TimeDisp[] = {a,b,c,d};
  tm1637.display(TimeDisp);
  Serial.println(x);
  delay(100);
}
