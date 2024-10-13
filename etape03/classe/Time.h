#ifndef TIME
#define TIME
#include <iostream>
using namespace std;
namespace planning
{
	class Time
	{
		friend Time operator+(const int t, const Time t1);
		friend Time operator+(const Time t1,const int t);
		private:
			int hour;
			int minute;
		public:
			Time(); //constructeur par defaut
			Time(int h, int m); //constructeur init heure
			Time(int m);//constr init duree
			Time(const Time &t); //constr de copie
			~Time(); //destructeur

			void setHour(int h);
			void setMinute(int m);
			int getHour() const;
			int getMinute() const;
			void display() const;

			Time& operator=(const Time& t);

	};
}

#endif