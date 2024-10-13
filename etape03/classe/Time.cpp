#include "Time.h"
namespace planning
{
	Time::Time()//constructeur par defaut
	{
		//cout << ">>> Time : constructeur par défaut <<<" << endl;
		hour = 0;
		minute = 0;
	}
	Time::Time(int h, int m) //constructeur init heure
	{
		//cout << ">>> Time: constructeur d'initialisation heure <<<" << endl;
		hour = h;
		minute = m;
	}
	Time::Time(int m)//constr init duree
	{
		//cout << ">>> Time: constructeur d'initialisation duree <<<" << endl;
		hour = m / 60;
		minute = m % 60;
	}
	Time::Time(const Time &t) //constr de copie
	{
		//cout << ">>> Time : constructeur de copie <<<" << endl;
		setHour(t.getHour());
		setMinute(t.getMinute());
	}
	Time::~Time()//destructeur
	{
		//cout << ">>> Time : destructeur <<<" << endl;
	}
	int Time::getHour() const
	{
		return hour;
	}
	int Time::getMinute() const
	{
		return minute;
	}
	void Time::setHour(int h)
	{
		if(h < 0 || h > 23) return;
		hour = h;
	}
	void Time::setMinute(int m)
	{
		if(m < 0 || m > 59) return;
		minute = m;
	}
	void Time::display() const
	{
		if(hour < 10)
			cout << "0";
		cout << hour << "h";
		if(minute < 10)
			cout << "0";
		 cout<< minute;
	}

	Time& Time::operator=(const Time& t)
	{
		hour = t.hour;
		minute = t.minute;

		return (*this);
	}
	Time operator+(const int t, const Time t1)
	{
		Time time(t1);
		time.minute += t;

		return time;
	}
	Time operator+( const Time t1, const int t)
	{
		return t1 + t;
	}
}
