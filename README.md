# bridge-irrigation system
# 🌱 Simple Irrigation System (Arduino)

## 📌 Project Overview
This project is a basic automated irrigation system built using Arduino.  
It simulates soil moisture monitoring and automatic watering using simple components.

A **potentiometer** is used to simulate the soil moisture sensor, while a **bulb (or LED)** acts as the water pump actuator.

---

## 🎯 Objectives
- Monitor soil moisture level (simulated)
- Automatically activate watering when soil is dry
- Turn off watering when soil is wet
- Demonstrate basic automation using sensors and actuators

---

## ⚙️ Components Used
- Arduino (Uno / Mega 2560)
- Breadboard
- Potentiometer (simulating soil moisture sensor)
- LED / Bulb (simulating water pump)
- Resistor (220Ω–470Ω)
- Jumper wires

---

## 🔌 System Behavior

### 🌵 Dry Soil Condition
- Potentiometer value is high
- System detects low moisture
- LED/Bulb turns ON (watering starts)

### 🌿 Wet Soil Condition
- Potentiometer value is low
- System detects sufficient moisture
- LED/Bulb turns OFF (watering stops)

---

## 🧠 How It Works
The potentiometer generates analog values (0–1023), simulating different soil moisture levels:

- Low values → Wet soil  
- High values → Dry soil  

A threshold value is set in the code:
- Above threshold → Dry → Watering ON  
- Below threshold → Wet → Watering OFF  

---

## 💻 Code Logic (Summary)
- Read analog value from potentiometer
- Compare with threshold
- Control LED (pump) based on condition

---

## 🛠️ Simulation
This project can be built and tested using Tinkercad:
- Rotate the potentiometer to simulate soil conditions
- Observe LED behavior

---

## ⚠️ Notes
- Threshold value may need adjustment depending on simulation
- LED is used as a safe alternative to a real water pump

---

## 🚀 Future Improvements
- Replace potentiometer with real soil moisture sensor
- Use relay module to control real water pump
- Add LCD display for moisture readings
- Add timer-based irrigation system

---

## 📚 Learning Outcomes
- Understanding analog input using Arduino
- Basic automation using sensors and actuators
- Circuit design and simulation
- Practical application of embedded systems

---

## 👤 Author
**Ineza Shafi**  
Computer Systems and Architecture (CSA)

---

## 📅 Date
April 2026
I have updated the irrigation system and added the lcd to display if the pump is low or high 
