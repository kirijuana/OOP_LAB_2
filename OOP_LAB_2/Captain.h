#pragma once

#include <iostream>
#include <string>

using namespace std;

class Captain
{
protected:

	unsigned int rank; // звание капитана
	string name; // ФИО
	unsigned int experience; // стаж

public:
	Captain() : rank(0), name("NONE"), experience(0)
	{
	}
	Captain(unsigned int r, string n, unsigned int ex) : rank(r), name(n), experience(ex)
	{
	}

	unsigned int getRank() const;
	string getName() const;
	unsigned int getExperience() const;

	string setName(string s);
	unsigned int setRank(unsigned int r);
	unsigned int setExperience(unsigned int e);
};