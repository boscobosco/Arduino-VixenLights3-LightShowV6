const int ShiftPWM_latchPin = 8;    //ArduinoPin8, 74HC595 Pin12 ST_CP/RCLK (Green Wire)
//const int ShiftPWM_dataPin = 11;  //ArduinoPin11, 74HC595 Pin14 DS/SER (Blue Wire)
//const int ShiftPWM_clockPin = 13; //ArduinoPin13, 74HC595 Pin11 SH_CP/SRCLK (Yellow Wire)

// If your LED's turn on if the pin is low, set this to true, otherwise set it to false.
const bool ShiftPWM_invertOutputs = false; //true or false

// You can enable the option below to shift the PWM phase of each shift register by 8 compared to the previous.
// This will slightly increase the interrupt load, but will prevent all PWM signals from becoming high at the same time.
// This will be a bit easier on your power supply, because the current peaks are distributed.
const bool ShiftPWM_balanceLoad = false; //true or false

#include <ShiftPWM.h> // include ShiftPWM.h after setting the pins!

// Here you set the number of brightness levels, the update frequency and the number of shift registers.
unsigned char maxBrightness = 255;
unsigned char pwmFrequency = 75;
int numRegisters = 10; // Num of 74HC595
int numRGBleds = numRegisters*8/3;
int i = 0;
const int output_num = 80; // Output Num, Max 256
int incomingByte[output_num]; //Num of LEDS

int test() {
    ShiftPWM.SetAll(0);
    delay(500);
    ShiftPWM.SetAll(255);
    delay(500);
  }

void setup(){
Serial.begin(9600); //9600 or 115200
Serial.println("Ready");

// Sets the number of 8-bit registers that are used.
ShiftPWM.SetAmountOfRegisters(numRegisters);
ShiftPWM.SetPinGrouping(1); //This is the default, but I added here to demonstrate how to use the funtion
ShiftPWM.Start(pwmFrequency,maxBrightness);

for(int a=0; a<3; a++){
  test();
  }
ShiftPWM.SetAll(0);

Serial.println("Start");
}

void loop(){ 
    if (Serial.available() >= output_num) //Num of LEDS
    {
// read the oldest byte in the serial buffer:
      for (int i=0; i<output_num; i++) //Num of LEDS
      {
// read each byte
        incomingByte[i] = Serial.read();
        //Serial.println(incomingByte[i]);
      }
        //ShiftPWM.SetOne(N,incomingByte[N]); //Num of LEDS
        ShiftPWM.SetOne(0,incomingByte[0]);
        ShiftPWM.SetOne(1,incomingByte[1]);
        ShiftPWM.SetOne(2,incomingByte[2]);
        ShiftPWM.SetOne(3,incomingByte[3]);
        ShiftPWM.SetOne(4,incomingByte[4]);
        ShiftPWM.SetOne(5,incomingByte[5]);
        ShiftPWM.SetOne(6,incomingByte[6]);
        ShiftPWM.SetOne(7,incomingByte[7]);
        ShiftPWM.SetOne(8,incomingByte[8]);
        ShiftPWM.SetOne(9,incomingByte[9]);
        ShiftPWM.SetOne(10,incomingByte[10]);
        ShiftPWM.SetOne(11,incomingByte[11]);
        ShiftPWM.SetOne(12,incomingByte[12]);
        ShiftPWM.SetOne(13,incomingByte[13]);
        ShiftPWM.SetOne(14,incomingByte[14]);
        ShiftPWM.SetOne(15,incomingByte[15]);
        ShiftPWM.SetOne(16,incomingByte[16]);
        ShiftPWM.SetOne(17,incomingByte[17]);
        ShiftPWM.SetOne(18,incomingByte[18]);
        ShiftPWM.SetOne(19,incomingByte[19]);
        ShiftPWM.SetOne(20,incomingByte[20]);
        ShiftPWM.SetOne(21,incomingByte[21]);
        ShiftPWM.SetOne(22,incomingByte[22]);
        ShiftPWM.SetOne(23,incomingByte[23]);
        ShiftPWM.SetOne(24,incomingByte[24]);
        ShiftPWM.SetOne(25,incomingByte[25]);
        ShiftPWM.SetOne(26,incomingByte[26]);
        ShiftPWM.SetOne(27,incomingByte[27]);
        ShiftPWM.SetOne(28,incomingByte[28]);
        ShiftPWM.SetOne(29,incomingByte[29]);
        ShiftPWM.SetOne(30,incomingByte[30]);
        ShiftPWM.SetOne(31,incomingByte[31]);
        ShiftPWM.SetOne(32,incomingByte[32]);
        ShiftPWM.SetOne(33,incomingByte[33]);
        ShiftPWM.SetOne(34,incomingByte[34]);
        ShiftPWM.SetOne(35,incomingByte[35]);
        ShiftPWM.SetOne(36,incomingByte[36]);
        ShiftPWM.SetOne(37,incomingByte[37]);
        ShiftPWM.SetOne(38,incomingByte[38]);
        ShiftPWM.SetOne(39,incomingByte[39]);
        ShiftPWM.SetOne(40,incomingByte[40]);
        ShiftPWM.SetOne(41,incomingByte[41]);
        ShiftPWM.SetOne(42,incomingByte[42]);
        ShiftPWM.SetOne(43,incomingByte[43]);
        ShiftPWM.SetOne(44,incomingByte[44]);
        ShiftPWM.SetOne(45,incomingByte[45]);
        ShiftPWM.SetOne(46,incomingByte[46]);
        ShiftPWM.SetOne(47,incomingByte[47]);
        ShiftPWM.SetOne(48,incomingByte[48]);
        ShiftPWM.SetOne(49,incomingByte[49]);
        ShiftPWM.SetOne(50,incomingByte[50]);
        ShiftPWM.SetOne(51,incomingByte[51]);
        ShiftPWM.SetOne(52,incomingByte[52]);
        ShiftPWM.SetOne(53,incomingByte[53]);
        ShiftPWM.SetOne(54,incomingByte[54]);
        ShiftPWM.SetOne(55,incomingByte[55]);
        ShiftPWM.SetOne(56,incomingByte[56]);
        ShiftPWM.SetOne(57,incomingByte[57]);
        ShiftPWM.SetOne(58,incomingByte[58]);
        ShiftPWM.SetOne(59,incomingByte[59]);
        ShiftPWM.SetOne(60,incomingByte[60]);
        ShiftPWM.SetOne(61,incomingByte[61]);
        ShiftPWM.SetOne(62,incomingByte[62]);
        ShiftPWM.SetOne(63,incomingByte[63]);
        ShiftPWM.SetOne(64,incomingByte[64]);
        ShiftPWM.SetOne(65,incomingByte[65]);
        ShiftPWM.SetOne(66,incomingByte[66]);
        ShiftPWM.SetOne(67,incomingByte[67]);
        ShiftPWM.SetOne(68,incomingByte[68]);
        ShiftPWM.SetOne(69,incomingByte[69]);
        ShiftPWM.SetOne(70,incomingByte[70]);
        ShiftPWM.SetOne(71,incomingByte[71]);
        ShiftPWM.SetOne(72,incomingByte[72]);
        ShiftPWM.SetOne(73,incomingByte[73]);
        ShiftPWM.SetOne(74,incomingByte[74]);
        ShiftPWM.SetOne(75,incomingByte[75]);
        ShiftPWM.SetOne(76,incomingByte[76]);
        ShiftPWM.SetOne(77,incomingByte[77]);
        ShiftPWM.SetOne(78,incomingByte[78]);
        ShiftPWM.SetOne(79,incomingByte[79]);
    }
}
