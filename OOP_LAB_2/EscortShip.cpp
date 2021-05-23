#include "pch.h"
#include "EscortShip.h"
//#include <fstream>

	
void EscortShip::Out(/*ofstream &ofst*/)
	{
		cout << "Судно охранения. Название: " << ship_name << ",  капитан:  " << name << ", звание: "
			<< rank << ", стаж: " << experience << ", водоизмещение судна: "
			<< displacement << ", макс. скорость: " << max_speed << ", количество членов экипажа: " << max_speed << endl;
	}
