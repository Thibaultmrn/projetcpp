#include "Group.h"
#include <iostream>
#include <sstream>
Group::Group()
{
	#ifdef DEBUG
	cout << ">>> Group : constructeur par défaut <<<" << endl;
	#endif
	id = 0;
	name = "---";
}

Group::Group(int id, string name)
{
	#ifdef DEBUG
	cout << ">>> Group: constructeur d'initialisation <<<" << endl;
	#endif
	this->id = id;
	this->name = name;
}

Group::Group(const Group& g)
{
	#ifdef DEBUG
	cout << ">>> Group : constructeur de copie <<<" << endl;
	#endif
	this->id = g.id;
	this->name = g.name;
}

Group::~Group()
{
	#ifdef DEBUG
	cout << ">>> Group : destructeur <<<" << endl;
	#endif
}

void Group::setName(string name)
{
	this->name = name;
}
string Group::getName()const
{
	return name;
}

ostream& operator<<(ostream& s, const Group& g)
{
	s << g.name << " "<<g.id;
	return s;
}

Group& Group::operator=(const Group& g)
{
	id = g.id;
	name = g.name;

	return (*this);
}

string Group::toString()const
{
	ostringstream oss;
	oss <<this->name;
    return oss.str();
}
string Group::tuple()const
{
	ostringstream oss;
	oss  << this->id << ";"<< this->name;
    return oss.str();
}