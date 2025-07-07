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
| 4x AA Battery Pack     | 1        |
| Servo Motor (optional) | 1        |

---

### ⚙️ Working Principle

The **Auto_guide_bot** operates using an ultrasonic sensor (HC-SR04) that continuously measures the distance between the bot and any obstacle in front of it.

1. The ultrasonic sensor emits a sound wave via the **Trigger** pin.
2. The wave reflects off any nearby object and is received by the **Echo** pin.
3. The Arduino calculates the **time taken** for the echo to return and converts it into a **distance value**.
4. If the distance is **greater than 30 cm**, the bot moves forward.
5. If the distance is **less than or equal to 30 cm**, the bot:
   - Stops
   - Turns left or right to avoid the obstacle
   - Resumes forward motion when the path is clear

This process repeats continuously, allowing the bot to navigate autonomously and avoid collisions in real-time.


---

### 🔌 Input Behavior

The **Auto_guide_bot** uses an ultrasonic distance sensor (HC-SR04) as its primary input device. This sensor enables the bot to detect obstacles in its path and make movement decisions accordingly.

#### 📥 Inputs:
- **Ultrasonic Sensor (HC-SR04)**
  - **Trigger Pin**: Sends out an ultrasonic pulse.
  - **Echo Pin**: Receives the reflected pulse after it bounces off an obstacle.
  - The Arduino calculates the time difference to determine the distance to the object.

---

### 🚦 Behavior Based on Input:

| Measured Distance           | Bot Behavior                                  |
|-----------------------------|-----------------------------------------------|
| Greater than 30 cm          | Move forward continuously                     |
| Less than or equal to 30 cm | Stop → Turn (left or right) → Resume forward |

- The **threshold distance (30 cm)** is customizable in the code.
- The robot functions **autonomously**, reacting in real time to sensor input.

---

### 🛠️ Optional Inputs for Expansion:
- **Button Input**: To manually start or stop the bot.
- **GPS Module (e.g., NEO-6M)**: To track the bot’s real-time location or guide it along a specific route.
- **Servo Motor**: To rotate the ultrasonic sensor for wider obstacle detection coverage.








