#pragma once
#include <iostream>
#include <string.h>
#include <map>
#include "Capitan.h"
#include "Armament.h"
#include "Ship.h"

using namespace std;

	class EscortShip : public Ship, public Capitan
	{
	protected:

		map<const int, Armament *> arr;

	public:
		EscortShip()
		{
			ship_name = "NONE";
			rank = 0; // звание капитана
			name = "NONE"; // ФИО
			experience = 0; // стаж
			displacement = 0;
			max_speed = 0;
			numb_of_members = 0;

		}
		EscortShip(string ship_n, unsigned int r, string n, unsigned int ex, unsigned int d, unsigned int m, unsigned int numb_of_memb, unsigned int w)
		{
			ship_name = ship_n;
			rank = r;
			name = n;
			experience = ex;
			displacement = d;
			max_speed = m;
			numb_of_members = numb_of_memb;
		}
		~EscortShip()
		{
			map<const int, Armament *>::iterator p;
			for (p = arr.begin(); p != arr.end(); ++p)
			{
				delete p->second;
				p->second = nullptr;
			}
		}

		void Out(/*ofstream &ofst*/);

		string getShip_name() const
		{
			return ship_name;
		}

		unsigned int getDisplacement() const
		{
			return displacement;
		}

		unsigned int getMax_speed() const
		{
			return max_speed;
		}

		unsigned int getNumb_of_members() const
		{
			return numb_of_members;
		}

		string setShip_name(string s)
		{
			return ship_name = s;
		}

		unsigned int setDisplacement(unsigned int d)
		{
			return displacement = d;
		}

		unsigned int setMax_speed(unsigned int m)
		{
			return max_speed = m;
		}

		unsigned int setNumb_of_members(unsigned int n)
		{
			return numb_of_members = n;
		}
	};
