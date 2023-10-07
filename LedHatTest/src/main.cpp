
#include "main.h"

// Runs once
void setup() {
  // Serial.begin(9600);
  initDigitalOutputs(ledPins);
  initButtonISR(BUTTON_PIN_1);
}

// Runs repeatedly
void loop() {
  // Global state variable 
  circle(ledPins, 100);
  // stateMachine(hatState, ledPins);
  // delay(100);

}

void stateMachine(int state, vector<int> pins){
  switch (state) {
    case ALL_OFF:
      allOff(pins);
      break;
    case ALL_ON:
      allOn(pins);
      break;
    case BLINK_ALL:
      blink(pins, 100);
      break;
    case CIRCLE:
      circle(pins, 100);
      break;
    case PULSE_0:
      pulsePWM(pins[0], 500);
      break;
    case PULSE_1:
      pulsePWM(pins[1], 500);
      break;
    case PULSE_2:
      pulsePWM(pins[2], 500);
      break;
    default:
      allOff(pins);
      break;
  }
}

// Interrupt Service Routine
void button_ISR(){
  hatState++;
  hatState = hatState % numStates;
}

// Hook up ISR to pin passed
void initButtonISR(int pin){
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin), button_ISR, FALLING);
}

// Set all pins in vector to OUTPUT
void initDigitalOutputs(vector<int> pins){
  for (int pin : pins) {
    pinMode(pin, OUTPUT);
  }
}



