//This code is created by #ATALL youtube channel. For more information visit : 'atall robotics' on youtube

//***************************************************************************************************************  
//     ||  ||     ||   ||||||||   ||   ||       ||
//   |||||||||| ||  ||    ||    ||  || ||       ||            
//     ||  ||   ||  ||    ||    ||  || ||       ||               
//   |||||||||| ||||||    ||    |||||| ||       ||                   
//     ||  ||   ||  ||    ||    ||  || |||||||| ||||||||                  
//***************************************************************************************************************

#include <Servo.h>
#define d 300
Servo front;
Servo back;

 int pos1 = 115; int pos2  = 105;
 void setup() {
  Serial.begin(115200);
  front.attach(3);             // 1 --> stand position = 110 degree
  back.attach(5);             // 2 --> stand position = 110 degree
  
 front.write(pos1);
 back.write(pos2);
 delay(3000);
}

int state;
void loop() 
{
   front.write(70);
   delay(d);
   back.write(150); 
   delay(d);
   front.write(170);
   delay(d);
   back.write(60);
   delay(d);  
   

}
