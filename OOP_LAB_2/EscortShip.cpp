#include "pch.h"
#include "EscortShip.h"
#include <fstream>
	
void EscortShip::Out()
	{
		cout << "Название: " << ship_name << ",  капитан:  " << cap.getName() << ", звание: "
			<< cap.getRank() << ", стаж: " << cap.getExperience() << ", водоизмещение судна: "
			<< displacement << ", макс. скорость: " << max_speed << ", количество членов экипажа: " << numb_of_members << endl;
	}

void EscortShip::OutFile(ofstream &ofst)
{
	ofst << "Название: " << ship_name << ",  капитан:  " << cap.getName() << ", звание: "
		<< cap.getRank() << ", стаж: " << cap.getExperience() << ", водоизмещение судна: "
		<< displacement << ", макс. скорость: " << max_speed << ", количество членов экипажа: " << numb_of_members << endl;
}

void EscortShip::InFile(ifstream &ifst)
{
	string name_;
	unsigned int exp_;
	unsigned int rank_;

	ifst >> name_ >> rank_ >> exp_ >> displacement >> max_speed >> numb_of_members;
	cap.setName(name_);
	cap.setExperience(exp_);
	cap.setRank(rank_);

}
//void EscortShip::gunShot(const unsigned int num)
//{
//	arr[num]->Shot();
//}

string EscortShip::getShip_name() const
{
	return ship_name;
}

unsigned int EscortShip::getDisplacement() const
{
	return displacement;
}

unsigned int EscortShip::getMax_speed() const
{
	return max_speed;
}

unsigned int EscortShip::getNumb_of_members() const
{
	return numb_of_members;
}

string EscortShip::setShip_name(string s)
{
	return ship_name = s;
}

unsigned int EscortShip::setDisplacement(unsigned int d)
{
	return displacement = d;
}

unsigned int EscortShip::setMax_speed(unsigned int m)
{
	return max_speed = m;
}

unsigned int EscortShip::setNumb_of_members(unsigned int n)
{
	return numb_of_members = n;
}
