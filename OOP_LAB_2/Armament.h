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

	float getCaliber() const;
	unsigned int getFiring_range() const;
	string getLocation() const;
	unsigned int getAmmunition() const;
	float setCaliber(float c);
	unsigned int setFiring_range(unsigned int f);
	string setLocation(string l);
	unsigned int setAmmunition(unsigned int a);
	void Shot();


};