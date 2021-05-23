#pragma once
#include <iostream>
#include <string>
#include <map>
#include "Ship.h"

using namespace std;
class Table
{
protected:
	map<const int, Ship *> arr;
	string callsign; // позывной
	unsigned int distance_to_point;
public:
	Table() {};

	~Table()
	{
		map<const int, Ship *>::iterator p;
		for (p = arr.begin(); p != arr.end(); ++p)
		{
			delete p->second;
			p->second = nullptr;
		}
		
	}
	
	Ship & getShip(const string c) 
	{ 
		if (arr[0].callsign == c)
		{

		}


	}
};