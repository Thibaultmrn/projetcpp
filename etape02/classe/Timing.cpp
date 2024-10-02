#include "Timing.h"
Timing::Timing()
{
	cout << ">>> Timing : constructeur par défaut <<<" << endl;
	setDay("---");
	start = 0;
	duration = 0;
}
Timing::Timing(string d, Time s, Time du)
{
	cout << ">>> Timing : constructeur d'initialisation <<<" << endl;
 	setDay(d);
 	setStart(s);
 	setDuration(du);
}
Timing::Timing(const Timing &t)
{
	cout << ">>> Timing : constructeur de copie <<<" << endl;
  	setDay(t.getDay());
 	setStart(t.getStart());
  	setDuration(t.getDuration());
}
Timing::~Timing()
{
  cout << ">>> Timing : destructeur <<<" << endl;
}
void Timing::setDay(string d)
{
	day = d;
}
void Timing::setStart(Time s)
{
	start = s;
}
void Timing::setDuration(Time du)
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
	cout << day << endl;
	start.display();
	duration.display();
}