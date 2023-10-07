// C++ Includes
#include <Arduino.h>
#include <vector>

// Custom Includes
#include "lightingFunctions.h"

using namespace std;

// Function Prototypes
void initDigitalOutputs(vector<int> pins);
void stateMachine(int state, vector<int> pins);
void button_ISR();
void initButtonISR(int pin);

// int enum for states
enum states {
  ALL_OFF,
  ALL_ON,
  BLINK_ALL,
  CIRCLE,
  PULSE_0,
  PULSE_1,
  PULSE_2,

  numStates
};

// Global Variables and Constants
#define BUTTON_PIN_1 2
int hatState = CIRCLE;
vector<int> ledPins = {A0,A1,A2};