// Purpose of the program: When the program starts running, 
// the servo motor will rotate slowly from 0 degrees to 180 
// degrees, one degree at a time. When the motor has rotated 
// 180 degrees, it will begin to rotate in the other direction 
// until it returns to the home position.

#include <Servo.h>

Servo servo; //creates servo object to control the servo motor

int angle = 0; //servo angle starts at 0

int sensorVal = analogRead(A0); //reads photoresistor value from analog pin

void setup() {
  Serial.begin(9600); //starts serial communication
  servo.attach(9); //attach the servo on pin 9 to the servo object
  Serial.println("3 pin photoresistor sensor here...");
}

void loop() {
  Serial.println(analogRead(sensorVal)); //for checking the sensor's readings
  if(analogRead(sensorVal) > 750) {
    // away from original position
    for(angle = 0; angle < 180; angle++) {
      servo.write(angle);
      delay(15);
    }
    delay(1000);
    // back to original position
    for(angle = 180; angle >= 1; angle -= 5) {
      servo.write(angle);
      delay(5);
    }
    delay(1000);
  }
}