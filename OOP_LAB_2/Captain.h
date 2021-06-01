#pragma once

#include <iostream>
#include <string>

using namespace std;

class Captain
{
protected:

	unsigned int rank; // ������ ��������
	string name; // ���
	unsigned int experience; // ����

public:
	Captain() : rank(0), name("NONE"), experience(0)
	{
	}
	Captain(unsigned int r, string n, unsigned int ex) : rank(r), name(n), experience(ex)
	{
	}

	unsigned int getRank() const;
	string getName() const;
	unsigned int getExperience() const;

	string setName(string s);
	unsigned int setRank(unsigned int r);
	unsigned int setExperience(unsigned int e);
};