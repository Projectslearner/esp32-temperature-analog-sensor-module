# ESP32 Analog Temperature Sensor (LM35) Project

### Project Overview
The ESP32 Analog Temperature Sensor (LM35) project demonstrates how to read temperature using an LM35 analog temperature sensor with an ESP32 microcontroller. LM35 is widely used due to its linear output and ease of interface with microcontrollers, making it suitable for temperature monitoring in various applications.

### Components Needed
- **ESP32 Microcontroller**: Controls and processes temperature readings.
- **LM35 Temperature Sensor**: Provides analog voltage output proportional to temperature.
- **Jumper Wires**: Connects the LM35 sensor to the ESP32.
- **Breadboard**: Optional, for organizing circuit connections.

### Block Diagram

### Circuit Setup
1. **Connecting the LM35 Sensor to ESP32:**
   - **Analog Input (analogPin)**: Connect the LM35 output pin to GPIO 34 on the ESP32.
   - **Power Supply**: Provide power (typically 5V or 3.3V) to the LM35 sensor and connect its ground pin to the ESP32 ground.

### Instructions
1. **Setup:**
   - Initialize Serial communication using `Serial.begin(9600)` for debugging.
   - Define `analogPin` (GPIO 34) as an input pin for reading analog values.

2. **Operation:**
   - **Reading Temperature:**
     - Use `analogRead(analogPin)` to obtain the raw analog value from the LM35 sensor.
     - Convert the raw analog value to temperature in degrees Celsius using the formula provided in the code.

3. **Considerations:**
   - **Calibration:** Ensure the LM35 sensor is correctly calibrated for accurate temperature readings.
   - **Power Supply:** Use a stable power source for the LM35 sensor to avoid inaccurate readings due to voltage fluctuations.

### Applications
- **Environmental Monitoring:** Monitor temperature in indoor and outdoor environments.
- **HVAC Systems:** Control heating, ventilation, and air conditioning based on room temperature.
- **Industrial Automation:** Monitor temperature in machinery and equipment.

### Useful Links
🌐 [ProjectsLearner - ESP32 Analog Temperature Sensor (LM35)](https://projectslearner.com/learn/esp32-analog-temperature-sensor-lm35)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
