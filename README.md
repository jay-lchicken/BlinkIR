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

Some pictures of the design
