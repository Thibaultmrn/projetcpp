#include "Schedulable.h"

Schedulable::Schedulable()
{
	#ifdef DEBUG
	cout << ">>> Schedulable: constructeur par défaut <<<" << endl;
	#endif
	id = 0;
}
Schedulable::Schedulable(int id)
{
	#ifdef DEBUG
	cout << ">>> Schedulable: constructeur d'initialisation <<<" << endl;
	#endif
	this->id = id;
}
Schedulable::Schedulable(const Schedulable& S)
{
	#ifdef DEBUG
	cout << ">>> Schedulable : constructeur de copie <<<" << endl;
	#endif
	this->id = S.id;
}
Schedulable::~Schedulable()
{
	#ifdef DEBUG
	cout << ">>> Schedulable : destructeur <<<" << endl;
	#endif
}

void Schedulable::setId(int id)
{
	this->id = id;
}
int Schedulable::getId() const
{
	return id;
}

