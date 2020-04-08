# Custom Fork of Opensprinkler-Firmware

### Purpose
This fork contains modifications to the original firmware to support a non-standard, simplified hardware configuration.
It is meant to drive **latching valves (DC)** without an I2C expander, via relays, directly with GPIO pins, with minimal investment.
A small number of valves is supported (number of available GPIO pins minus 1). 


### Hardware
* **ESP8266**: Wemos D1 Mini or similar
* **Relays**: An optocoupler multi-relay board (2 SPDT relays are used as an H-Bridge)
* **5V Power**: To power the ESP (I'm using an **LM7805** from the 12v)
* **12V DC**: Or valve-appropriate voltage. (My whole system works fine from a 9v 350mA adapter)
* **Capacitor**: if using a single voltage source like I am (prevents brownouts during valve operation)  I used a 2200uF electrolytic.

Obviously some wires, connectors and enclosure would be helpful.  

### Limitations

* No display, no buttons, no expander, no booster, no RTC.  
* Only WiFi access
* Up to 6 valves.

### Logic

The logic is slightly different from the standard Opensprinkler "Latch" type:

* Turning a valve **on**: pulse that station relay **ON**
* Turning a valve **off**: (simultaneously:)
  * pulse H-Bridge relay **ON** (reverses polarity)
  * pulse that station relay **ON**
  
### Circuit

![Circuit](readme/latching-sprinkler-circuit.png)

[PDF Format](https://raw.githubusercontent.com/akomakom/OpenSprinkler-Firmware-CustomLatch/master/readme/latching-sprinkler-circuit.pdf)

### Design decisions

* **H-Bridge** relays are driven from pin D0.  It can also be a single DPDT relay.
* Station relays start with **D3** (D3-D8) because D1 and D2 are used for I2C and I don't feel like changing that code.
* I am driving **4 valves** in real life so the schematic only connects 4 (+2 for H-Bridge).  The other 4 stations in the UI do nothing.
* The **valves** I am using are actually a commodity hose timer (a Melnor 73280), with internal circuitry disconnected and latching valves wired directly to my relays.
* I needed a **capacitor** to stabilize power supply to the ESP8266 because of voltage drop (or spikes) when valves cycled.  You may not.  I used what I had handy.

![All Parts](readme/all-parts.png)