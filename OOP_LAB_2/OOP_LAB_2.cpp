#include "pch.h"
#include <iostream>
#include <fstream>
#include "EscortShip.h"
#include "Convoy.h"

int main()
{
	ofstream ofst("TxtOut.txt");
	ifstream ifst("TxtIn.txt");

	setlocale(LC_ALL, "Russian");
	
	EscortShip e("Судно_охранения", 2, "Генадий_Петрович_Сазоненко", 3, 4, 5, 6, 7);
	EscortShip e1("Судно_охранения", 2, "Генадий_Петрович_Сазоненко", 3, 4, 5, 6, 7);
	EscortShip e2("Судно_охранения", 2, "Генадий_Петрович_Сазоненко", 3, 4, 5, 6, 7);
	TransportShip t("Транспортное_судно", 2, "Анатолий_Петрович_Иванов", 8, 18, 85, 15, 80);
	TransportShip t1("Транспортное_судно", 2, "Егор_Петрович_Иванов", 8, 18, 83, 5, 73);
	TransportShip t2("Транспортное_судно", 2, "Василий_Петрович_Иванов", 8, 18, 84, 15, 75);
	TransportShip t3("Транспортное_судно", 2, "Андрей_Петрович_Иванов", 8, 18, 88, 15, 83);
	TransportShip t4("Транспортное_судно", 2, "Владимир_Петрович_Иванов", 8, 18, 100, 15, 115);


	string pozivnoy = "1";
	double des = 25;
	Table b;
	
	b.addShip("1", des, &e);
	b.addShip("2", des, &e1);
	b.addShip("3", des, &e2);
	b.addShip("4", des, &t);
	b.addShip("5", des, &t1);
	b.addShip("6", des, &t2);
	b.addShip("7", des, &t3);
	b.addShip("8", des, &t4);

	//b.outTable();
	b.outFileTable(ofst);
	Convoy c(2, "Генадий_Петрович_Сазоненко", 3, "Место_отправления", "Место_назначения", 13, b);
	
	c.outConvoy();
	c.transfer_cargo("4", "6", 5);
	c.outConvoy();

	c.load_the_convoy_with_cargo(250);

	c.outConvoy();

	/*b.InFileTable(ifst);*/
}
