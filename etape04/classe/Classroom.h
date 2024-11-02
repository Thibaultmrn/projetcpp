#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Schedulable.h"
#include <string>

class Classroom :public Schedulable
{
	friend ostream& operator<<(ostream& s, const Classroom& c);
	private:
		string name;
		int seatingCapacity;

	public:
		Classroom();
		Classroom(int id, string name, int seatingCapacity);
		Classroom(const Classroom& c);
		~Classroom();

		void setName(string name);
		void setSeatingCapacity(int seatingCapacity);
		string getName();
		int getSeatingCapacity();

		Classroom& operator=(const Classroom& c);

		string toString()const override;
		string tuple()const override;
};

#endif