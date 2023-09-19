#include <Arduino.h>
#include <vector>

#include "lightingFunctions.h"

void pulsePWM(int pin, int pulseTime){
  // PulseTime is in milliseconds
  int delayTime = pulseTime / 255;

  for(int i = 0; i < 255; i++){
    analogWrite(pin, i);
    delay(delayTime/5);
  }
  for(int i = 255; i > 0; i--){
    analogWrite(pin, i);
    delay(delayTime);
  }
}

void allOn(vector<int> pins){
  // size_t pinsSize = size(pins);
  for (int pin : pins) {
    digitalWrite(pin, HIGH);
  }
}

void allOff(vector<int> pins){
  // size_t pinsSize = size(pins);
  for (int pin : pins) {
    digitalWrite(pin, LOW);
  }
}

void blink(vector<int> pins, int delayTime){
  allOn(pins);
  delay(delayTime);
  allOff(pins);
  delay(delayTime);
}

void circle(vector<int> pins, int delayTime){
  for (int pin : pins) {
    digitalWrite(pin, HIGH);
    delay(delayTime);
    digitalWrite(pin, LOW);
    delay(delayTime/10);
  }
}