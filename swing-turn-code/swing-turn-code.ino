int botSpeed = 100;

void setup() {
  // setting PWM output pins for direction and speed control of dc motors
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600); // Communication rate of the Bluetooth Module
}

void loop() {
  // give pwm signals to respective digital pins to perform swing turn

  // turn left wheels forward
  analogWrite(5,botSpeed);
  // keep right wheels static
  analogWrite(6,0);
}
