# 60-Day IoT & Robotics Challenge 🚀

Welcome to my public grind — 60 days of building, learning, and sharing everything IoT & Robotics.

## 📅 Day 1: Blink Project
- **Goal:** Get dev environment set up and blink an LED using [Arduino]
- **Skills Covered:** Digital output, delay, basic wiring
- **Tech Stack:** Arduino IDE / PlatformIO, C++
- **Project File:** 
['day1_blink.cpp'](.archivefiles/day1_blink.cpp)

Follow my journey:  
🧠 From noob to innovator  
📡 From wires to wisdom  
🤖 From blink to bots

#BuildInPublic #IoT #RoboticsChallenge

---

### 🚀 Day 2: Pushbutton-Controlled LED

**Goal:** Control an LED using a pushbutton.  
**Board:** Arduino Uno  
**Concepts Covered:** Digital input, conditional logic, debouncing (optional upgrade)

#### 🧰 Components Used:
- 1x LED  
- 1x 220Ω resistor  
- 1x Pushbutton  
- 1x 10kΩ resistor  
- Jumper wires & breadboard  

#### 🧠 Code Summary:
- Reads button state from digital pin 2
- If pressed, lights up LED on pin 13
- Else, LED stays off

#### 📁 File:
[`day2.cpp`](./src/day2.cpp)

---

🚦 Day 3: Traffic Light System
Simulated a traffic light using three LEDs—classic red, yellow, and green—with timed sequences for real-world feel.

🔧 Components
Arduino Uno

Red LED (x1)

Yellow LED (x1)

Green LED (x1)

220Ω Resistors (x3)

Breadboard + jumper wires

⚡ Pin Connections

LED	Arduino Pin
Red	8
Yellow	9
Green	10
🧠 Logic

Yellow LED turns on for 2 seconds (Caution)

Red LED turns on for 5 seconds (Stop)

Green LED turns on for 5 seconds (Go)


Cycle repeats forever