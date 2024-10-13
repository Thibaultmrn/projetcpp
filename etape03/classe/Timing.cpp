#include "Timing.h"
namespace planning
{
	Timing::Timing()
	{
		//cout << ">>> Timing : constructeur par défaut <<<" << endl;
		setDay("Lundi");
		start = 0;
		duration = 0;
	}
	Timing::Timing(const string& d, const Time& s,const Time& du)
	{
		//cout << ">>> Timing : constructeur d'initialisation <<<" << endl;
	 	setDay(d);
	 	setStart(s);
	 	setDuration(du);
	}
	Timing::Timing(const Timing &t)
	{
		//cout << ">>> Timing : constructeur de copie <<<" << endl;
	  	setDay(t.getDay());
	 	setStart(t.getStart());
	  	setDuration(t.getDuration());
	}
	Timing::~Timing()
	{
	  //cout << ">>> Timing : destructeur <<<" << endl;
	}
	void Timing::setDay(const string& d)
	{
		day = d;
	}
	void Timing::setStart(const Time& s)
	{
		start = s;
	}
	void Timing::setDuration(const Time& du)
	{
		duration = du;
	}

	string Timing::getDay() const
	{
		return day;
	}
	Time Timing::getStart() const
	{
		return start;
	}
	Time Timing::getDuration() const
	{
		return duration;
	}

	void Timing::display() const
	{
		cout << "Timing :" << day << " a ";
		start.display();
		cout<<" (";
		duration.display() ;
		cout << ") ";
	}
	const string Timing::MONDAY = "Lundi";
	const string Timing::TUESDAY = "Mardi";
	const string Timing::WEDNESDAY = "Mercredi";
	const string Timing::THURSDAY = "Jeudi";
	const string Timing::FRIDAY = "Vendredi";
	const string Timing::SATERDAY = "Samedi";
	const string Timing::SUNDAY= "Dimanche";
}