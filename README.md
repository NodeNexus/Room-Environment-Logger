# 🌡️ Room Environment Logger

This project monitors and logs environmental parameters such as temperature, humidity, light intensity, and air quality.  
It provides valuable insights into indoor air comfort and can serve as a foundation for an IoT weather station.

---

## ⚙️ Components
| Component | Description |
|------------|-------------|
| Raspberry Pi Pico | Microcontroller board |
| DHT22 | Temperature & Humidity Sensor |
| LDR | Light Intensity Sensor |
| MQ-135 | Air Quality Sensor |

---

## 🧠 Working
- The DHT22 sensor measures temperature and humidity.  
- LDR provides analog light readings.  
- MQ-135 detects air quality levels (gas/smoke).  
- The data is printed to Serial Monitor periodically.

---

## 🔌 Circuit Connections
| Pico Pin | Sensor |
|-----------|--------|
| GP2 | DHT22 Data |
| A0 | LDR |
| A1 | MQ-135 |

---

## 💻 Steps to Use
1. Open the `env_logger.ino` file.  
2. Choose the correct COM port for Raspberry Pi Pico.  
3. Upload and open Serial Monitor.  
4. Observe readings updating every 2 seconds.

---

## 🌟 Features
- Monitors 4 environmental parameters  
- Real-time serial data  
- Low power consumption  

---

## 🔮 Future Improvements
- Add OLED screen to display data  
- Upload readings to a cloud service (ThingSpeak)  

---

**Developer — NodeNexus (Vaishnav Balpande)**
