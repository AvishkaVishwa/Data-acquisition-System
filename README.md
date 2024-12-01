# Data Acquisition System
# Greenhouse Monitoring System - Testing Phase

This project is an IoT-based greenhouse monitoring system that uses LabVIEW and Arduino Uno for real-time data acquisition, control, and visualization. Currently, the system is in the **testing phase**, and the final setup will integrate multiple sensors to monitor and optimize greenhouse conditions.

---

## Project Overview
The goal of this project is to build a robust greenhouse monitoring system that tracks key environmental parameters such as:
- **Soil moisture**
- **Air quality (using MQ-135)**
- **Temperature and humidity (using DHT11)**

The system uses **LabVIEW** for real-time data visualization and threshold-based control. It is designed to automate decision-making processes, such as triggering irrigation systems, ventilation, and other actuators, to maintain optimal growing conditions.

---

## Testing Phase Setup
The current testing phase simulates sensor data acquisition and control using a **temperature sensor**. The system lights up an LED when the temperature exceeds a user-defined threshold.

## LabVIEW 1st Test Using POT as an Analog Sensor

## Block_Diagram and UI 
<img src ="/Assets/Vi2.1.png">

<img src ="/Assets/VI2.png">

https://github.com/user-attachments/assets/7ba26e8f-d62d-4c59-b77a-43d808ff6f97

This prototype tests the feasibility of integrating sensors with LabVIEW via Arduino Uno using the LINX Toolkit.

---

### Hardware Components
1. **Arduino Uno**: Microcontroller for data acquisition and actuator control.
2. **Testing Sensor (Analog Input)**: Simulates real temperature data during the testing phase.
3. **LED**: Visual indication when a threshold value is exceeded.
4. **Final Sensors for Integration**:
   - Soil Moisture Sensor
   - MQ-135 Air Quality Sensor
   - DHT11 Temperature and Humidity Sensor
5. **Connection Components**:
   - Resistors
   - Jumper Wires
   - Breadboard or PCB

---

### Software Components
1. **LabVIEW**: Main platform for real-time monitoring and control.
2. **LINX Toolkit**: Enables communication between LabVIEW and Arduino.
3. **Arduino IDE**: Used for initial configuration and uploading LINX firmware to the Arduino.

---

### Features
- **Real-Time Monitoring**: Visualize sensor data in LabVIEW with a thermometer widget.
- **Threshold-Based Control**: Trigger an LED when the temperature exceeds a specific value.
- **Modular Design**: Easily integrate additional sensors in the future.
- **User-Friendly Interface**: LabVIEW interface for monitoring and manual threshold adjustments.

---

### Block Diagram
#### Current Testing Phase Workflow:
1. Analog sensor data is read through **Analog Pin A0** of Arduino Uno.
2. The data is scaled in LabVIEW to represent temperature in Celsius.
3. A comparison function checks if the temperature exceeds the threshold value.
4. If the condition is true, LabVIEW sends a digital write signal to light up the LED.

#### Future Design Workflow:
1. Data from soil moisture, MQ-135, and DHT11 sensors will be acquired.
2. LabVIEW will process and display the data in real-time.
3. Thresholds for soil moisture, air quality, and temperature will trigger automated actions such as turning on a water pump, fan, or light.

---

### LabVIEW Interface
#### Block Diagram:
Includes LINX Analog Read, conversion to temperature, comparison with threshold, and LINX Digital Write for LED control.

#### Front Panel:
Features a thermometer widget for temperature display, controls for serial port selection, analog channel input, and a dynamic threshold value.

---

## Future Enhancements
- **Sensor Integration**:
  - Soil moisture sensor for irrigation monitoring.
  - MQ-135 for detecting CO2 and harmful gases.
  - DHT11 for precise temperature and humidity data.
- **Actuator Control**:
  - Relay-based water pump control for irrigation.
  - Fans or vents for temperature and air quality management.
- **Advanced Visualization**:
  - Add multi-sensor graphs and logging capabilities in LabVIEW.
- **IoT Integration**:
  - Implement Blynk or MQTT for remote monitoring and control.

---

## Getting Started

### Hardware Setup
1. Connect the Arduino Uno to your computer via USB.
2. Wire the test sensor to **Analog Pin A0** of the Arduino.
3. Connect an LED with a resistor to a digital pin (e.g., Pin 13).

### Software Setup
1. Install **LabVIEW** and the **LINX Toolkit**.
2. Configure the Arduino with the LINX firmware using LabVIEW.
3. Open the LabVIEW VI file (`Greenhouse_Monitoring_Test.vi`) and select the correct serial port.

---

## How to Run the System
1. Upload the LINX firmware to the Arduino via LabVIEW.
2. Open the LabVIEW VI file.
3. Select the appropriate **Serial Port** and **Analog Input Channel**.
4. Adjust the **Threshold Value** dynamically from the LabVIEW interface.
5. Observe the thermometer widget and LED response as the temperature changes.

---

## Screenshots
### Block Diagram
_Add a screenshot of your LabVIEW block diagram here._

### Front Panel
_Add a screenshot of your LabVIEW front panel here._

---

## Project Status
- **Current Phase**: Testing with a simulated temperature sensor.
- **Next Phase**: Integration of soil moisture, MQ-135, and DHT11 sensors with full actuator control.

---

## License
This project is licensed under the MIT License.

---

## Contributing
Feel free to fork the repository, raise issues, or submit pull requests to improve this project.
