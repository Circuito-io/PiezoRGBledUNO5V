#ifndef PIEZO_H
#define PIEZO_H

#include "arduino.h"

class Piezo
{
	public:
		Piezo(int pin);
		int read(); 
			
	private:
		int signalPin;
};
#endif //PIEZO_H
