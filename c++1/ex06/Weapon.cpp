
#include "Weapon.h"

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Weapon create is type: " << _type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon delete " << _type << std::endl;
}

void Weapon::setType(std::string type)
{
	std::cout << "Weapon changes type from: " << _type << " to: " << type << std::endl;
	_type = type;
}

const std::string Weapon::getType(void)
{
	return _type;
}