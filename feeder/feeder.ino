#include <Servo.h>

// need to modify the servo...
// should find a better approach to this...
// servo tuning value for stop.
int servo1val  = 90;
int servo2val  = 90;
int servo3val  = 90;
int servo4val  = 90;
int servo5val  = 90;
int servo6val  = 90;
int servo7val  = 90;
int servo8val  = 90;
int servo9val  = 90;
int servo10val = 90;
int servo11val = 90;
int servo12val = 90;
int servo13val = 90;
int servo14val = 90;
int servo15val = 90;
int servo16val = 90;
int servo17val = 90;
int servo18val = 90;
int servo19val = 90;
int servo20val = 90;

// servo definitions
Servo servo1; 
Servo servo2; 
Servo servo3; 
Servo servo4; 
Servo servo5; 
Servo servo6; 
Servo servo7; 
Servo servo8; 
Servo servo9; 
Servo servo10; 
Servo servo11; 
Servo servo12; 
Servo servo13; 
Servo servo14; 
Servo servo15;
Servo servo16; 
Servo servo17; 
Servo servo18; 
Servo servo19; 
Servo servo20; 


void setup() {
  // put your setup code here, to run once:
  //need to attach the servos
  // this list is where the servos are connected
servo1.attach(31);
servo2.attach(32);
servo3.attach(33);
servo4.attach(34);
servo5.attach(35);
servo6.attach(36);
servo7.attach(37);
servo8.attach(38);
servo9.attach(39);
servo10.attach(40);
servo11.attach(41);
servo12.attach(42);
servo13.attach(43);
servo14.attach(44);
servo15.attach(45);
servo16.attach(46);
servo17.attach(47);
servo18.attach(48);
servo19.attach(49);
servo20.attach(50);

}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available() > 0)   // see if incoming serial data:
  { 
    inData = Serial.read();  // read oldest byte in serial buffer:
  } 
  
 if (inData == 'F'){
        a = Serial.parseInt();
        inData = 0;
        
 switch (var) {
   
          case 1:
             myservo.write(servo1val+50);                  // sets the servo position according to the scaled value 
             delay(15);
             while(digitalRead()== HIGH){
               }
               myservo.write(servo1val);  
               a = 0;
          break;
          
          case 2:
           //do something when var equals 2
          break;
          
          case 3:
            //do something when var equals 1
          break;
          
          case 4:
           //do something when var equals 2
          break;
          case 5:
            //do something when var equals 1
          break;
          
          case 6:
           //do something when var equals 2
          break;
          
          case 7:
            //do something when var equals 1
          break;
          case 8:
           //do something when var equals 2
          break;
          case 9:
            //do something when var equals 1
          break;
          case 10:
           //do something when var equals 2
          break;
          case 11:
            //do something when var equals 1
          break;
          case 12:
           //do something when var equals 2
          break;
          case 13:
            //do something when var equals 1
          break;
          case 14:
           //do something when var equals 2
          break;
          case 15:
            //do something when var equals 1
          break;
          case 16:
           //do something when var equals 2
          break;
          case 17:
            //do something when var equals 1
          break;
          case 18:
           //do something when var equals 2
          break;
          case 19:
            //do something when var equals 1
          break;
          case 20:
           //do something when var equals 2
          break;
          
          default: 
          // if nothing else matches, do the default
          // default is optional
          
  }
  } 

}
