#include "Classroom.h"
#include <iostream>
#include <sstream>

Classroom::Classroom()
{
	#ifdef DEBUG
	cout << ">>> Classroom : constructeur par défaut <<<" << endl;
	#endif
	name = "---";
	id = seatingCapacity = 0;
}

Classroom::Classroom(int id, string name, int seatingCapacity)
{
	#ifdef DEBUG
	cout << ">>> Classroom: constructeur d'initialisation <<<" << endl;
	#endif
	this->id = id;
	this->name = name;
	this->seatingCapacity = seatingCapacity;
}

Classroom::Classroom(const Classroom& c)
{
	#ifdef DEBUG
	cout << ">>> Classroom : constructeur de copie <<<" << endl;
	#endif
	this->id = c.id;
	this->name = c.name;
	this->seatingCapacity = c.seatingCapacity;
}

Classroom::~Classroom()
{
	#ifdef DEBUG
	cout << ">>> Classroom : destructeur <<<" << endl;
	#endif
}

void Classroom::setName(string name)
{
	this->name = name;
}
void Classroom::setSeatingCapacity(int seatingCapacity)
{
	this->seatingCapacity = seatingCapacity;
}
string Classroom::getName()
{
	return name;
}
int Classroom::getSeatingCapacity()
{
	return seatingCapacity;
}

Classroom& Classroom::operator=(const Classroom& c)
{
	id = c.id;
	name = c.name;
	seatingCapacity = c.seatingCapacity;

	return (*this);
}

ostream& operator<<(ostream& s, const Classroom& c)
{
	s << c.id <<" "<<c.name<<" "<<c.seatingCapacity;

	return s;
}

string Classroom::toString()const
{
	ostringstream oss;

	oss<<this->name<<"("<<this->seatingCapacity<<")";

	return oss.str();
}
string Classroom::tuple()const
{
	ostringstream oss;

	oss<<this->id<<";"<<this->name<<"("<<this->seatingCapacity<<")";

	return oss.str();
}