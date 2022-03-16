# Swing turn of a vehicle

## Introduction
An object is said to have done a swing turn if it revolves around around a point at a fixed radius away from the center of the object
The earth revolving around the sun can be considered to be swing turn.
</br>
![This is an image](images/giphy.gif)
</br>
Here we have built a bot controlled by an arduino on-board to make a swing turn.
We will be using swing turn is used to make smooth turn around corners.
The following image shows the difference between point turn and swing turn.

![This is an image](images/download.jpg)

## Working
An android app is used here to send commands over to the arduino using bluetooth interface with the help of a bluetooth module connected to the arduino.We will not going into the details of the android app as it will be discussed in a later project.
</br>
Here we are simply writing the code for a swing turn and we will be observing the swing turn action of the bot.

## Code
Code used to program the arduino
<details>
<summary>Click to expand code...</summary>
<p>

```c++
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
```

</p>
</details>
