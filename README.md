# Arduino Varied Codes

## Overview
This repository contains a collection of Arduino sketches for various laboratory practices and projects. The sketches demonstrate the use of sensors, modules, and various electronics components typically used in educational and research settings. These projects are intended to facilitate learning and experimentation with Arduino, covering a wide range of topics such as sensor data acquisition, signal processing, motor control, and more.

## Prerequisites
To successfully run the sketches in this repository, you'll need the following:
- **Arduino IDE**: Install the latest version of the Arduino IDE. You can download it from [here](https://www.arduino.cc/en/software).
- **Arduino Board**: Compatible boards include Arduino Uno, Mega, Nano, or any other variant.
- **Components**: Each project specifies the required components such as sensors (e.g., optical sensors, temperature sensors), actuators (e.g., motors, relays), and other electronic modules.

## Project Structure
The repository is structured into different folders, each representing a specific project or practice. Each folder contains:
- A **`README.md`** with a description of the project.
- The **Arduino sketch** (`.ino` file) for the project.
- A **circuit diagram** (if applicable) in `.png` or `.pdf` format.
- Any **external libraries** required by the sketch.

### Example Projects

#### 1. RPM Measurement using FC-03 Optical Sensor
- **Description**: Measures the RPM of a rotating object using an FC-03 optical sensor. The sensor detects pulses as slots on a rotating disk pass through the sensor, and the code calculates the RPM based on the pulse frequency.
- **Components**: FC-03 Optical Sensor, Arduino Board, Rotating Disk.
- **Learning Outcomes**: Understand the use of interrupts, pulse counting, and sensor integration with Arduino.

#### 2. Temperature Monitoring with DHT11
- **Description**: Reads the ambient temperature and humidity using a DHT11 sensor and displays the values on the serial monitor.
- **Components**: DHT11 Temperature Sensor, Arduino Board.
- **Learning Outcomes**: Learn how to interface with temperature and humidity sensors, and process sensor data in real-time.

#### 3. DC Motor Speed Control with PWM
- **Description**: Uses pulse-width modulation (PWM) to control the speed of a DC motor.
- **Components**: DC Motor, L298N Motor Driver, Arduino Board.
- **Learning Outcomes**: Learn how to use PWM to control motor speed and integrate motor drivers with Arduino.

### External Libraries
Some projects may require additional Arduino libraries. You can install these via the Arduino Library Manager or manually from the respective GitHub repositories. Instructions for installing these libraries are included in each project folder's `README.md`.

### Usage
1. **Clone the repository**: 
   ```bash
   git clone https://github.com/your-repository/arduino-varied-codes.git
