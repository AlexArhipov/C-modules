

#include "PowerFist.h"

PowerFist::PowerFist(): AWeapon("PowerFist", 21, 5)
{
	std::cout << "Create PowerFist" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "Delete PowerFist" << std::endl;
}


PowerFist & PowerFist::operator=(const PowerFist &other)
{
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
	std::cout << "= PowerFist" << std::endl;
	return *this;
}

PowerFist::PowerFist(PowerFist &other)
{
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
	std::cout << "Copy PowerFist" << std::endl;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}