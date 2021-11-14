//
// Created by Adeline Vivien on 4/5/21.
//

#include "HumanB.h"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "Human create is name: " << _name <<  std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human die: " << _name << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
	std::cout << "Human: " << _name <<" took the weapon: " << _weapon->getType() <<  std::endl;
}

void HumanB::attack()
{
	std::cout << "Human is namne: " << _name << " attack with weapon: " << _weapon->getType() <<  std::endl;
}