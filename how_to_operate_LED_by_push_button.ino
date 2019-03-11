/*
*How to operate push button using Arduino uno
*
*This is a very basic example which will help you to understand how LED can be operated by a push button with external pull down resistor using arduino uno.
*
*for more detail about this project please visit:https://arduinounomagic.blogspot.com/2019/03/how-to-operate-push-button-with-arduino.html#more
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/

const int push_button = 7; // push button is connected to pin number 7
const int LED =  8;  // LED is connected to pin number 8
int button_state = 0;   // variable to read the status of push button
 
void setup() {
  
  pinMode(LED, OUTPUT); //set LED as output
  pinMode(push_button, INPUT); //set push button as input
}
 
void loop() {
  
  button_status = digitalRead(push_button); //read the status of the push button
   
  if (button_status == HIGH) //check the status of the push button ethier HIGH or LOW
  {
  digitalWrite(LED, HIGH); //if condition is true, LED turns on
  } 
  
  else
  
  {
  digitalWrite(LED, LOW); //if condition is false, LED turns off
  }
}
