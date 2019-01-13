
#include "Adafruit_NeoPixel.h"
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);//RX=2,TX=3 


#define PIN 4
#define led_numbers  50   

#define BRIGHTNESS 50
Adafruit_NeoPixel strip = Adafruit_NeoPixel(led_numbers, PIN, NEO_GRB + NEO_KHZ800);

void setup()  {  
  //硬件串口波特率  
  Serial.begin(9600);  
  //软件串口波特率  
  mySerial.begin(9600);

   //strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  } 
  
  void loop(){  
     
      if(mySerial.available())  {   
        //从软件串口读出一字节，写入硬件串口   
         
          while(mySerial.available()){
            mySerial.read();
          }

        for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(random(0,190),random(0,190),random(0,190)));
             strip.setPixelColor(i-1,strip.Color(0,0,0));
             strip.show();
             delay(50);
         
    }
        
        for(int i=led_numbers;i>=0;i--){
             strip.setPixelColor(i,strip.Color(random(0,190),random(0,190),random(0,190)));
             strip.show();
             delay(50);
         }

for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(0,0,0));
             
         }
for(int i=0;i<=led_numbers;i++){
             strip.setPixelColor(i,strip.Color(random(0,190),random(0,190),random(0,190)));
             strip.show();
             delay(50);
         }
         for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(0,0,0));
             
         }
strip.show();
delay(200);



for(int i=0;i<=led_numbers;i++){
             strip.setPixelColor(i,strip.Color(random(0,190),random(0,190),random(0,190)));
             
             
         }
         strip.show();
         delay(200);
         for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(0,0,0));
             
         }
strip.show();
delay(200);


         for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(190,0,0));
             
         }
        strip.show();

        delay(500);   
        
for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(0,0,0));
             
         }
strip.show();
delay(200);
for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(190,0,0));
             
         }
        strip.show();

        delay(500); 


for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(0,0,0));
             
         }
strip.show();
delay(200);
for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(190,0,0));
             
         }
        strip.show();

        delay(2000);
          
        
for(int i=0;i<led_numbers;i++){
             strip.setPixelColor(i,strip.Color(0,0,0));
             
         }
strip.show();

          mySerial.print("111"); 
          
        }
    }
  
