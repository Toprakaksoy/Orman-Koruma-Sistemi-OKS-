#ifndef bluetoothhc_h
#define bluetoothhc_h

#include <Arduino.h>

class BluetoothClassHC
{
	public:
		BluetoothClassHC();
		void inithc(int rx,int tx, String name, int code);
		void bluetoothLoopHc();
		boolean dataLineAvailableHc(void);
		int readDataLineHc(void);
	private:
		int level;
		boolean stringCompleteHc;
};

#endif
