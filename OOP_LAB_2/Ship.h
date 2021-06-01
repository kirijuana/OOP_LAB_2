#pragma once

#include <iostream>
#include <string>

using namespace std;

	class Ship
	{
	protected:
		string ship_name; // название судна
		unsigned int displacement; //водоизмещение
		unsigned int max_speed; // максимальная скорость
		unsigned int numb_of_members; // количество членов экипажа

	public:
		Ship() {};

		virtual void Out() = 0;
		virtual void OutFile(ofstream &ofst) = 0;
		virtual void InFile(ifstream &ifst) = 0;

		virtual string getShip_name() const = 0;
		virtual unsigned int getDisplacement() const = 0;
		virtual unsigned int getMax_speed() const = 0;
		virtual unsigned int getNumb_of_members() const = 0;

		virtual string setShip_name(string s) = 0;
		virtual unsigned int setDisplacement(unsigned int d) = 0;
		virtual unsigned int setMax_speed(unsigned int m) = 0;
		virtual unsigned int setNumb_of_members(unsigned int n) = 0;
	};
