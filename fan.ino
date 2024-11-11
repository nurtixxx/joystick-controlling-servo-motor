#include <Joystick.h>
#include <Servo.h>

Servo myServo;
const int joystickXPin = A0; // Pin connected to joystick X-axis

void setup() {
  myServo.attach(9); // Attach the servo to pin 9
  pinMode(joystickXPin, INPUT); // Set joystick pin as input
}

void loop() {
  int joystickX = analogRead(joystickXPin); // Read X-axis value
  
  // Assuming joystick returns values from 0 to 1023
  if (joystickX > 512) { // Adjust threshold as needed
    myServo.write(0); // Move servo to 0 degrees
  } else if (joystickX < 512) {
    myServo.write(180); // Move servo to 180 degrees
  }
  
  delay(600); // Small delay for stability
}
