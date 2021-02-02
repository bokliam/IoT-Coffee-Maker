// IoT Coffee Maker
// Use power relay to control coffee maker
// Author: Liam Bok
// Date: 7-13-2020


// Define signal pin for relay one
int r1 = D3;

void setup() {

    // Set pin D3 to receive output signal    
    pinMode(r1, OUTPUT);
  
    // Implement toggle pin function
    Particle.function("togglePin(0 is OFF, 1 is ON)", togglePinFunction);
  
}

void loop() {}

// Function used to toggle power on/off for coffee maker
// Power relay is ACTIVE LOW!!!
int togglePinFunction(String command) {
    
    // Get new state and set relay
    int state = !digitalRead(r1);
    digitalWrite(r1, state);
    
    return state;
}
