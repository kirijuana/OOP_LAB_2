#include "Ship.h"
#include "Capitan.h"

using namespace std;

class TransportShip : virtual public Ship, virtual public Capitan
{
protected:

	unsigned int weight_of_cargo; // масса груза

public:
	TransportShip()
	{
		ship_name = "NONE";
		rank = 0; // звание капитана
		name = "NONE"; // ФИО
		experience = 0; // стаж
		displacement = 0;
		max_speed = 0;
		numb_of_members = 0;
		weight_of_cargo = 0;

	}
	TransportShip(string ship_n, unsigned int r, string n, unsigned int ex, unsigned int d, unsigned int m, unsigned int numb_of_memb, unsigned int w)
	{
		ship_name = ship_n;
		rank = r;
		name = n;
		experience = ex;
		displacement = d;
		max_speed = m;
		numb_of_members = numb_of_memb;
		weight_of_cargo = w;
	}

	void Out(/*ofstream &ofst*/);

	unsigned int getWeight_of_cargo() const
	{
		return weight_of_cargo;
	}

	unsigned int setWeight_of_cargo(unsigned int w)
	{
		return weight_of_cargo = w;
	}

	unsigned int calculate_the_speed()
	{
		return max_speed = 100 - (weight_of_cargo * 0.8);
	}

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
