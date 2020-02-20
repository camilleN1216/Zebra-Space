/*

  This demonstration shows how to use a set of four Parallax QTI sensors to provide line-following
  capability to your BOE Shield-Bot Arduino robot.

  Refer to the following pages for using the QTI Line Follower AppKit.
  http://www.parallax.com/product/28108

  Refer to the following help pages for additional wiring diagrams when using the QTI sensors with the
  Arduino Uno:
  http://learn.parallax.com/KickStart/555-27401

  Wiring Diagram for QTI Sensors:
  Arduino          Sensor
  D7               QTI4 - Far left
  D6               QTI3 - Mid left
  D5               QTI2 - Mid right
  D4               QTI1 - Far right

  Wiring Diagram for Servos:
  Arduino          Servo
  D13              Left servo
  D12              Right servo

  This example code makes use of an intermediate Arduino programming technique, specifically directly
  manipulating multiple pins at once on the Arduino. This technique is referred to as port manipulation,
  and is more fully discussed here:
  http://playground.arduino.cc/Learning/PortManipulation

  Important: This demonstration was written, and intended for, use with the Arduino Uno microcontroller.
  Other Arduino boards may not be compatible.

*/

#include <Servo.h>

//define
Servo servoR;
Servo servoL;
bool white = false;

void setup() {
  Serial.begin(9600);                        // Set up Arduino Serial Monitor at 9600 baud
  enableServos();

}


void loop() {
  // Drop off first four bits of the port; keep only pins D4-D7
  DDRD |= B11110000;                         // Set direction of Arduino pins D4-D7 as OUTPUT
  PORTD |= B11110000;                        // Set level of Arduino pins D4-D7 to HIGH
  delayMicroseconds(230);                    // Short delay to allow capacitor charge in QTI module
  DDRD &= B00001111;                         // Set direction of pins D4-D7 as INPUT
  PORTD &= B00001111;                        // Set level of pins D4-D7 to LOW
  delayMicroseconds(230);                    // Short delay
  int pins = PIND;                           // Get values of pins D0-D7
  pins >>= 4;

  //straddle the circle
  while (white == false) {
    straddleCir();
  }
  white = false;
  
  pause(50);
  //turn towards rectangle
  servoL.writeMicroseconds(1500);
  servoR.writeMicroseconds(1700);
  delay(800);
  
  //go to rect
  forward(1650);
  
  //allign with rect
  servoL.writeMicroseconds(1700);
  servoR.writeMicroseconds(1500);
  delay(1350);

  //straddle the rectangle
  while (white == false) {
    straddleRect();
  }
  white = true;
  
  pause(50);
  //turn to white space
  servoL.writeMicroseconds(1500);
  servoR.writeMicroseconds(1700);
  delay(1000);
  
  //forward a bit
  forward(800);
  
  //turn to back line
  servoL.writeMicroseconds(1700);
  servoR.writeMicroseconds(1500);
  delay(1000);

  //go around black line
  for (int t = 0; t <= 254; t++){
    avoidBlack();
  }
  
  //last turn
  turnRight(500);
  forward(1300);
  turnRight(550);

  //into the box
  while (white == true){
    reachBox();
  }
  forward(900);
  pause(200000);
  disableServos();
  delay(200000);
  
}



