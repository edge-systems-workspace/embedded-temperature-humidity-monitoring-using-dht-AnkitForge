#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author Ankit Patel
 * @date 22/02/2026
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHT11);
void setup(){
    Serial.begin(9600);
    dht.begin();
}

void loop() {
    float h=dht.readHumidity();
    float t=dht.readTemperature();

