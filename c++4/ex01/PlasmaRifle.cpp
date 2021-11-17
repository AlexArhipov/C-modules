
#include "PlasmaRifle.h"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 21, 55)
{
	std::cout << "Create Plasma Rifle" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "Delete Plasma Rifle" << std::endl;
}


PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &other)
{
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
	std::cout << "= Plasma Rifle" << std::endl;
	return *this;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &other)
{
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
	std::cout << "Copy Plasma Rifle" << std::endl;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu * " << _damage << std::endl;
}