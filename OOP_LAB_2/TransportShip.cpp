#include "pch.h"
#include "TransportShip.h"
//#include <fstream>


void TransportShip::Out(/*ofstream &ofst*/)
{
	cout << "Транспортное судно. Название: " << ship_name << ",  масса груза:  " << weight_of_cargo << ",  капитан:  " << name << ", звание: "
		<< rank << ", стаж: " << experience << ", водоизмещение судна: "
		<< displacement << ", макс. скорость: " << max_speed << ", количество членов экипажа: " << max_speed << endl;
}
