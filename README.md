# LED Fading using PWM on Arduino

This project demonstrates how to fade an LED in and out slowly using **PWM (Pulse Width Modulation)** on Arduino.

---

## 🔧 Requirements
- Arduino Uno (or compatible board)
- 1 x LED
- 1 x 220Ω resistor
- Breadboard & jumper wires

---

## ⚡ About PWM
- Only **PWM pins** can control LED brightness.  
- On Arduino Uno, these are usually marked with a **`~` (tilde)** before the pin number (e.g., `~3`, `~5`, `~6`, `~9`, `~10`, `~11`).  
- Instead of `digitalWrite()`, we use `analogWrite(pin, value)` where:
  - `pin` = PWM pin number
  - `value` = brightness (0 = OFF, 255 = fully ON)

---

## 🔌 Circuit
1. Connect the **anode (+)** of LED to PWM pin `~9` via a **220Ω resistor**.  
2. Connect the **cathode (–)** of LED to **GND**.  

---
