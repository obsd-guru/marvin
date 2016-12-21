#include <SoftwareSerial.h>

// arduino connect to rs485 pins
#define SSerialRX 2
#define SSerialTX 3
#define SSerialTxControl 4
//***********************


#define RS485Transmit HIGH
#define RS485Recive   LOW

String readString;

SoftwareSerial RS485Serial (SSerialRX, SSerialTX);



void setup() {
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    
  Serial.begin(9600);
  Serial.println("Arduino Rs485 commiunication system");
  Serial.println("...................................");

  pinMode(SSerialTxControl, OUTPUT);
  digitalWrite(SSerialTxControl, RS485Recive);

  RS485Serial.begin(4800);

}


void serialRead() {
  while (RS485Serial.available()) {
    delay(10);
    if (RS485Serial.available() ){
      char c = RS485Serial.read();
      readString += c;};
    }
}



void loop() {
  
 if (RS485Serial.available() ) {
        readString= "";
        serialRead();
        String firstThree = readString.substring(0,12);
        Serial.println("");
        Serial.println(firstThree);


        if      (firstThree == "slave01 05=1") {
        Serial.println(" pin 5 set HIGH");
        digitalWrite(5,HIGH);
      }

        else if (firstThree == "slave01 06=1") {
        Serial.println(" pin 6 set HIGH");
        digitalWrite(6,HIGH);
      }
      
      else if (firstThree == "slave01 07=1") {
        Serial.println(" pin 7 set HIGH");
        digitalWrite(7,HIGH);
      }

      else if (firstThree == "slave01 08=1") {
        Serial.println(" pin 8 set HIGH");
        digitalWrite(8,HIGH);
      }

      else if (firstThree == "slave01 09=1") {
        Serial.println(" pin 9 set HIGH");
        digitalWrite(9,HIGH);
      }

      else if (firstThree == "slave01 10=1") {
        Serial.println(" pin 10 set HIGH");
        digitalWrite(10,HIGH);
      }

      else if (firstThree == "slave01 11=1") {
        Serial.println(" pin 11 set HIGH");
        digitalWrite(11,HIGH);
      }

      else if (firstThree == "slave01 12=1") {
        Serial.println(" pin 12 set HIGH");
        digitalWrite(12,HIGH);
      }

      else if (firstThree == "slave01 13=1") {
        Serial.println(" pin 13 set HIGH");
        digitalWrite(13,HIGH);
      }

      else if (firstThree == "slave01 A0=1") {
        Serial.println(" pin A0 set HIGH");
        digitalWrite(A0,HIGH);
      }

      else if (firstThree == "slave01 A1=1") {
        Serial.println(" pin A1 set HIGH");
        digitalWrite(A1,HIGH);
      }

      else if (firstThree == "slave01 A2=1") {
        Serial.println(" pin A2 set HIGH");
        digitalWrite(A2,HIGH);
      }

      else if (firstThree == "slave01 A3=1") {
        Serial.println(" pin A3 set HIGH");
        digitalWrite(A3,HIGH);
      }

      else if (firstThree == "slave01 A4=1") {
        Serial.println(" pin A4 set HIGH");
        digitalWrite(A4,HIGH);
      }

      else if (firstThree == "slave01 A5=1") {
        Serial.println(" pin A5 set HIGH");
        digitalWrite(A5,HIGH);
      }

      else if (firstThree == "slave01 05=0") {
        Serial.println(" pin 5 set LOW");
        digitalWrite(5,HIGH);
      }

      else if (firstThree == "slave01 06=0") {
        Serial.println(" pin 6 set LOW");
        digitalWrite(6,HIGH);
      }
      
      else if (firstThree == "slave01 07=0") {
        Serial.println(" pin 7 set LOW");
        digitalWrite(7,HIGH);
      }

      else if (firstThree == "slave01 08=0") {
        Serial.println(" pin 8 set LOW");
        digitalWrite(8,HIGH);
      }

      else if (firstThree == "slave01 09=0") {
        Serial.println(" pin 9 set LOW");
        digitalWrite(9,HIGH);
      }

      else if (firstThree == "slave01 10=0") {
        Serial.println(" pin 10 set LOW");
        digitalWrite(10,HIGH);
      }

      else if (firstThree == "slave01 11=0") {
        Serial.println(" pin 11 set LOW");
        digitalWrite(11,HIGH);
      }

      else if (firstThree == "slave01 12=0") {
        Serial.println(" pin 12 set LOW");
        digitalWrite(12,HIGH);
      }

      else if (firstThree == "slave01 13=0") {
        Serial.println(" pin 13 set LOW");
        digitalWrite(13,HIGH);
      }

      else if (firstThree == "slave01 A0=0") {
        Serial.println(" pin A0 set LOW");
        digitalWrite(A0,HIGH);
      }

      else if (firstThree == "slave01 A1=0") {
        Serial.println(" pin A1 set LOW");
        digitalWrite(A1,HIGH);
      }

      else if (firstThree == "slave01 A2=0") {
        Serial.println(" pin A2 set LOW");
        digitalWrite(A2,HIGH);
      }

      else if (firstThree == "slave01 A3=0") {
        Serial.println(" pin A3 set LOW");
        digitalWrite(A3,HIGH);
      }

      else if (firstThree == "slave01 A4=0") {
        Serial.println(" pin A4 set LOW");
        digitalWrite(A4,HIGH);
      }

      else if (firstThree == "slave01 A5=0") {
        Serial.println(" pin A5 set LOW");
        digitalWrite(A5,HIGH);
      }
      
else { Serial.println(" error command"); }
      


 }
}  








