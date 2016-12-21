#include <SoftwareSerial.h>

// arduino connect to rs485 pins
#define SSerialRX 2
#define SSerialTX 3
#define SSerialTxControl 4
//***********************

#define RS485Transmit HIGH
#define RS485Recive   LOW



SoftwareSerial RS485Serial (SSerialRX, SSerialTX);
unsigned char byteReceived;


void setup() {
  Serial.begin(9600);
  Serial.println("Arduino Rs485 commiunication system");
  Serial.println("...................................");

  pinMode(SSerialTxControl, OUTPUT);
  digitalWrite(SSerialTxControl, RS485Recive);

  RS485Serial.begin(4800);

}

void loop() {
  
  if (Serial.available())
    {
      
       byteReceived = Serial.read();
      

      digitalWrite (SSerialTxControl, RS485Transmit);
      RS485Serial.write(byteReceived);
      

    }

}
