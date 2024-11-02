#include "Time.h"
namespace planning
{
	Time::Time()//constructeur par defaut
	{
		#ifdef DEBUG
		cout << ">>> Time : constructeur par défaut <<<" << endl;
		#endif
		hour = 0;
		minute = 0;
	}
	Time::Time(int h, int m) //constructeur init heure
	{
		#ifdef DEBUG
		cout << ">>> Time: constructeur d'initialisation heure <<<" << endl;
		#endif
		hour = h;
		minute = m;
	}
	Time::Time(int m)//constr init duree
	{
		#ifdef DEBUG
		cout << ">>> Time: constructeur d'initialisation duree <<<" << endl;
		#endif
		hour = m / 60;
		minute = m % 60;
	}
	Time::Time(const Time &t) //constr de copie
	{
		#ifdef DEBUG
		cout << ">>> Time : constructeur de copie <<<" << endl;
		#endif
		setHour(t.getHour());
		setMinute(t.getMinute());
	}
	Time::~Time()//destructeur
	{
		#ifdef DEBUG
		cout << ">>> Time : destructeur <<<" << endl;
		#endif
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
}
