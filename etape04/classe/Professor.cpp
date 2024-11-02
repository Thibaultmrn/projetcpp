#include "Professor.h"
#include <iostream>
#include <sstream>

Professor::Professor()
{
	#ifdef DEBUG
	cout << ">>> Professor : constructeur par défaut <<<" << endl;
	#endif
	id = 0;
	lastName = firstName = "---";
}
Professor::Professor(int id,string lastName, string firstName)
{
	#ifdef DEBUG
	cout << ">>> Professor: constructeur d'initialisation <<<" << endl;
	#endif
	this->id = id;
	this->lastName = lastName;
	this->firstName= firstName;
}
Professor::Professor(const Professor& p)
{
	#ifdef DEBUG
	cout << ">>> Professor : constructeur de copie <<<" << endl;
	#endif
	this->id = p.id;
	this->lastName = p.lastName;
	this->firstName= p.firstName;
}
Professor::~Professor()
{
	#ifdef DEBUG
	cout << ">>> Professor : destructeur <<<" << endl;
	#endif
}

void Professor::setLastName(string lastName)
{
	this->lastName=lastName;
}
void Professor::setFirstName(string firstName)
{
	this->firstName=firstName;
}

string Professor::getLastName()const
{
	return lastName;
}
string Professor::getFirstName()const
{
	return firstName;
}

ostream& operator<<(ostream& s, const Professor& p)
{
	s << p.id <<" " << p.lastName <<" "  << p.firstName;
	return s;
}

Professor& Professor::operator=(const Professor& p)
{
	id = p.id;
	lastName = p.lastName;
	firstName = p.firstName;

	return (*this);
}


string Professor::toString() const 
{
	ostringstream oss;
	oss << this->firstName << " " << this->lastName;
    return oss.str();
}

string Professor::tuple() const 
{
    ostringstream oss;
	oss  << this->id<<";"<< this->firstName << ";" << this->lastName<< " ";
    return oss.str();
}