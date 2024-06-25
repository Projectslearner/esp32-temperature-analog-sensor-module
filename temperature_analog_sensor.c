/*
   Project name: ESP32 Analog Temperature Sensor (LM35)
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-analog-temperature-sensor-lm35
*/

// Analog pin connected to the LM35 temperature sensor
const int analogPin = 34; // GPIO 34 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the raw analog value from the temperature sensor
  int rawValue = analogRead(analogPin);

  // Convert the analog value to temperature in degrees Celsius
  float temperatureC = (rawValue / 4095.0) * 3300.0 / 10.0; // LM35 scaling factor

  // Print the temperature to Serial Monitor
  Serial.print("Analog Value: ");
  Serial.print(rawValue);
  Serial.print(", Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Delay before the next temperature reading
}
