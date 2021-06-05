#include <VarSpeedServo.h> 
 
// a maximum of eight servo objects can be created 
// create servo object to control a servo 
VarSpeedServo myservo1;  // Left
VarSpeedServo myservo2;  // Mid
VarSpeedServo myservo3;  // Right
 
const int servoPin1 = 9;  // Left
const int servoPin2 = 10; // Mid
const int servoPin3 = 11; // Right

const int output_num = 9; // Output Num, Max 256

int i = 0;
int incomingByte[output_num];

int test() {
  myservo1.write(20,60,false); // set the intial position of the servo, as fast as possible, wait until done
  myservo2.write(0,60,false);  // set the intial position of the servo, as fast as possible, wait until done
  myservo3.write(70,60,false);  // set the intial position of the servo, as fast as possible, wait until done
  delay(600);
  myservo1.write(90,60,false); // set the intial position of the servo, as fast as possible, wait until done
  myservo2.write(100,60,false);  // set the intial position of the servo, as fast as possible, wait until done
  myservo3.write(0,60,false);  // set the intial position of the servo, as fast as possible, wait until done
  delay(600);
  myservo1.write(20,60,false); // set the intial position of the servo, as fast as possible, wait until done
  myservo2.write(0,60,false);  // set the intial position of the servo, as fast as possible, wait until done
  myservo3.write(70,60,false);  // set the intial position of the servo, as fast as possible, wait until done
}

void setup() {
  Serial.begin(9600);
  
  myservo1.attach(servoPin1);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(servoPin2);  // attaches the servo on pin 10 to the servo object
  myservo3.attach(servoPin3);  // attaches the servo on pin 11 to the servo object
  
  for(int a=0; a<2; a++){
  test();
  }
}

void loop() {
  if (Serial.available() >= output_num)
  {
    for (int i=0; i<output_num; i++)
    {
      incomingByte[i] = Serial.read();
    } 
    // myservo.write(degrees 0-180, speed 1-255, wait to complete true-false)
    // Max incomingByte 255
    
    // Left  
    while (incomingByte[0]>1) {
      // slow mode
      myservo1.write(70,10,false);
      break; 
    }
    while (incomingByte[1]>1) {
      // fast mode
      myservo1.write(70,100,false);
      break; 
    }
    while (incomingByte[2]>1){
      // default mode
      myservo1.write(20,50,false);
      break;
    }
    
    // Mid
    while (incomingByte[3]>1) {
      // slow mode
      myservo2.write(100,20,false);
      break; 
    }
    while (incomingByte[4]>1) {
      // fast mode
      myservo2.write(100,100,false);
      break; 
    }
    while (incomingByte[5]>1) {
      // default mode
      myservo2.write(0,50,false);
      break; 
    }

    // Right
    while (incomingByte[6]>1) {
      // slow mode
      myservo3.write(20,10,false);
      break;  
    }
    while (incomingByte[7]>1) {
      // fast mode
      myservo3.write(20,100,false);
      break; 
    }
    while (incomingByte[8]>1) {
      // default mode
      myservo3.write(70,50,false);
      break;
    }
   }                   
}
