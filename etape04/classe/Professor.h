#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Schedulable.h"
#include <string>

class Professor :public Schedulable
{
	friend ostream& operator<<(ostream& s, const Professor& p);
	private:
		string lastName;
		string firstName;

	public:
		Professor();
		Professor(int id, string lastName, string firstName);
		Professor(const Professor& p);
		~Professor();

		void setLastName(string lastName);
		void setFirstName(string firstName);
		string getLastName()const;
		string getFirstName()const;

		Professor& operator=(const Professor& p);

		string toString() const override;
    	string tuple() const override;
};

#endif