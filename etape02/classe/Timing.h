#ifndef TIMING
#define TIMING
#include <iostream>
#include <string.h>
using namespace std;
#include "Time.h"

namespace planning
{
	class Timing
	{
		private:
			string day;
			Time start;
			Time duration;
		public:
			static const string MONDAY;
			static const string TUESDAY;
			static const string WEDNESDAY;
			static const string THURSDAY;
			static const string FRIDAY;
			static const string SATERDAY;
			static const string SUNDAY;

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
}

#endif