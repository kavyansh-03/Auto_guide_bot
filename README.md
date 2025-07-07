# 🤖 Auto_guide_bot

**Auto_guide_bot** is an autonomous obstacle-avoiding robot built using Arduino. It is designed to navigate its environment by detecting obstacles and making directional decisions without human control. This project serves as a beginner-friendly introduction to embedded systems, robotics, and sensor-based navigation.

---

## 🛠️ Features

- 🧠 Autonomous navigation using ultrasonic sensor
- ⚙️ Motor control using L293D motor driver
- ↩️ Dynamic turning (left/right) based on obstacle detection
- 🔁 Continuous real-time decision-making

---

## 🔧 Components Used

| Component               | Quantity |
|------------------------|----------|
| Arduino Uno            | 1        |
| BO Motor + Wheels      | 2        |
| L293D Motor Driver IC  | 1        |
| HC-SR04 Ultrasonic Sensor | 1     |
| Jumper Wires           | Several  |
| Breadboard             | 1        |
| 4x AA Battery Pack     | 1        |
| Servo Motor (optional) | 1        |

---

## ⚙️ Working Principle

1. The ultrasonic sensor (HC-SR04) measures the distance to objects in front.
2. If the distance is below a predefined threshold (e.g., 20 cm), the bot:
   - Stops
   - Turns either left or right
   - Then resumes forward movement
3. If no obstacle is detected, the bot continues moving forward.

---

## 📁 Repository Structure






