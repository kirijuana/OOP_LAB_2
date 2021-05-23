#pragma once

#include <iostream>
#include <string>

using namespace std;

class Armament
{
protected:
	float caliber;
	unsigned int firing_range;
	string location;
	unsigned int ammunition;
public:
	Armament()
	{
		caliber = 0;
		firing_range = 0;
		location = "NONE";
		ammunition = 0;
	}
	Armament(float c, unsigned int f_range, string loc, unsigned int am)
	{
		caliber = c;
		firing_range = f_range;
		location = loc;
		ammunition = am;
	}

	float getCaliber() const
	{
		return caliber;
	}

	unsigned int getFiring_range() const
	{
		return firing_range;
	}

	string getLocation() const
	{
		return location;
	}

	unsigned int getAmmunition() const
	{
		return ammunition;
	}

	float setCaliber(float c) 
	{
		return caliber = c;
	}

	unsigned int setFiring_range(unsigned int f)
	{
		return firing_range = f;
	}

	string setLocation(string l)
	{
		return location = l;
	}

	unsigned int setAmmunition(unsigned int a)
	{
		return ammunition = a;
	}

	void Shot()
	{
		ammunition--;
	}


};