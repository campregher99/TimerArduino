#ifndef TIMER_ARDUINO_H
#define TIMER_ARDUINO_H 

#include "Timer.h"

class TimerArduino : public Timer
{
private:
	unsigned long long int actualTime {0};

public:
	TimerArduino() = default;
	~TimerArduino() = default;

	bool isPassed();
	bool startCount();
	
};

#endif