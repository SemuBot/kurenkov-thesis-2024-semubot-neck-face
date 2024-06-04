#include <AccelStepper.h>

#define PUL_PIN 2
#define DIR_PIN 4
#define ENA_PIN 6

// Create an instance of the AccelStepper class
AccelStepper stepper(AccelStepper::DRIVER, PUL_PIN, DIR_PIN);

void setup() {
  // Set the enable pin as output and set it to LOW to enable the driver
  pinMode(ENA_PIN, OUTPUT);
  digitalWrite(ENA_PIN, LOW);

  // Set the maximum speed and acceleration
  stepper.setMaxSpeed(1000); // Adjust the speed as needed
  stepper.setAcceleration(500); // Adjust the acceleration as needed

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char key = Serial.read();

    if (key == 'w') {
      // Move forward
      stepper.setSpeed(500); // Set a positive speed to move forward
    } 
    else if (key == 's') {
      // Move backward
      stepper.setSpeed(-500); // Set a negative speed to move backward
    } 
    else if (key == 'x') {
      // Stop the motor
      stepper.setSpeed(0); // Set speed to 0 to stop the motor
    }
  }
  // Run the stepper motor
  stepper.runSpeed();
}
