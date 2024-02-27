/*

Working Procedure:
1. Initially, I connected the breadboard's power site to the Arduino Uno's power pin and its
ground site to the Arduino Uno's ground pin.
2. Following that, I linked the servo motor's power pin to the breadboard's positive site and
its ground pin to the board's negative (ground) site.
3. After that, I linked the Arduino Uno's digital pin (10) to the servo motor's signal pin.
4. I connect the push button on the breadboard after connecting the servo motor.
5. I have connected the signal pin of the switch with pin 9 of arduino uno.

*/


#include<Servo.h>
Servo servo;

int i = 0, push = 7, btn;

void setup() {
  servo.attach(9);
  pinMode(push, INPUT);
}

void loop() {
  btn = digitalRead(push);
  if(btn == HIGH){
    for( i = 0; i <= 180; i++){
      servo.write(i);
      delay(20);
    }
    for( i = 180; i >= 0; i--){
      servo.write(i);
      delay(20);
    }
  }
  else{
    servo.write(0);
  }
}
