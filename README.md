# STM32 Data Acquisition System

## Project Overview
This project is a Data Acquisition (DAQ) system built using an STM32 microcontroller and a custom-designed USB to TTL converter circuit featuring the CH340 IC. The DAQ system captures data from sensors connected to the STM32, and displays it using **LabVIEW** software on a computer. The project is designed to be a reliable and cost-effective solution for real-time data acquisition and visualization.

## Features
- **Custom USB to TTL Interface**: Uses CH340 IC for reliable communication.
- **Real-Time Data Acquisition**: Collects and processes sensor data with STM32.
- **LabVIEW Visualization**: Displays acquired data using LabVIEW software for real-time monitoring.
- **Status LEDs**: Indicates data transmission and reception using LEDs.

## Schematic Design
The schematic for the USB to TTL converter circuit using the CH340 IC is as shown below:

![Schematic](USB to TTL.png)

## Setup Instructions

### 1. Hardware Setup
- **Connect the STM32** to the custom-designed USB to TTL converter using the TX and RX pins.
- Ensure all decoupling capacitors are placed correctly for power supply stability.
- Verify the LED indicators for data transmission and reception.

### 2. Driver Installation
- **Install CH340 drivers** on your host computer to recognize the USB to TTL converter. You can find the drivers [here](https://sparks.gogo.co.nz/ch340.html).

### 3. STM32 Firmware
- Write and upload the firmware to the STM32 using your preferred IDE (like **STM32CubeIDE** or **Keil uVision**). The firmware should be configured to communicate via UART.

### 4. LabVIEW Setup
- Open LabVIEW and configure a VISA serial interface to communicate with the STM32 over the recognized COM port.
- Create a basic LabVIEW VI to read and visualize the incoming data.

## Software Requirements
- **STM32CubeIDE** or **Keil uVision** (for STM32 firmware development).
- **LabVIEW** (for data visualization).
- **VISA Drivers** for LabVIEW to enable serial communication.

## Hardware Requirements
- STM32 Microcontroller
- CH340 USB to TTL Converter Circuit
- USB Micro B Connector
- LEDs for TX/RX status indication
- Decoupling Capacitors (10 µF, 100 nF)
- Crystal (12 MHz) for CH340

## Getting Started
1. **Clone the repository**:
   ```bash
   git clone https://github.com/YourUsername/STM32_DAQ_Project.git