void straddleCir() {
  // Drop off first four bits of the port; keep only pins D4-D7
  DDRD |= B11110000;                         // Set direction of Arduino pins D4-D7 as OUTPUT
  PORTD |= B11110000;                        // Set level of Arduino pins D4-D7 to HIGH
  delayMicroseconds(230);                    // Short delay to allow capacitor charge in QTI module
  DDRD &= B00001111;                         // Set direction of pins D4-D7 as INPUT
  PORTD &= B00001111;                        // Set level of pins D4-D7 to LOW
  delayMicroseconds(230);                    // Short delay
  int pins = PIND;                           // Get values of pins D0-D7
  pins >>= 4;
  Serial.println(pins, BIN);                 // Display result of D4-D7 pins in Serial Monitor
  // Determine how to steer based on state of the four QTI sensors
  int vL, vR;
  switch (pins) {                            // Compare pins to known line following states
    //View from front
    //far right
    case B1000:
      vL = 100;                             // -100 to 100 indicate course correction values
      vR = 0;                              // -100: full reverse; 0=stopped; 100=full forward
      break;
    //far right & mid-right
    case B1100:
      vL = 100;
      vR = 50;
      break;
    //mid-right
    case B0100:
      vL = 100;
      vR = 70;
      break;
    //mid-both
    case B0110:
      vL = 100;
      vR = 100;
      break;
    //mid-left
    case B0010:
      vL = 70;
      vR = 100;
      break;
    //far left & mid-left
    case B0011:
      vL = 100;
      vR = 50;
      break;
    //far left
    case B0001:
      vL = 0;
      vR = 100;
      break;
    case B0000:
      white = true;
      vL = 0;
      vR = 0;
      break;
    case B1111:
      vL = 100;
      vR = 100;
  }

  servoL.writeMicroseconds(1500 + vL);      // Steer robot to recenter it over the line
  servoR.writeMicroseconds(1500 - vR);

  delay(50);                                // Delay for 50 milliseconds (1/20 second)
}



void straddleRect(){
  // Drop off first four bits of the port; keep only pins D4-D7
  DDRD |= B11110000;                         // Set direction of Arduino pins D4-D7 as OUTPUT
  PORTD |= B11110000;                        // Set level of Arduino pins D4-D7 to HIGH
  delayMicroseconds(230);                    // Short delay to allow capacitor charge in QTI module
  DDRD &= B00001111;                         // Set direction of pins D4-D7 as INPUT
  PORTD &= B00001111;                        // Set level of pins D4-D7 to LOW
  delayMicroseconds(230);                    // Short delay
  int pins = PIND;                           // Get values of pins D0-D7
  pins >>= 4;
  Serial.println(pins, BIN);                 // Display result of D4-D7 pins in Serial Monitor
  // Determine how to steer based on state of the four QTI sensors
  int vL, vR;
  switch (pins) {                            // Compare pins to known line following states
    //View from front
    //far right
    case B1000:
      vL = 100;                             // -100 to 100 indicate course correction values
      vR = 0;                              // -100: full reverse; 0=stopped; 100=full forward
      break;
    //far right & mid-right
    case B1100:
      vL = 100;
      vR = 30;
      break;
    //mid-right
    case B0100:
      vL = 100;
      vR = 50;
      break;
    //mid-both
    case B0110:
      vL = 100;
      vR = 100;
      break;
    //mid-left
    case B0010:
      vL = 50;
      vR = 100;
      break;
    //far left & mid-left
    case B0011:
      vL = 100;
      vR = 30;
      break;
    //far left
    case B0001:
      vL = 0;
      vR = 100;
      break;
    case B0000:
      white = true;
      vL = 0;
      vR = 0;
      break;
    case B1111:
      vL = 100;
      vR = 100;
  }

  servoL.writeMicroseconds(1500 + vL);      // Steer robot to recenter it over the line
  servoR.writeMicroseconds(1500 - vR);

  delay(50);                                // Delay for 50 milliseconds (1/20 second)
}



