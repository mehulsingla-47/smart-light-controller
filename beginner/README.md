# Smart Dusk-to-Dawn Light Controller (Beginner)

**Author:** Mehul Singla
**Roll No.:** 1025030078
**Branch:** COE
**Institute:** Thapar Institute of Engineering and Technology, Patiala

## Overview

This project automatically turns an LED on when it gets dark and off when it's light, mimicking a smart streetlight or nightlight. It uses a Light Dependent Resistor (LDR) to sense ambient light and an LED as the output.

## Components Used

- Arduino Uno
- LDR (Light Dependent Resistor)
- LED
- 2x Resistors
- Breadboard
- Jumper wires

## Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| LDR (analog signal) | A0 |
| LED (anode via resistor) | Pin 9 |
| GND / 5V | Power rail |

See `circuit_diagram.png` for the full wiring layout.

## How It Works

1. The Arduino continuously reads the analog voltage from the LDR on pin A0.
2. This value (0–1023) is printed to the Serial Monitor for calibration/debugging.
3. If the reading falls below a threshold of **920** (indicating darkness), the LED on pin 9 is turned **ON**.
4. If the reading is at or above the threshold (daylight), the LED is turned **OFF**.
5. A 10ms delay stabilizes the loop.

## Code

See [`beginner_light_controller.ino`](./beginner_light_controller.ino)

## Simulation

Built and tested in Tinkercad Circuits.
