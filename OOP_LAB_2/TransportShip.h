#include "Ship.h"
#include "Captain.h"

using namespace std;

class TransportShip : virtual public Ship
{
protected:
	Captain cap;
	unsigned int weight_of_cargo; // масса груза

public:
	TransportShip() : cap()
	{
		ship_name = "NONE";
		displacement = 0;
		max_speed = 0;
		numb_of_members = 0;
		weight_of_cargo = 0;
	}
	TransportShip(string ship_n, unsigned int r, string n, unsigned int ex, unsigned int d, unsigned int m, unsigned int numb_of_memb, unsigned int w) : cap(r, n, ex)
	{
		ship_name = "Транспортное_судно";
		displacement = d;
		max_speed = m;
		numb_of_members = numb_of_memb;
		weight_of_cargo = w;
	}

	void Out();
	void OutFile(ofstream &ofst);
	void InFile(ifstream &ifst);

	unsigned int getWeight_of_cargo() const;
	unsigned int setWeight_of_cargo(unsigned int w);
	unsigned int calculate_the_speed();
	string getShip_name() const;
	unsigned int getDisplacement() const;
	unsigned int getMax_speed() const;
	unsigned int getNumb_of_members() const;
	string setShip_name(string s);
	unsigned int setDisplacement(unsigned int d);
	unsigned int setMax_speed(unsigned int m);
	unsigned int setNumb_of_members(unsigned int n);

};
