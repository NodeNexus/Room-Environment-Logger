#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT22
#define LDR A0
#define MQ A1

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int light = analogRead(LDR);
  int air = analogRead(MQ);
  
  Serial.printf("T: %.1f°C  H: %.1f%%  Light: %d  Air: %d\n", t, h, light, air);
  delay(2000);
}
