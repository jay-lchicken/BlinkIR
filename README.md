# Introduction

I created this project when I saw a super fast line tracing robot. I thought about what was needed and since one of the most crucial components for a line tracing robot is the IR Array Sensor, I decided

What if I can make one of the most responsive and feature-packed IR Sensor ever made.

# Description

I took inspiration from the Pololu QTR-8A. It is equipped with 8 IR emitters and 8 IR Recievers (or maybe phototransistors, I'm not sure).

I did the same and put it into my PCB with 8 IR emitters and 8 phototransistors that uses the voltage divider rule to give users the reading.

Doing this, I realised that the project ended up being just a normal IR Array sensor. I thought hard about how I could make it unique. Personally, I have building robots since young and it came to my mind
that if I can solve all the problems I previously had with a robot by implementing the solution in the PCB, it would be great! 

I usually hate using the Serial Monitor when debugging my hardware code, so I decided to add 8 SK6812 Neopixel indicator lights to the pcb, one for each IR Sensor but on the other side of the PCB.
The user can have full control of the LEDs but for me, I want to be able to change the light depending on what the phototransistor detects. This helps make debugging with the IR array sensor a lot easier.
When testing line tracking, I can also easily see how I can fine tune the robot when line tracking by looking at the LEDs which I can program to light up when it detects a certain black that meets the treshold value

Competitive robots require a Start/Stop button which I normally use jumper wires to implement. However, these wires often get loose and prevent the robot from starting. Since I am already desiging a PCB, I might as well put some buttons

![Image of the pcb with buttons and the neopixel](https://user-cdn.hackclub-assets.com/019ece49-17bb-758d-8591-1d11e20fa7cc/Screenshot%202026-06-16%20at%208.45.33%E2%80%AFAM.png)

![Bottom side of the PCB with the IR emitter an phototransistor](https://user-cdn.hackclub-assets.com/019ece49-ff42-7464-8217-6e605e4036cc/Screenshot%202026-06-16%20at%2010.36.46%E2%80%AFAM.png)

# How it all fits together
I added a Buck-Boost converter which allow you to put 3.3V to 12V into the IR array sensor. Then, the converter will convert it to 5V which is the proper operating voltage for the circuit.
There are 8 pins which the users can tap into individually with their microcontroller to read the phototransistor readings. There are also another 3 pins. Two for the two INPUT_PULLUP Buttons as well as one for contorlling the daisy chained SK6812 Neopixel LEDs.
Lastly, there are another 3 pins for Vin, GND and turning on the IR Emitter

I decided to go with 4.7K resistors for the phototransistors, this helps balance between the noise and speed for the IR Array Sensor
# Some Schematic Images
![Schematic P1](https://cdn.hackclub.com/019ece4e-1aff-7d44-b1b0-35dfb1140ddc/Screenshot%202026-06-16%20at%2010.41.21%E2%80%AFAM.png)
![Schematic P2](https://cdn.hackclub.com/019ece4e-82ea-7b56-8ce2-cf0930b38b01/Screenshot%202026-06-16%20at%2010.41.49%E2%80%AFAM.png)
![PCB](https://cdn.hackclub.com/019ece4f-2a49-70a7-94f8-dba5ba8c22e0/Screenshot%202026-06-16%20at%2010.42.25%E2%80%AFAM.png)

# BOM 

![Image](https://cdn.hackclub.com/019ece52-260b-7ed0-982f-36fed8f12052/Screenshot%202026-06-16%20at%2010.45.45%E2%80%AFAM.png)
# I dont have any shareable links since this is in JLCPCB)

## 🧾 Components

| Part Number | Selected By | Qty | Cost |
|------------|------------|-----|------|
| FRC1206F4700TS | System | 15 | $0.08 |
| 0402WGF3300TCE | System | 20 | $0.02 |
| CL10A106KP8NNNC | System | 40 | $0.36 |
| 0603WAF1003T5E | System | 40 | $0.03 |
| NTD3528I7 | System | 44 | $1.66 |
| TPS63070RNMT | System | 5 | $8.42 |
| CL31A226KAHNNNE | System | 14 | $2.50 |
| 0805W8F4702T5E | System | 20 | $0.04 |
| 0805W8F5233T5E | System | 20 | $0.05 |
| KT-0603W | System | 20 | $0.24 |
| RVT102470M0505 | Customer | 20 | $0.58 |
| SK6812 | System | 42 | $3.73 |
| 0805W8F4701T5E | System | 46 | $0.10 |
| 2.54-1×3P# | Customer | 12 | $0.29 |
| MPT0603GT | System | 44 | $1.83 |
| CL05B104K05NNNC | System | 40 | $0.05 |
| 1206W4F1002T5E | System | 15 | $0.09 |
| CMI060808U22RK7 | System | 20 | $0.34 |
| JSM2302 | Customer | 15 | $0.30 |
| CL10A105KB8NNNC | System | 20 | $0.22 |
| KMR221GLFS | System | 10 | $5.31 |
| 0603WAF470J5E | System | 40 | $0.08 |

## 💰 Cost Summary

| Category | Amount |
|----------|--------|
| Merchandise Total (incl. assembly) | $153.07 |
| Shipping (Estimated) | $8.85 |
| **Subtotal** | **$161.92** |
