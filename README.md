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


DAY 4: Fading LED with PWM
Today’s vibe: smooth transitions. No more digital stiffness—just analog energy using Pulse Width Modulation (PWM). We made the LED breathe.

🔧 Components Used
Arduino Uno

1 x LED

1 x 220Ω resistor

Breadboard + jumper wires

⚙️ Circuit Connections

Component	Arduino Pin
LED (+)	D9 (PWM)
LED (–)	GND (via 220Ω resistor)
⚠️ Important: Make sure to use a PWM-capable pin (D3, D5, D6, D9, D10, or D11 on Uno).

🧠 How It Works
PWM (Pulse Width Modulation) lets us simulate analog voltage using fast on-off pulses.

The LED’s brightness is controlled by the duty cycle—how long it stays ON vs OFF.

We ramp brightness up to 255 (full glow), then fade it back down to 0 (off), like a soft breath.


🎵 Day 5: Buzzer Sound + Tone Control
Today, the silence broke. The circuit spoke.
No more blinking—we gave the board a voice.
Using a passive piezo buzzer, we tapped into sound, rhythm, and pure vibe.

🔧 Components Used
Arduino Uno

1 x Passive piezo buzzer

1 x 100Ω resistor (optional)

Breadboard + jumper wires

⚙️ Circuit Wiring

Component	Arduino Pin
Buzzer (+)	D8
Buzzer (–)	GND
Passive buzzers need frequency input to make sound—so we control the pitch using tone().

🧠 What I Learned
Using tone() to generate specific frequencies (Hz = pitch)

Turning digital signals into audio output

How noTone() stops sound

Basic sequencing = building blocks of a melody

You can literally make your Arduino sing in accents 🎤

# 🚀 Day 6 – Ultrasonic Distance Sensor + LED

This project uses an HC-SR04 ultrasonic sensor to detect the distance of nearby objects. Based on the proximity, different colored LEDs light up.

## 🎯 What It Does
- Calculates distance using sound waves
- Turns on:
  - 🔴 Red LED & buzzer for danger (<10cm)
  - 🟡 Yellow LED for caution (10–20cm)
  - 🟢 Green LED for safe (>20cm)

## 🧩 Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Red, Yellow, Green LEDs
- 220Ω resistors
- Jumper wires & Breadboard

## 🧠 Concepts Covered
- Ultrasonic sensing
- Conditional logic
- Real-time visual feedback

