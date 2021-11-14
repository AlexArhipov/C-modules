
#include "HumanA.h"

HumanA::~HumanA()
{
	std::cout << "Human die: " << _name << std::endl;
}

void HumanA::attack()
{
	std::cout << "Human is namne: " << _name << " attack with weapon: " << _weapon.getType() <<  std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon), _name(name)
{
	_name = name;
	_weapon = weapon;
	std::cout << "Human create is name: " << _name <<", and he took the weapon: " << _weapon.getType() <<  std::endl;
}