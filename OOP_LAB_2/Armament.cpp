#pragma once
#include "pch.h"
#include "Armament.h"

float Armament::getCaliber() const
{
	return caliber;
}

unsigned int Armament::getFiring_range() const
{
	return firing_range;
}

string Armament::getLocation() const
{
	return location;
}

unsigned int Armament::getAmmunition() const
{
	return ammunition;
}

float Armament::setCaliber(float c)
{
	return caliber = c;
}

unsigned int Armament::setFiring_range(unsigned int f)
{
	return firing_range = f;
}

string Armament::setLocation(string l)
{
	return location = l;
}

unsigned int Armament::setAmmunition(unsigned int a)
{
	return ammunition = a;
}

void Armament::Shot()
{
	ammunition--;
}