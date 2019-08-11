/*
Braille language Programing
this Program designing for to teach the braille language.
if u type a "A" in serial monitor the related LED was HIGH in braille language,
Date 10/8/2018
*/
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX

const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int buz  = 8;

///////////////////////////////////////////
int incomingByte;  //BYTE RECEIVED FROM SERIAL PORT
int bluetoothTx = 0;  // TX-O pin of bluetooth mate, Arduino D2
int bluetoothRx = 1;
int count=0;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup() {
  //SETUP SERIAL
 // pinMode(0, INPUT); //SERIAL INPUT ON PIN 0 (RX)
 // pinMode(1, OUTPUT); //SERIAL OUTPUT ON PIN 1 (TX)
  Serial.begin(9600);

  bluetooth.begin(115200);  // The Bluetooth Mate defaults to 115200bps

 // mySerial.begin (9600);
  delay(100);

  bluetooth.begin(9600);  // Start bluetooth serial at 9600



  //SET ARDUINO R,G,B PINS FOR OUTPUT

  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT); 
  pinMode(led7, OUTPUT);
  pinMode(buz, OUTPUT);

  
}
int len;
void loop() {
  
  int d=6000;
  String word1="";
    if (Serial.available() > 0)
    {
       word1=Serial.readString();
    }
       len=word1.length();
       Serial.print(word1);
       /*if(word1[0]=='3')
       {
          d=3000;
       }
       else if(word1[0]=='5')
       {
          d=5000;
       }
       else if(word1[0]=='8')
       {
          d=8000;
       }*/
    
    while(count<len)
    {
      //incomingByte = Serial.read();
      
      //switch (char(incomingByte)) {
        switch(word1.charAt(count)){
        case 'A':
   
          digitalWrite(led2, HIGH);

          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);

          delay(d);
          digitalWrite(led2, LOW);

          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
           break;
        case 'B':
       

          digitalWrite(led2, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led6, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led7, LOW);
           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000); 

          break;
        case 'C':
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);

          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
          break;

        case 'D':
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led6, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          
          delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);                                  
          break;

        case 'E':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);

          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led3, LOW);
          digitalWrite(led7, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'F':
          digitalWrite(led3, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led6, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'G':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led4, LOW);
          digitalWrite(led7, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'H':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led5, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led7, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'I':
          digitalWrite(led5, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led2, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'J':
          digitalWrite(led6, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led5, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led2, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'K':
          digitalWrite(led6, HIGH);
          digitalWrite(led7, HIGH);

          digitalWrite(led5, LOW);
          digitalWrite(led2, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led3, LOW);
           
           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);                                  
          break;

        case 'L':
          digitalWrite(led3, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led4, HIGH);

          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
           
           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);                                  
          break;

        case 'M':
          digitalWrite(led4, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led7, LOW);
          digitalWrite(led3, LOW);
          digitalWrite(led6, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'N':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led4, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led3, LOW);
           
           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);                                  
          break;

        case 'O':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led4, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led3, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'P':
          digitalWrite(led2, HIGH);
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led5, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led6, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        

          break;

        case 'Q':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led7, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
          
                                                        

          break;

        case 'R':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led5, LOW);

          delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'S':
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led5, HIGH);

          digitalWrite(led6, LOW);
          digitalWrite(led2, LOW);
          digitalWrite(led7, LOW);
          

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
          break;

        case 'T':

          digitalWrite(led6, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led7, LOW);
          digitalWrite(led2, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;

        case 'U':
          digitalWrite(led2, HIGH);
          digitalWrite(led7, HIGH);
          digitalWrite(led4, HIGH);

          digitalWrite(led3, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led5, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        

          break;

        case 'V':

          digitalWrite(led2, HIGH);
          digitalWrite(led7, HIGH);
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led6, LOW);
          digitalWrite(led5, LOW);

            delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
         
                                                        
          break;

        case 'W':
          digitalWrite(led6, HIGH);
          digitalWrite(led7, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led3, HIGH);

          digitalWrite(led2, LOW);
          digitalWrite(led4, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
          
        

          break;


        case 'X':

          digitalWrite(led2, HIGH);
          digitalWrite(led7, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led4, HIGH);

          digitalWrite(led3, LOW);
          digitalWrite(led6, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;


        case 'Y':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led7, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led4, HIGH);

          digitalWrite(led3, LOW);

           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);
                                                        
          break;


        case 'Z':
          digitalWrite(led6, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, LOW);
          digitalWrite(led7, HIGH);
          digitalWrite(led4, HIGH);
          digitalWrite(led3, LOW);
         
           delay(d);
          digitalWrite(led2, LOW);
         
          digitalWrite(led3, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led6, LOW);
          digitalWrite(led7, LOW);
          delay(1000);                                              
          break;

        case '`':
          digitalWrite(led6, LOW);
          digitalWrite(led2, LOW);
          digitalWrite(led5, LOW);
          digitalWrite(led7, LOW);
          digitalWrite(led4, LOW);
          digitalWrite(led3, LOW);

          break;

        case ' ':
          
          
          digitalWrite(buz, HIGH);

          delay(2000);
          digitalWrite(buz, LOW);
          break;

          
          
      }
      count=count+1;
      delay(1000);

    
    }

    }
   
    //delay (1000);


  








