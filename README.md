# Reverse-Parking-System
Project Description:
The Ultrasonic Distance Measurement System is an Arduino-based project designed to measure distances using an HC-SR04 ultrasonic sensor. The system utilizes sound wave travel time to calculate distances accurately. When powered on, the sensor emits ultrasonic waves and measures the time it takes for the waves to bounce back after hitting an object. This duration is converted into distance measurements, which are displayed on the Serial Monitor and indicated visually using LED lights (green, yellow, and red) and an audible buzzer. 

Tech Stacks:
- Hardware: Arduino Uno R3 microcontroller, HC-SR04 ultrasonic sensor, LEDs (green, yellow, red), buzzer
- Software: Arduino IDE (Integrated Development Environment)
- Programming Language: C++
- Libraries: Standard Arduino libraries (e.g., `Ultrasonic.h` for HC-SR04 sensor)
  
Working:
1. The Arduino board initializes pins for the ultrasonic sensor, LEDs, and buzzer.
2. The sensor sends out ultrasonic waves and measures the time taken for the waves to bounce back.
3. Using the measured time, the Arduino calculates the distance to the object in front of the sensor.
4. Based on the calculated distance, the Arduino controls the LED lights to display different colors (green for safe, yellow for caution, red for danger) and triggers the buzzer for proximity alerts.
5. The distance measurements are also displayed on the Serial Monitor for monitoring and debugging purposes.
