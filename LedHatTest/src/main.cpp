#include <Arduino.h>
#include <vector>

using namespace std;

void allOn(vector<int> pins);
void allOff(vector<int> pins);
void blink(vector<int> pins, int delayTime);
void circle(vector<int> pins, int delayTime);
void initDigitalOutputs(vector<int> pins);
void pulsePWM(int pin, int delayTime);

vector<int> ledPins = {4,5,6};

void setup() {
  // Initialize all ledPins as outputs
  // initDigitalOutputs(ledPins);
  
  Serial.begin(9600);

}

void loop() {
  pulsePWM(ledPins[0], 2);
  pulsePWM(ledPins[1], 2);

  initDigitalOutputs(ledPins);

  allOn(ledPins);
  delay(1000);
  allOff(ledPins);
  delay(1000);
  // blink(ledPins, 100);
  // for(int i = 0; i < 50; i++){
  //   circle(ledPins, 100);
  // }
  
}

void initDigitalOutputs(vector<int> pins){
  for (int pin : pins) {
    pinMode(pin, OUTPUT);
  }
}

void pulsePWM(int pin, int delayTime){
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
