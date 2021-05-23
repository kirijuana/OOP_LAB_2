#pragma once

#include <iostream>
#include <string>

using namespace std;

	class Ship
	{
		//friend ostream & operator <<(ostream &out, const Ship &s)
		//{
		//	out << "Название судна: " << s.ship_name << ", водоизмещение: " << s.displacement << ", максимальная скорость: " << s.max_speed << ", членов экипажа: " << s.numb_of_members << endl;
		//	return out;
		//}
	protected:

		/*virtual std::ostream& show(std::ostream&) const = 0;*/

		string ship_name; // название судна
		unsigned int displacement; //водоизмещение
		unsigned int max_speed; // максимальная скорость
		unsigned int numb_of_members; // количество членов экипажа

	public:
		//Ship()
		//{
		//	ship_name = "NONE";
		//	displacement = 0;
		//	max_speed = 0;
		//	numb_of_members = 0;
		//}
		//Ship(string ship_n, unsigned int d, unsigned int m, unsigned int numb_of_memb)
		//{
		//	ship_name = ship_n;
		//	displacement = d;
		//	max_speed = m;
		//	numb_of_members = numb_of_memb;
		//}

		virtual void Out(/*ofstream &ofst*/) = 0;

		virtual string getShip_name() const = 0;
		virtual unsigned int getDisplacement() const = 0;
		virtual unsigned int getMax_speed() const = 0;
		virtual unsigned int getNumb_of_members() const = 0;

		virtual string setShip_name(string s) = 0;
		virtual unsigned int setDisplacement(unsigned int d) = 0;
		virtual unsigned int setMax_speed(unsigned int m) = 0;
		virtual unsigned int setNumb_of_members(unsigned int n) = 0;
	};
