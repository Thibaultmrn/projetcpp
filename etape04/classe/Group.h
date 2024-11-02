#ifndef GROUPE_H
#define GROUPE_H

#include "Schedulable.h"
#include <string>
class Group :public Schedulable
{
	friend ostream& operator<<(ostream& s, const Group& g);
	private:
		string name;

	public:
		Group();
		Group(int id, string name);
		Group(const Group& g);
		~Group();

		void setName(string name);
		string getName()const;

		Group& operator=(const Group& g);

		string toString()const override;
		string tuple()const override;

};

#endif