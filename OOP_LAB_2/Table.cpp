#include "pch.h"
#include "Table.h"
#include <fstream>
#include "EscortShip.h"

Ship * Table::getShip(const string c)
{
	return arr[c].s;
}

unsigned int Table::getNumb_of_ships() const
{
	return static_cast<long unsigned>(arr.size());
}

void Table::addShip(string s, double d, Ship *sh)
{
	add_inf ex;
	ex.s = sh;
	ex.distance_to_point = d;

	arr.insert(pair<string, add_inf>(s, ex));
}

void Table::deleteShip(string s)
{
	arr.erase(s);
}

void Table::outTable()
{
	map<string, add_inf>::iterator p;
	int i = 0;
	for (p = arr.begin(); p != arr.end(); ++p)
	{
		cout << "Позывной: " << p->first << ", ";
		p->second.s->Out();
	}
}

void Table::outFileTable(ofstream &ofst)
{
	map<string, add_inf>::iterator p;
	int i = 0;
	for (p = arr.begin(); p != arr.end(); ++p)
	{
		cout << "Позывной: " << p->first << ", ";
		p->second.s->OutFile(ofst);
	}
}

void Table::InFileTable(ifstream &ifst)
{
	string name_;
	Ship *s;
	
	while (!ifst.eof())
	{
		ifst >> name_;
		if(name_ == "Судно_охранения")
		{ 
		//	s->InFile(ifst);	
			
		}
		if (name_ == "Транспортное_судно")
		{
//			s->InFile(ifst);		
		}
		
		add_inf ex;
//		ex.s = s;
		ex.distance_to_point = 1;

		arr.insert(pair<string, add_inf>("123", ex));
	}

}

string Table::getShip_name()
{
	map<string, add_inf>::iterator p;
	for (p = arr.begin(); p != arr.end(); ++p)
	{
		return p->second.s->getShip_name();
	}
}

map<string, add_inf> Table::getArray()
{
	return arr;
}