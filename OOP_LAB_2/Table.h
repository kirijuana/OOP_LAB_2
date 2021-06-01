#pragma once
#include <iostream>
#include <string>
#include <map>
#include "Ship.h"
#include "TransportShip.h"

using namespace std;

struct add_inf
{
	Ship *s;
	double distance_to_point;
};

class Table
{
protected:
	map<string, add_inf> arr;
public:
	Table() 
	{
	
	};

	Ship * getShip(const string c);
	unsigned int getNumb_of_ships() const;
	void addShip(string s, double d, Ship *sh);
	void deleteShip(string s);


	//void outTable()
	//{
	//	map<string, add_inf>::iterator p;
	//	int i = 0;
	//	for (p = arr.begin(); p != arr.end(); ++p)
	//	{
	//		p->second.s->Out();
	//	}
	//}
	
	void outTable();
	void outFileTable(ofstream &ofst);
	void InFileTable(ifstream &ifst);
	string getShip_name();
	map<string, add_inf> getArray();


};

