#include "TimerArduino.h"

bool TimerArduino::isPassed()
{
	if(micros()<actualTime)
		return true;
	return false;
}

bool TimerArduino::startCount()
{
	actualTime = micros() + getTimeMicros();
	return true;
}