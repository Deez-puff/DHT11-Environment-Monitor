# Smart Room Temperature & Humidity Monitoring System

A microcontroller-based system designed to monitor **room temperature and humidity in real time** using an **Arduino UNO** and **DHT11 sensor**.  
The measured values are displayed on a **16×2 I2C LCD**, and an **alert buzzer** is triggered when the temperature exceeds a predefined threshold.

---

## 📌 Project Overview

Maintaining a safe indoor environment is important for comfort and safety.  
This project continuously senses environmental parameters and provides **visual and audible alerts**, making it suitable for smart rooms, laboratories, and small-scale monitoring applications.

---

## 🔧 Hardware Components
- Arduino UNO  
- DHT11 Temperature & Humidity Sensor  
- 16×2 LCD with I2C Module  
- Buzzer  
- Jumper Wires  
- USB Cable  

---

## 🛠️ Software & Tools
- Arduino IDE  
- DHT Sensor Library (Adafruit)  
- Adafruit Unified Sensor Library  
- LiquidCrystal I2C Library  

---

## ⚙️ System Working

1. The DHT11 sensor measures room temperature and humidity.
2. Arduino UNO processes the sensor data.
3. Real-time values are displayed on the LCD.
4. If temperature crosses the preset threshold:
   - The buzzer is activated.
   - An alert message is shown on the LCD.
5. Sensor data is also sent to the Serial Monitor for debugging and logging.

---

## 🔁 Block Diagram

🔔 Buzzer ON when temperature exceeds the limit.

---

## 📐 Applications
- Smart room monitoring
- Home and office environment tracking
- Laboratory safety systems
- Educational and academic projects

---

## ✅ Advantages
- Low-cost and easy to implement
- Real-time monitoring
- Simple hardware design
- Beginner-friendly embedded system project

---

## ⚠️ Limitations
- Measures only ambient temperature (not internal device temperature)
- Limited accuracy compared to industrial sensors
- No wireless or IoT connectivity (can be added as future work)

---

## 🚀 Future Enhancements
- IoT integration (Wi-Fi / Mobile App)
- Automatic fan or AC control
- Data logging to cloud or SD card
- Mobile notifications

---

## 📂 Repository Structure

---

## 👤 Author
**Deepak Rajesh**  
Aspiring Embedded Systems & IoT Enthusiast

---

## 📜 License
This project is licensed under the **MIT License** — feel free to use, modify, and distribute with attribution.
