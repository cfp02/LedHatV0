// #include <Arduino.h>

// const uint8_t digitalPins[] = {D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10};

// void setup() {
//   // Initialize all digital pins as outputs
//   for (int i = 0; i < sizeof(digitalPins) / sizeof(digitalPins[0]); i++) {
//     pinMode(digitalPins[i], INPUT);
//   }
//   Serial.begin(9600);
// }

// void loop() {
//   // Loop through each digital pin from D0 to D10
//   for (int pinNumber = 0; pinNumber <= 10; pinNumber++) {
//     // Read the pin state and print it to the serial monitor along with the pin number
//     digitalRead(pinNumber);
//     Serial.print("Pin ");
//     Serial.print(pinNumber);
//     Serial.print(" is ");
//     Serial.println(digitalRead(pinNumber));
    
    
//   }
//   delay(500); // Wait for 500 milliseconds (half a second)
// }
