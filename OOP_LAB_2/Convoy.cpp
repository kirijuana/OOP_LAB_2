#include "pch.h"
#include "Convoy.h"

void Convoy::outConvoy()
{
	table.outTable();
}

unsigned int Convoy::number_of_ships(string s)
{
	map<string, add_inf> arr_;
	arr_ = table.getArray();

	int count = 0;
	map<string, add_inf>::iterator p;
	for (p = arr_.begin(); p != arr_.end(); ++p)
	{
		if (p->second.s->getShip_name() == s)
		{
			count++;
		}
	}
	return count;
}

void Convoy::deleteShip(string s)
{
	table.deleteShip(s);
}

void Convoy::addShip(string s, double d, Ship *sh)
{
	table.addShip(s, d, sh);
}

void Convoy::transfer_cargo(string name1, string name2, unsigned int part_of_the_cargo)
{
	Ship * s1 = table.getShip(name1);
	Ship * s2 = table.getShip(name2);

	TransportShip *s1_ = dynamic_cast<TransportShip*>(s1);
	TransportShip *s2_ = dynamic_cast<TransportShip*>(s2);


	s1_->setWeight_of_cargo(s1_->getWeight_of_cargo() - part_of_the_cargo);

	s2_->setWeight_of_cargo(s2_->getWeight_of_cargo() + part_of_the_cargo);

}

void Convoy::load_the_convoy_with_cargo(unsigned int cargo)
{
	map<string, add_inf> arr_;
	arr_ = table.getArray();

	TransportShip *s1;
	map<string, add_inf>::iterator p;
	for (p = arr_.begin(); p != arr_.end(); ++p)
	{
		if (p->second.s->getShip_name() == "Транспортное_судно")
		{
			s1 = dynamic_cast<TransportShip*>(p->second.s);
			s1->calculate_the_speed();
		}
	}

	int max = 0;
	string name_max;
	int temp_cargo = 0;
	while (cargo != 0)
	{
		if (cargo >= 10)
		{
			temp_cargo = 10;
			cargo = cargo - temp_cargo;
		}
		else
		{
			temp_cargo = cargo;
			cargo = 0;
		}

		for (p = arr_.begin(); p != arr_.end(); ++p)
		{
			if (p->second.s->getShip_name() == "Транспортное_судно")
			{
				if (p->second.s->getMax_speed() > max)
				{
					max = p->second.s->getMax_speed();
					name_max = p->first;
				}
			}
		}

		s1 = dynamic_cast<TransportShip*>(arr_[name_max].s);
		s1->setWeight_of_cargo(s1->getWeight_of_cargo() + temp_cargo);
		s1->calculate_the_speed();
		max = 0;
	}
}