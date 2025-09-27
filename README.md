# LED Brightness Control using PWM on Arduino

This project demonstrates two ways to control LED brightness using **PWM (Pulse Width Modulation)** on Arduino:

1. **Automatic Fading** (LED fades in and out using code).  
2. **Manual Control with Potentiometer** (LED brightness depends on knob rotation).

---

## 🔧 Requirements
- Arduino Uno (or compatible board)
- 1 x LED
- 1 x 220Ω resistor
- 1 x Potentiometer (10kΩ recommended)
- Breadboard & jumper wires

---

## ⚡ About PWM
- Only **PWM pins** can control LED brightness.  
- On Arduino Uno, PWM pins are marked with a **`~` (tilde)** before the pin number (e.g., `~3`, `~5`, `~6`, `~9`, `~10`, `~11`).  
- Instead of `digitalWrite()`, we use `analogWrite(pin, value)` where:
  - `pin` = PWM pin number  
  - `value` = brightness (0 = OFF, 255 = fully ON)
