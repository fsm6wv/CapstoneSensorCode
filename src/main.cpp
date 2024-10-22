#include "DHT.h"
#include <ESP32AnalogRead.h>

#define DHTPIN 2       // Define the pin used to connect the sensor
#define DHTTYPE DHT11  // Define the sensor type
DHT dht(DHTPIN, DHTTYPE);  // Create a DHT object
ESP32AnalogRead adc;

void setup() {
  // Initialize the serial communication
  // Serial.begin(9600);
  // Serial.println(F("DHT11 test!"));
  // dht.begin();  // Initialize the DHT sensor
  adc.attach(3);
	Serial.begin(9600);
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  // // Reading temperature or humidity takes about 250 milliseconds!
  // // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  // float h = dht.readHumidity();
  // // Read temperature as Celsius (the default)
  // float t = dht.readTemperature();
  // // Read temperature as Fahrenheit (isFahrenheit = true)
  // float f = dht.readTemperature(true);

  // // Check if any reads failed and exit early (to try again).
  // // if (isnan(h) || isnan(t) || isnan(f)) {
  // //   Serial.println(F("Failed to read from DHT sensor!"));
  // //   return;
  // // }

  // // Compute heat index in Fahrenheit (the default)
  // float hif = dht.computeHeatIndex(f, h);
  // // Compute heat index in Celsius (isFahreheit = false)
  // float hic = dht.computeHeatIndex(t, h, false);

  // // Print the humidity, temperature, and heat index values to the serial monitor
  // Serial.print(F("Humidity: "));
  // Serial.print(h);
  // Serial.print(F("%  Temperature: "));
  // Serial.print(t);
  // Serial.print(F("°C "));
  // Serial.print(f);
  // Serial.print(F("°F  Heat index: "));
  // Serial.print(hic);
  // Serial.print(F("°C "));
  // Serial.print(hif);
  // Serial.println(F("°F"));
  Serial.println("Voltage = "+String(adc.readVoltage()));
}