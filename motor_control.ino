// Pin Definitions
const int PIN_1A = 5;   // Direction control A
const int PIN_2A = 6;   // Direction control B
const int PIN_EN = 9;   // PWM Speed control (Enable)

void setup() {
  // Set pins as outputs
  pinMode(PIN_1A, OUTPUT);
  pinMode(PIN_2A, OUTPUT);
  pinMode(PIN_EN, OUTPUT);
  
  // Start with motor stopped
  digitalWrite(PIN_1A, LOW);
  digitalWrite(PIN_2A, LOW);
  analogWrite(PIN_EN, 0);
}

void loop() {
  // 1. Move Forward at 80% speed
  digitalWrite(PIN_1A, HIGH);
  digitalWrite(PIN_2A, LOW);
  analogWrite(PIN_EN, 200); // 200 out of 255 is ~80% speed
  delay(2000); // Wait 2 seconds

  // 2. Stop (Active Braking)
  digitalWrite(PIN_1A, LOW);
  digitalWrite(PIN_2A, LOW);
  analogWrite(PIN_EN, 0);
  delay(1000); // Wait 1 second

  // 3. Move Backward at 50% speed
  digitalWrite(PIN_1A, LOW);
  digitalWrite(PIN_2A, HIGH);
  analogWrite(PIN_EN, 127); // 127 out of 255 is ~50% speed
  delay(2000); // Wait 2 seconds

  // 4. Stop again
  digitalWrite(PIN_1A, LOW);
  digitalWrite(PIN_2A, LOW);
  analogWrite(PIN_EN, 0);
  delay(1000); // Wait 1 second
}
