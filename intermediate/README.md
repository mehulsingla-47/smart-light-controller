# Automated Solar Tracking and Light-Responsive Servo Actuation System (Intermediate)

**Author:** Mehul Singla
**Branch:** COE
**Institute:** Thapar Institute of Engineering and Technology, Patiala

## Overview

This project builds on the beginner light controller by adding a **servo motor** that reacts to ambient light levels, forming a foundational prototype for applications like automated solar panel positioning or light-triggered mechanical actuation.

## Components Used

- Arduino Uno
- LDR (Light Dependent Resistor)
- LED
- Servo motor
- Resistors
- Breadboard
- Jumper wires

## Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| LDR (analog signal) | A0 |
| LED / Servo signal | Pin 9 |
| Servo power/ground | 5V / GND |

See `circuit_diagram.png` for the full wiring layout.

## How It Works

1. The Arduino reads the analog light level from the LDR on pin A0 and logs it to the Serial Monitor.
2. If the reading is below **920** (dark conditions):
   - Pin 9 is set HIGH.
   - The servo angle is mapped from the LDR reading, then immediately overridden to hold at a **fixed 5° position**, creating a binary light-triggered movement.
3. If the reading is at or above 920 (bright conditions), pin 9 is set LOW and the servo is not actuated.
4. A 10ms delay stabilizes the simulation loop.

## Code

See [`solar_tracking_servo.ino`](./solar_tracking_servo.ino)

## Note

The `servo_9.write(map(...))` line calculates a mapped angle but is immediately overridden by `servo_9.write(5)`, so the servo currently always snaps to 5° rather than tracking light intensity proportionally. This is a good next-step improvement for turning this into true light-proportional tracking.

## Simulation

Built and tested in Tinkercad Circuits.
