#include "pch.h"
#include "EscortShip.h"
//#include <fstream>

	
void EscortShip::Out(/*ofstream &ofst*/)
	{
		cout << "����� ���������. ��������: " << ship_name << ",  �������:  " << name << ", ������: "
			<< rank << ", ����: " << experience << ", ������������� �����: "
			<< displacement << ", ����. ��������: " << max_speed << ", ���������� ������ �������: " << max_speed << endl;
	}
