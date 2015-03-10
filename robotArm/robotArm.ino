#include <ctype.h>
#include <string.h>
#include <Wire.h>
#include <Servo.h>



byte dt[4];
int pin[4] = {3,5,6,9};
Servo servoList[4];


void receiveEvent(int howMany) 
{
     while(Wire.available()) {
         
         for(int i=0;i < 4;i++)
         {
            dt[i] = Wire.read();
            
            servoList[i].write((int)dt[i]);
            
         }
        
         
   }
}

void requestEvent() 
{

}


void setup()
{
     Serial.begin(9600);
     Wire.begin(0x8);
     Wire.onRequest(requestEvent);
     Wire.onReceive(receiveEvent);
     
     for(int i=0;i < 4;i++)
     {
       servoList[i].attach(pin[i]);
     }
}


void loop()
{
}
