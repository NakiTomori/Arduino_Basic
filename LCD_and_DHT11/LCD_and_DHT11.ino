#include <Wire.h>
#include "rgb_lcd.h"
#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN 2
DHT dht(DHTPIN,DHTTYPE);
rgb_lcd lcd;

byte char1[] = {
  0b00000,
  0b11100,
  0b10100,
  0b11100,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600); //Khoi tao ket noi voi cong noi tiep cua PC
  dht.begin(); //khoi tao ket noi voi cam bien DHT11
  lcd.createChar(0,char1);
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  lcd.setCursor(0,0);
  lcd.print("Do am la: ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.write((char)0);
  lcd.print("C: ");
  lcd.print(t);
  delay(500);
}

