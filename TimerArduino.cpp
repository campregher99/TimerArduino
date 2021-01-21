#include "TimerArduino.h"

bool isPassed()
{
	if(micros()<actualTime)
		return true;
	return false;
}

bool startCount()
{
	actualTime = micros() + getTimeMicros();
	return true;
}