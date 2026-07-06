# Smart Light Controller — ELC Activity Series

**Author:** Mehul Singla
**Branch:** COE
**Institute:** Thapar Institute of Engineering and Technology, Patiala

This repository contains three progressively advanced Arduino projects built for an ELC (Extra Learning Component) activity, all centered on the theme of **ambient light–based automation**.

## Projects

| Level | Project | Description |
|-------|---------|--------------|
| 🟢 [Beginner](./beginner) | Smart Dusk-to-Dawn Light Controller | LDR-controlled LED that turns on at night and off during the day |
| 🟡 [Intermediate](./intermediate) | Automated Solar Tracking and Light-Responsive Servo Actuation | LDR-controlled servo motor that reacts to light levels |
| 🔴 [Expert](./expert) | Smart Street Lighting and Dual-Zone Motion Activation | LDR + two PIR sensors controlling two independent lighting zones |

## Common Tech Stack

- **Hardware:** Arduino Uno, LDR, PIR sensors, LEDs, servo motor, resistors, breadboards
- **Simulation:** [Tinkercad Circuits](https://www.tinkercad.com/)
- **Language:** Arduino C++

## How to Use

Each subfolder contains:
- `.ino` file — the Arduino sketch
- `circuit_diagram.png` — the wiring diagram
- `README.md` — a detailed explanation of that specific project

To run any project:
1. Open the `.ino` file in the [Arduino IDE](https://www.arduino.cc/en/software) or paste it into a new [Tinkercad Circuits](https://www.tinkercad.com/) sketch.
2. Wire the circuit as shown in the corresponding `circuit_diagram.png`.
3. Upload/simulate and open the Serial Monitor (9600 baud) to observe sensor readings.

## License

This project is shared for educational purposes. Feel free to fork and build on it.
