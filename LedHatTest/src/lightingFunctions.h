// C++ Includes
#include <Arduino.h>
#include <vector>
using namespace std;

// Function Prototypes
void pulsePWM(int pin, int delayTime);
void allOn(vector<int> pins);
void allOff(vector<int> pins);
void blink(vector<int> pins, int delayTime);
void circle(vector<int> pins, int delayTime);