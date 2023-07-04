#include "bluetoothhc.h"
#include <SoftwareSerial.h>
#include "HC06.h"

int rxPinHc = 10;
int txPinHc = 11;
SoftwareSerial blueToothSerialHc(rxPinHc, txPinHc);
HC06 btSerial = HC06(0, 0, rxPinHc, txPinHc); 

int inputStringHc = 0;
boolean stringCompleteHc = false;

BluetoothClassHC::BluetoothClassHC(){
  level = 0;
  stringCompleteHc = false;
}

char* strToChar(String s) {
	unsigned int bufSize = s.length() + 1;
	char* ret = new char[bufSize];
	s.toCharArray(ret, bufSize);
	return ret;
}

void BluetoothClassHC::inithc (int rx,int tx, String name, int code)
{
	rxPinHc = rx;
	txPinHc = tx;
	
	pinMode(rxPinHc, INPUT);
	pinMode(txPinHc, OUTPUT);

    Serial.begin(9600);
	
	btSerial = HC06(0, 0, rxPinHc, txPinHc); 
	
	
	String codePin = String(code);
	btSerial.findBaud();
	
	char *commandName = strToChar("AT+NAME" + name);
	btSerial.cmd(commandName, 1000);
	delay(1000);
	
	
	char *commandCodePin  = strToChar("AT+PIN" + codePin);
	btSerial.cmd(commandCodePin, 1000);
	delay(1000);
	
	blueToothSerialHc = SoftwareSerial(rxPinHc, txPinHc);
	blueToothSerialHc.begin(9600); 
	

}

void BluetoothClassHC::bluetoothLoopHc() {

  int  recvChar;
    if (blueToothSerialHc.available()) { 
      recvChar = blueToothSerialHc.read();
	  
	  Serial.println("Receive line");
	  Serial.println(recvChar);
	  inputStringHc = recvChar;
	  stringCompleteHc = true;

    }
}

boolean BluetoothClassHC::dataLineAvailableHc(void)
{
  if(stringCompleteHc==true)
  {
    stringCompleteHc = false;
	return true;
  } else {
	return false;
  }
}

int BluetoothClassHC::readDataLineHc(void)
{
  stringCompleteHc = false;
  Serial.println("readDataLine");
  return inputStringHc;
}
