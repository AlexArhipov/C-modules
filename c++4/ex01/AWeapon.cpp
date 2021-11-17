
#include "AWeapon.h"

AWeapon::AWeapon()
{
	_name = "";
	_apcost = 0;
	_damage = 0;
	std::cout << "Create weapon default" << std::endl;
}

AWeapon::~AWeapon()
{
	std::cout << "Delete weapon base" << std::endl;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
//	std::cout << "Create weapon: " << _name << std::endl;
}

AWeapon & AWeapon::operator=(const AWeapon &other)
{
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
//	std::cout << "= weapon: " << _name << std::endl;
	return *this;
}

AWeapon::AWeapon(AWeapon &other)
{
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
//	std::cout << "Copy weapon: " << _name << std::endl;
}

std::string AWeapon::getName() const
{
	return _name;
}

int AWeapon::getDamage() const
{
	return _damage;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}