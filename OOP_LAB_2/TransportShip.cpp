#include "pch.h"
#include "TransportShip.h"
#include <fstream>

void TransportShip::Out()
{
	cout << "Название: " << ship_name << ",  масса груза:  " << weight_of_cargo << ",  капитан:  " << cap.getName() << ", звание: "
		<< cap.getRank() << ", стаж: " << cap.getExperience() << ", водоизмещение судна: "
		<< displacement << ", макс. скорость: " << max_speed << ", количество членов экипажа: " << numb_of_members << endl;
}

void TransportShip::OutFile(ofstream &ofst)
{
	ofst << "Название: " << ship_name << ",  масса груза:  " << weight_of_cargo << ",  капитан:  " << cap.getName() << ", звание: "
		<< cap.getRank() << ", стаж: " << cap.getExperience() << ", водоизмещение судна: "
		<< displacement << ", макс. скорость: " << max_speed << ", количество членов экипажа: " << numb_of_members << endl;
}

void TransportShip::InFile(ifstream &ifst)
{
	string name_;
	unsigned int exp_;
	unsigned int rank_;

	ifst >> weight_of_cargo >> name_ >> rank_ >> exp_ >> displacement >> max_speed >> numb_of_members;
	
	cap.setName(name_);
	cap.setExperience(exp_);
	cap.setRank(rank_);
}
 unsigned int TransportShip::getWeight_of_cargo() const
{
	return weight_of_cargo;
}

 unsigned int TransportShip::setWeight_of_cargo(unsigned int w)
 {
	 return weight_of_cargo = w;
 }

 unsigned int TransportShip::calculate_the_speed()
 {
	 return max_speed = max_speed - (weight_of_cargo * 0.08);
 }

 string TransportShip::getShip_name() const
 {
	 return ship_name;
 }

 unsigned int TransportShip::getDisplacement() const
 {
	 return displacement;
 }

 unsigned int TransportShip::getMax_speed() const
 {
	 return max_speed;
 }

 unsigned int TransportShip::getNumb_of_members() const
 {
	 return numb_of_members;
 }

 string TransportShip::setShip_name(string s)
 {
	 return ship_name = s;
 }

 unsigned int TransportShip::setDisplacement(unsigned int d)
 {
	 return TransportShip::displacement = d;
 }

 unsigned int TransportShip::setMax_speed(unsigned int m)
 {
	 return max_speed = m;
 }

 unsigned int TransportShip::setNumb_of_members(unsigned int n)
 {
	 return numb_of_members = n;
 }