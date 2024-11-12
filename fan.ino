#include <Servo.h>

Servo myServo;

int joystickXPin = A0; // Pin for joystick X-axis
int centerAngle = 90; // Center position of the servo (90 degrees)
int servoPin = 9; // Pin for connecting the servo motor
int deadZone = 20; // Dead zone for the joystick

void setup() {
  myServo.attach(servoPin); // Attach the servo motor to the pin
  myServo.write(centerAngle); // Set the servo to the initial center position
  Serial.begin(9600); // For debugging
}

void loop() {
  int joystickXVal = analogRead(joystickXPin); // Read the joystick X-axis value
  int angle = map(joystickXVal, 0, 1023, 0, 180); // Map the value to a range from 0 to 180 degrees

  // Check if the value is in the dead zone (when the joystick is released)
  if (joystickXVal > 512 - deadZone && joystickXVal < 512 + deadZone) {
    // If the joystick is in the dead zone, return to center position
    myServo.write(centerAngle);
  } else {
    // If the joystick is moved, set the servo to the corresponding angle
    myServo.write(angle);
  }

  delay(15); // Small delay for smoother operation
}
