#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	
	led.setRGB(0,0,255);
	Serial.println("start");
	
}

void loop() 
{	
	int sample = piezo.read();
	if(sample > 10) //if sample above thershold
	{
			Serial.println("Piezo detect something, change LED");
			led.setRGB(255,0,0);
			delay(500);
			led.setRGB(0,255,0);
			delay(500);
			led.setRGB(0,0,255);     
	}
	delay(100);
}
