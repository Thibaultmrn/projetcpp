#ifndef TIMING
#define TIMING
#include <iostream>
#include <string.h>
using namespace std;
#include "Time.h"
class Timing
{
	private:
		string day;
		Time start;
		Time duration;
	public:
		Timing();
		Timing(string d, Time s, Time du);
		Timing(const Timing &t);
		~Timing();

		void setDay(string d);
		void setStart(Time s);
		void setDuration(Time du);

		string getDay() const;
		Time getStart() const;
		Time getDuration() const;

		void display() const;
};
#endif