#include <Servo.h>

Servo Myservo;

// Motor Control Pins
#define MLa 4   // Left motor IN1
#define MLb 5   // Left motor IN2
#define MRa 6   // Right motor IN3
#define MRb 7   // Right motor IN4

// Ultrasonic Sensor Pins
#define trigPin 9
#define echoPin 8

long duration, distance;

void setup() {
  Serial.begin(9600);

  // Motor pins as output
  pinMode(MLa, OUTPUT);
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);

  // Ultrasonic pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Servo
  Myservo.attach(10);
  Myservo.write(90);  // center position
}

void loop() {
  distance = getDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 30) {
    moveForward();  // Path clear, move straight
  } else if (distance <= 30 && distance > 0) {
    stopBot();
    delay(100);

    scanSurroundings();  // Turn servo left and right
    moveBackward();
    delay(400);

    turnLeft();  // Change direction
    delay(400);

    stopBot();






                                       
  }

  delay(50);
}

// === Distance Measuring Function ===
long getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  return duration / 58.2;  // Convert to cm
}

// === Movement Functions ===

void moveForward() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);

  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
}

void moveBackward() {
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);

  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
}

void turnLeft() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, LOW);   // Left motor off

  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);   // Right motor on
}

void stopBot() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, LOW);
}

void scanSurroundings() {
  Myservo.write(0);    // Look left
  delay(400);
  Myservo.write(180);  // Look right
  delay(400);
  Myservo.write(90);   // Center again
  delay(300);
}
