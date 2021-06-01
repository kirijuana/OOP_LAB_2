#pragma once
#include <iostream>
#include <string.h>
#include <map>
#include "Captain.h"
#include "Armament.h"
#include "Ship.h"

using namespace std;

	class EscortShip : public Ship
	{
	protected:
		map<const int, Armament *> arr;
		Captain cap;
	public:
		EscortShip() : cap()
		{
			ship_name = "NONE";
			displacement = 0;
			max_speed = 0;
			numb_of_members = 0;
		}
		EscortShip(string ship_n, unsigned int r, string n, unsigned int ex, unsigned int d, unsigned int m, unsigned int numb_of_memb, unsigned int w) : cap(r, n, ex)
		{
			ship_name = "Судно_охранения";
			displacement = d;
			max_speed = m;
			numb_of_members = numb_of_memb;
		}

		void Out();
		void OutFile(ofstream &ofst);
		void InFile(ifstream &ifst);
	//	void gunShot(const unsigned int num);
		string getShip_name() const;
		unsigned int getDisplacement() const;
		unsigned int getMax_speed() const;
		unsigned int getNumb_of_members() const;
		string setShip_name(string s);
		unsigned int setDisplacement(unsigned int d);
		unsigned int setMax_speed(unsigned int m);
		unsigned int setNumb_of_members(unsigned int n);

	};