void avoidBlack(){
  // Drop off first four bits of the port; keep only pins D4-D7
  DDRD |= B11110000;                         // Set direction of Arduino pins D4-D7 as OUTPUT
  PORTD |= B11110000;                        // Set level of Arduino pins D4-D7 to HIGH
  delayMicroseconds(230);                    // Short delay to allow capacitor charge in QTI module
  DDRD &= B00001111;                         // Set direction of pins D4-D7 as INPUT
  PORTD &= B00001111;                        // Set level of pins D4-D7 to LOW
  delayMicroseconds(230);                    // Short delay
  int pins = PIND;                           // Get values of pins D0-D7
  pins >>= 4;
  Serial.println(pins, BIN);                 // Display result of D4-D7 pins in Serial Monitor
  // Determine how to steer based on state of the four QTI sensors
  int vL, vR;
  switch (pins) {                            // Compare pins to known line following states
    //View from front
    //far right
    case B1000:
      vL = -100;                             // -100 to 100 indicate course correction values
      vR = 0;                              // -100: full reverse; 0=stopped; 100=full forward
      break;
    //far right & mid-right
    case B1100:
      vL = -100;
      vR = 30;
      break;
    //mid-right
    case B0100:
      vL = -70;
      vR = 30;
      break;
    //mid-both
    case B0110:
      vL = -60;
      vR = -100;
      break;
    //mid-left
    case B0010:
      vL = 0;
      vR = -70;
      break;
    //far left & mid-left
    case B0011:
      vL = 30;
      vR = -100;
      break;
    //far left
    case B0001:
      vL = 0;
      vR = -100;
      break;
    case B0000:
      ;
      vL = 100;
      vR = 100;
      break;
    case B1111:
      vL = -80;
      vR = 0;
      
  }

  servoL.writeMicroseconds(1500 + vL);      // Steer robot to recenter it over the white
  servoR.writeMicroseconds(1500 - vR);

  delay(50);                                // Delay for 50 milliseconds (1/20 second)
}




void reachBox(){
  // Drop off first four bits of the port; keep only pins D4-D7
  DDRD |= B11110000;                         // Set direction of Arduino pins D4-D7 as OUTPUT
  PORTD |= B11110000;                        // Set level of Arduino pins D4-D7 to HIGH
  delayMicroseconds(230);                    // Short delay to allow capacitor charge in QTI module
  DDRD &= B00001111;                         // Set direction of pins D4-D7 as INPUT
  PORTD &= B00001111;                        // Set level of pins D4-D7 to LOW
  delayMicroseconds(230);                    // Short delay
  int pins = PIND;                           // Get values of pins D0-D7
  pins >>= 4;
  Serial.println(pins, BIN);                 // Display result of D4-D7 pins in Serial Monitor
  // Determine how to steer based on state of the four QTI sensors
  int vL, vR;
  switch (pins) {                            // Compare pins to known line following states
    //View from front
    //far right
    case B1000:
      vL = 0;                              // -100 to 100 indicate course correction values
      vR = 0;                              // -100: full reverse; 0=stopped; 100=full forward
      white = false;
      break;
    //far right & mid-right
    case B1100:
      vL = 0;
      vR = 0;
      white = false;
      break;
    //mid-right
    case B0100:
      vL = 0;
      vR = 0;
      white = false;
      break;
    //mid-both
    case B0110:
      vL = 0;
      vR = 0;
      white = false;
      break;
    //mid-left
    case B0010:
      vL = 0;
      vR = 0;
      white = false;
      break;
    //far left & mid-left
    case B0011:
      vL = 100;
      vR = 50;
      break;
    //far left
    case B0001:
      vL = 0;
      vR = 0;
      white = false;
      break;
    case B0000:
      vL = 100;
      vR = 100;
      break;
    case B1111:
      vL = 0;
      vR = 0;
      white = false;
      break;
  }

  servoL.writeMicroseconds(1500 + vL);      // Steer robot to recenter it over the line
  servoR.writeMicroseconds(1500 - vR);

  delay(50);                                // Delay for 50 milliseconds (1/20 second)
}



//go forward
void forward(int time) {
  servoL.writeMicroseconds(1700);
  servoR.writeMicroseconds(1300);
  delay(time);
}

//left turn
void turnLeft(int time) {
  servoL.writeMicroseconds(1300);
  servoR.writeMicroseconds(1300);
  delay(time);
}

//right turn
void turnRight(int time) {
  servoL.writeMicroseconds(1700);
  servoR.writeMicroseconds(1700);
  delay(time);
}

//go backwards
void backward(int time) {
  servoL.writeMicroseconds(1300);
  servoR.writeMicroseconds(1700);
  delay(time);
}

//pause
void pause(int time) {
  disableServos();
  delay(time);
  enableServos();
}

//enable
void enableServos() {
  servoL.attach(13);
  servoR.attach(12);
}

//disable
void disableServos() {
  servoL.detach();
  servoR.detach();
}
