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

<img src ="/USB to TTL Converter/USB to TTL.png">

## Setup Instructions

### 1. Hardware Setup
- **Connect the STM32** to the custom-designed USB to TTL converter using the TX and RX pins.
- Ensure all decoupling capacitors are placed correctly for power supply stability.
- Verify the LED indicators for data transmission and reception.

### 2. Driver Installation
- **Install CH340 drivers** on your host computer to recognize the USB to TTL converter. You can find the drivers [here](https://sparks.gogo.co.nz/ch340.html).

### 3. STM32 Firmware
- Write and upload the firmware to the STM32 using your preferred IDE (like **STM32CubeIDE** or **Keil uVision**). The firmware should be configured to communicate via UART.

