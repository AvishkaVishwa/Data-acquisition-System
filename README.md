# Data Acquisition System

## Project Overview
This project is a Data Acquisition (DAQ) system built using an STM32 microcontroller and a custom-designed USB to TTL converter circuit featuring the CH340 IC. The DAQ system captures data from sensors connected to the STM32, and displays it using ** software on a computer. The project is designed to be a reliable and cost-effective solution for real-time data acquisition and visualization.

## Features
- **Custom USB to TTL Interface**: Uses CH340 IC for reliable communication.
- **Real-Time Data Acquisition**: Collects and processes sensor data with STM32.

## Schematic Design
The schematic for the USB to TTL converter circuit using the CH340 IC is as shown below:
What is CH340G IC?
Buy CH340G USB To Serial Converter Chip - SOP-16 - KTRON India
CH340G USB to Serial Converter chip is being used in various devices to convert the USB Interface to UART signal, for connection with MCU. It supports Full Speed USB 2.0. And it sports a Full Duplex Serial UART Interface, and supports baud rate from 50 bps to 2 Mbps.

<img src ="/USB to TTL Converter/USB to TTL.png"><img src ="/USB to TTL Converter/schematic.png">
<img src ="/USB to TTL Converter/Screenshot 2024-10-29 230903.png">
## Setup Instructions

### 2. Driver Installation
- **Install CH340 drivers** on your host computer to recognize the USB to TTL converter. You can find the drivers [here](https://sparks.gogo.co.nz/ch340.html).


