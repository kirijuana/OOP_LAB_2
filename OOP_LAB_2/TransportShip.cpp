#include "pch.h"
#include "TransportShip.h"
//#include <fstream>


void TransportShip::Out(/*ofstream &ofst*/)
{
	cout << "������������ �����. ��������: " << ship_name << ",  ����� �����:  " << weight_of_cargo << ",  �������:  " << name << ", ������: "
		<< rank << ", ����: " << experience << ", ������������� �����: "
		<< displacement << ", ����. ��������: " << max_speed << ", ���������� ������ �������: " << max_speed << endl;
}
