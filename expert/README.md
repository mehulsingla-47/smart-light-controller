# Smart Street Lighting and Dual-Zone Motion Activation System (Expert)

**Author:** Mehul Singla
**Branch:** COE
**Institute:** Thapar Institute of Engineering and Technology, Patiala

## Overview

An energy-efficient street lighting system that combines ambient light sensing with **dual-zone motion detection**, so lights only activate where and when they're actually needed — reducing unnecessary power consumption.

## Components Used

- Arduino Uno
- LDR (Light Dependent Resistor)
- 2x PIR motion sensors
- 2x LEDs (representing two lighting zones)
- Resistors
- 2x Breadboards
- Jumper wires

## Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| LDR (analog signal) | A0 |
| PIR sensor 1 (Zone 1) | Pin 8 |
| PIR sensor 2 (Zone 2) | Pin 9 |
| LED / Light output 1 | Pin 10 |
| LED / Light output 2 | Pin 11 |

See `circuit_diagram.png` for the full wiring layout.

## How It Works

1. The Arduino reads the LDR value on A0 and the two PIR sensors on pins 8 and 9, logging all three to the Serial Monitor.
2. If the LDR reading is **≥ 920** (daylight), both zones stay off regardless of motion — daytime energy saving.
3. If the LDR reading is **< 920** (dark), motion in each zone independently controls its own light:
   - Both sensors active → both zones ON (pins 10 & 11 HIGH)
   - Only sensor 1 active → pin 11 ON, pin 10 OFF
   - Only sensor 2 active → pin 10 ON, pin 11 OFF
   - Neither active → both zones OFF
4. A 10ms delay stabilizes the simulation loop.

## Code

See [`dual_zone_street_lighting.ino`](./dual_zone_street_lighting.ino)

## Demo Video

[Watch the simulation demo](https://drive.google.com/file/d/1tfvqYFIjba_auCtawPK30iNff1AdXYIf/view?usp=drivesdk)

## Simulation

Built and tested in Tinkercad Circuits.
