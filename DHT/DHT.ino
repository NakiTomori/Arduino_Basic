#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN 2
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Khoi tao ket noi voi cong noi tiep cua PC
  dht.begin(); //khoi tao ket noi voi cam bien DHT11
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  float f = dht.readTemperature(true);
  Serial.print(F("Do am la: "));
  Serial.print(h);
  Serial.println("%");
  Serial.print(F("Nhiet do °C:  "));
  Serial.println(t);
  Serial.print(F("Nhiet do °F: "));
  Serial.println(f);
  delay(5000);
}
