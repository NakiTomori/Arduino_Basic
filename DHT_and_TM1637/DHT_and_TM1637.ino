#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN 2
#include "TM1637.h"
#define CLK 7//pins definitions for TM1637 and can be changed to other ports
#define DIO 8
TM1637 tm1637(CLK,DIO);
DHT dht(DHTPIN,DHTTYPE);
void setup()
{
  Serial.begin(9600);
  dht.begin(); 
  tm1637.init();
  tm1637.set(BRIGHT_TYPICAL);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;
}
void loop()
{
  int8_t c = 12;
  int t = dht.readTemperature();
  int f = dht.readHumidity();
  int a,b;
  a = f/10;
  b = f%10;
  tm1637.display(0,a);
  tm1637.display(1,b);
  tm1637.display(2,c);
  //tm1637.display(3,(char)C); 
  //Serial.print(F("Nhiet do °C:  "));
  Serial.println(f);
  delay(100);
}