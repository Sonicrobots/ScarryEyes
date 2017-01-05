/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo 1
Servo myservo2;  // create servo object to control a servo 2

int val;    // variable to read the value from the analog pin
int delaytime;

void setup() {
  myservo1.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(11);  // attaches the servo on pin 11 to the servo object
  pinMode(13, OUTPUT);
}

void loop() {
  
  int rnd = random(70, 180); 
    delaytime = map(rnd, 70, 180, 400, 5000); 
  
  // - -------------- FIRST SERVO  
    myservo1.write(rnd);  // sets the servo position according to the scaled value
    delay(delaytime);               // Delay for a random time
  
  // - -------------- SECOND SERVO
  
   myservo2.write(rnd);                  // sets the servo position according to the scaled value
   delay(delaytime);               // Delay for a random time
}

