/*
*How to operate push button using Arduino uno
*
*This is a very basic example which will help you to understand how buzzer can be operated by a push button using arduino uno.
*
*for more detail about this project please visit:https://arduinounomagic.blogspot.com/2019/03/how-to-operate-push-button-with-arduino.html#more
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/
const int push_button=8; //connect push button to pin number 8

const int BUZZER =  5;  //connect Buzzer to pin 5



void setup() {
  Serial.begin(9600); //intiallize serial communication
  pinMode(BUZZER, OUTPUT);    // Define buzzer as output.   
  pinMode(push_button, INPUT);  // Define push button as Input.   

}


void loop(){
  
  int state = digitalRead(push_button); // variable to store status of push button

  if (state == 1) // check the status of push button either HIGH (1) OR LOW (0)
   {     
     digitalWrite(BUZZER, 1);  // If input is High, buzzer operated
   } 
  else  
  {
     digitalWrite(BUZZER, 0);  // For every other condition make buzzer off
  }
  delay(10);
}
