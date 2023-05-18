#include <Arduino_MKRIoTCarrier.h>

MKRIoTCarrier carrier;

float temperature, humidity, pressure;

void setup() {
  carrier.begin();
  Serial.begin(9600);

}

void loop() {
  temperature = carrier.Env.readTemperature();
  humidity = carrier.Env.readHumidity();
  pressure = carrier.Pressure.readPressure();
  
  Serial.println("Temperature: " + String (temperature )+ "\nHumidity: " + String (humidity ) + "\nPressure: " + String (pressure));
  delay(2000);
}
