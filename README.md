# IoT Coffee Maker

For this personal project I created a Wi-Fi controlled coffee maker. In essence, this project enabled me to control a 
simple coffee maker from an app or a web browser on my phone. I was inspired to create this project because I am truly 
fascinated by the use of embedded electronics to create IoT products that make life easier. For example, with this 
project I was able to wake up and brew coffee from my bed with the touch of a button! I created this project through 
the use of a Particle Photon (microcontroller similar to Arduino) and a 5V power relay that controlled the power flow 
of a simple coffee maker.

The code that went into this project is actually quite simple. I just needed to intitialize the pin that controlled that 
power relay and write a function to toggle the relay. Most of the work that went into this project was focused on the
circuitry. I tested the my circuit & code on a LED initially to ensure everything worked as expected, as the coffee maker power supply 
is 120V and I didn't want to burn the house down tinkering with that.

As was mentioned above, I used the Particle Photon, which is a microcontroller similar to an Arduino. However, there are 
some key features that made this project easier to complete. The Photon is Wi-Fi enabled and all devices come with Cloud 
storage and an IDE that interacts directly with the board. Additionally, the pins on the board can be controlled directly
through the web or mobile Particle development application, which is what gives this device an edge. Not to mention, it 
**only costs $20!**
