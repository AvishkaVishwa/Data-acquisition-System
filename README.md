## Data Acqusition System

# Greenhouse Monitoring System

## **Project Overview**
The Greenhouse Monitoring System is an IoT-based solution that monitors and maintains optimal environmental conditions for greenhouse plants. This project utilizes Arduino Uno to collect data from multiple sensors and displays real-time information on a LabVIEW interface, enabling automatic control of fans and lights to ensure suitable conditions.

---

## **Features**
- Real-time monitoring of CO2, soil moisture, light intensity, temperature, and humidity.
- Automatic control of fans and lights based on sensor readings.
- Data visualization and control through LabVIEW.
- Modular and scalable design for easy enhancements.

---
## Testing with A potentiometer as an analog sensor

# **Front_End**

<img src ="/Assets/Vi2.1.png">

# **Block_Diagram**

<img src ="/Assets/VI2.png">

## **testing**

https://github.com/user-attachments/assets/c2f45d7e-dc11-44e3-8d79-2cd506b800e0

## **Components**
### **Hardware**
- Arduino Uno
- MQ-135 (CO2 Sensor)
- Capacitive Soil Moisture Sensor
- LDR (Light-Dependent Resistor)
- DHT11 (Temperature and Humidity Sensor)
- Fan (Actuator)
- Light Bulb (Actuator)
- Power supply (5V DC)
- Connecting wires and breadboard

### **Software**
- Arduino IDE
- LabVIEW
  - LINX Toolkit for Arduino communication

---

## **System Architecture**
1. Sensors collect environmental data.
2. Arduino Uno processes the sensor readings and communicates them to LabVIEW via serial.
3. LabVIEW visualizes the data and sends control signals to the actuators based on predefined thresholds.

---


## **Final Product**

<img src ="/Assets/Block diagram.png">

<img src ="/Assets/Front end.png">


## **Installation and Setup**
1. **Arduino Configuration**:
   - Connect the sensors to the respective analog and digital pins.
   - Connect the actuators via relays to digital output pins.
2. **LabVIEW**:
   - Install LabVIEW and the LINX Toolkit.
   - Open the provided `.vi` file.
3. **Hardware Connections**:
   - Soil Moisture Sensor: Analog Pin A0
   - MQ-135: Analog Pin A1
   - LDR: Analog Pin A2
   - DHT11: Digital Pin 2
   - Fan: Digital Pin 3
   - Light: Digital Pin 4

---

## **Threshold Conditions**
- **Fan Activation**: If CO2 > 800 PPM or temperature > 30°C.
- **Light Activation**: If light intensity < 300 Lux.
- **Pump Activation**: If soil moisture < 40%.

---

## **Usage**
1. Upload the Arduino code to the Arduino Uno using Arduino IDE.
2. Connect the Arduino to the PC running LabVIEW.
3. Start the LabVIEW program to begin monitoring and controlling.
4. Stop the system using the "Stop" button in LabVIEW.

---

## **Future Enhancements**
- Add wireless communication for remote monitoring.
- Integrate additional sensors like pH and water level sensors.
- Enable cloud data logging for long-term analysis.

---

## **Author**
- Avishka Vishwajith

<a href ="www.linkedin.com/in/avishka-vishwa">Linkedin</a>
---

## **References**
- Arduino Uno Documentation
- LINX Toolkit User Guide
- Sensor Datasheets (MQ-135, DHT11, etc.)
- Ni Commiunity
