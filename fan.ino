#include <Servo.h>

Servo myServo;

int joystickXPin = A0; // Pin for the joystick X-axis
int centerAngle = 90; // Central position of the servo motor (90 degrees)
int servoPin = 9; // Pin for connecting the servo motor
int leftLedPin = 12; // Pin for the LED that lights up when moving left
int rightLedPin = 13; // Pin for the LED that lights up when moving right
int deadZone = 20; // Joystick dead zone

void setup() {
  myServo.attach(servoPin); // Attach the servo motor to the pin
  myServo.write(centerAngle); // Set the servo motor to the initial position
  pinMode(leftLedPin, OUTPUT); // Set the left LED pin as an output
  pinMode(rightLedPin, OUTPUT); // Set the right LED pin as an output
  Serial.begin(9600); // For debugging
}

void loop() {
  int joystickXVal = analogRead(joystickXPin); // Read the joystick X-axis value
  int angle = map(joystickXVal, 0, 1023, 0, 180); // Map the value to a range from 0 to 180 degrees

  // Check the joystick position
  if (joystickXVal > 512 - deadZone && joystickXVal < 512 + deadZone) {
    // If the joystick is in the dead zone, return the servo to the center
    myServo.write(centerAngle);
    // Turn off both LEDs
    digitalWrite(leftLedPin, LOW);
    digitalWrite(rightLedPin, LOW);
  } else {
    // If the joystick is moved, set the corresponding angle
    myServo.write(angle);

    // Control the LEDs
    if (angle < centerAngle - deadZone) {
      // Turn on the left LED, turn off the right LED
      digitalWrite(leftLedPin, HIGH);
      digitalWrite(rightLedPin, LOW);
    } else if (angle > centerAngle + deadZone) {
      // Turn on the right LED, turn off the left LED
      digitalWrite(leftLedPin, LOW);
      digitalWrite(rightLedPin, HIGH);
    }
  }

  // No delays for quick system response
}
