# L293D H-Bridge Motor Driver

This repository contains a simulation of a DC motor driver circuit built in Tinkercad using the L293D integrated circuit.

## 🛠️ Components Used
- L293D Motor Driver IC
- Arduino Uno (for logic signals)
- DC Motor
- Push buttons / Switches
- 10kΩ Resistors (Pull-down)

## ⚙️ Features
- **Direction Control:** Uses inputs `1A` and `2A` to change the polarity and direction of the motor.
- **Speed Control:** Uses PWM (Pulse Width Modulation) on the `1,2EN` pin to regulate motor speed.
- **Active Braking:** Implemented logic to stop the motor by shorting both terminals (1A and 2A set to HIGH or LOW simultaneously).

## 🔌 Pinout Connections
- **Arduino Pin 2** -> L293D `1A` (Direction)
- **Arduino Pin 3** -> L293D `2A` (Direction)
- **Arduino Pin 9** -> L293D `1,2EN` (Speed/PWM)
- **L293D `1Y` and `2Y`** -> DC Motor Terminals
- **VCC1** -> 5V (Logic)
- **VCC2** -> External Power (Motor)

## 📸 Simulation
*(Screenshots of the Tinkercad circuit will be added here)*
