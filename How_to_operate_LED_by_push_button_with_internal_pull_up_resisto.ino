/*
*How to operate LED by push button with internal pull up resistor using Arduino uno
*
*This is a very basic example which will help you to understand how LED can be operated by a push button with INTERNAL_PULLUP argument with pinMode() command.
*
*for more detail about this project please visit:https://arduinounomagic.blogspot.com/2019/03/how-to-operate-push-button-with-arduino.html#more
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/
const int push_button=7; //Push buton is connected to pin 7
const int LED = 8; // LED is connected to pin 8
 
int button_state = 0; //Variable to store the bushbutton state
 
void setup()
{
  Serial.begin(9600);//Intiallize the serial connection
  pinMode(LED, OUTPUT); // Intiallize LED as output
  pinMode(push_button, INPUT_PULLUP); //Intiallize push button in input pull up mode
}
 
void loop()
{

  button_state = digitalRead(push_button);// Read the push button state

  if (button_state == 1) //Check the state is HIGH or LOW and operate LED accordingly
  {
     digitalWrite(LED, 0);// Turn off LED 
  } 
  else 
  {
    digitalWrite(LED, 1); //Turn on LED
  }
}
