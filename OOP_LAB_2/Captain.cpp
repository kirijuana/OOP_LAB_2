#include "pch.h"
#include "Captain.h"

unsigned int Captain::getRank() const
{
	return rank;
}

string Captain::getName() const
{
	return name;
}

unsigned int Captain::getExperience() const
{
	return experience;
}

string Captain::setName(string s)
{
	return name = s;
}
unsigned int Captain::setRank(unsigned int r)
{
	return rank = r;
}
unsigned int Captain::setExperience(unsigned int e)
{
	return experience = e;
}
