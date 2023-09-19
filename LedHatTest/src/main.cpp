
#include "main.h"


vector<int> ledPins = {A0,A1,A2};

void setup() {
  
  Serial.begin(9600);

}

void loop() {
  // pulsePWM(ledPins[0], 500);
  // pulsePWM(ledPins[1], 500);
  // pulsePWM(ledPins[2], 500);

  initDigitalOutputs(ledPins);

  // allOn(ledPins);
  // delay(1000);
  // allOff(ledPins);
  // delay(1000);
  // blink(ledPins, 100);
  // for(int i = 0; i < 50; i++){
  //   circle(ledPins, 100);
  // }

  circle(ledPins, 100);
  
}

void initDigitalOutputs(vector<int> pins){
  for (int pin : pins) {
    pinMode(pin, OUTPUT);
  }
}



