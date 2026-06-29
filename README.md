# Embedded-Parking-Assistant-using-Arduino

## Overview

The Embedded Parking Assistant is an Arduino-based embedded systems project designed to assist drivers while parking by detecting the distance between a vehicle and nearby obstacles.

The system uses an HC-SR04 ultrasonic sensor to measure distance and provides real-time visual and audible feedback through LEDs, a buzzer, and a 16×2 LCD display.

This project was developed using the Arduino IDE and simulated in Proteus Design Suite.

---

## Features

* Real-time obstacle distance measurement
* Green LED indicates a safe parking distance
* Yellow LED indicates a warning zone
* Red LED and buzzer indicate danger when the vehicle is too close
* 16×2 LCD displays the measured distance and parking status
* Simple embedded control logic using Arduino

## Hardware Components

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* 16×2 LCD Display
* Green LED
* Yellow LED
* Red LED
* Active Buzzer
* 220 Ω Resistors
* Connecting Wires


## Software Used

* Arduino IDE (C++)
* Proteus Design Suite

## How It Works

1. The Arduino sends a trigger pulse to the HC-SR04 ultrasonic sensor.
2. The sensor measures the time taken for the ultrasonic wave to reflect back.
3. The Arduino calculates the distance between the sensor and the obstacle.
4. Depending on the measured distance:

   * Safe Distance: Green LED ON
   * Warning Zone: Yellow LED ON
   * Danger Zone: Red LED and Buzzer ON
5. The LCD displays the measured distance and system status.


## Results

The following modules were successfully implemented and tested:

* LCD interface
* LED indicators
* Buzzer alert system
* Embedded control logic
* Proteus circuit design

## Simulation Note

During simulation, the HC-SR04 ultrasonic sensor model consistently returned an echo duration of zero despite extensive troubleshooting, including rebuilding the circuit, verifying wiring, testing the control logic independently, and validating the sensor configuration.

The system logic was verified by testing multiple distance values directly in software, confirming that the LCD, LEDs, buzzer, and decision-making algorithm function correctly.

Future work includes validating the sensing module using compatible hardware or an alternative simulation model.

## Future Improvements

* Validate the project on physical Arduino hardware
* Add Bluetooth monitoring
* Include data logging
* Add OLED display support
* Integrate a servo-controlled parking gate
* Improve the user interface


## Skills Demonstrated

* Embedded Systems Programming
* Arduino Development
* C/C++ Programming
* Sensor Interfacing
* LCD Interfacing
* Digital Input/Output Control
* Proteus Circuit Simulation
* Embedded Systems Debugging

## Author

**Amba Etta**

Computer Engineering Student

Passionate about Embedded Systems, IoT, and Hardware-Software Integration.
