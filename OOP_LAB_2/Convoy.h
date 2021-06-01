#include "Table.h"
#include <string>

using namespace std;
class Convoy
{
private:
	string point_of_departure;
	string destination;
	unsigned int distance;	
	Table table;
	Captain cap;
public:
	Convoy() : cap(), table() {};
	Convoy(unsigned int r, string n, unsigned int ex, string p, string d, unsigned int dist, Table tab) : cap(r, n, ex)
	{
		table = tab;
		point_of_departure = p;
		destination = d;
		distance = dist;
	};

	void outConvoy();
	unsigned int number_of_ships(string s);
	void deleteShip(string s);
	void addShip(string s, double d, Ship *sh);
	void transfer_cargo(string name1, string name2, unsigned int part_of_the_cargo);
	void load_the_convoy_with_cargo(unsigned int cargo);

};

