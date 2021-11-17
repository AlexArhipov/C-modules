
#include "Character.h"

Character::Character(): _aWeapon(NULL)
{
	std::cout << "Default Character constr" << std::endl;
}

Character::Character(const std::string &name)
{
	_name = name;
	_ap = 40;
	_aWeapon = NULL;
	std::cout << "Create Character " << _name << std::endl;
}

Character::~Character()
{
	std::cout << "* bay_bay *" << std::endl;
}

Character & Character::operator=(const Character &other)
{
	_name = other._name;
	_ap = other._ap;
	std::cout << "= RadScorpion" << std::endl;
	return *this;
}

std::string Character::getName() const
{
	return _name;
}

int Character::getAP() const
{
	return _ap;
}

AWeapon* Character::getWeapon() const
{
	return _aWeapon;
}

Character::Character(Character &other)
{
	_name = other._name;
	_ap = other._ap;
	std::cout << "Copy RadScorpion" << std::endl;
}

void Character::recoverAP()
{
	if (_ap < 40)
	{
		if (_ap + 10 > 40)
		{
			_ap = 40;
		}
		else
			_ap += 10;
		std::cout << _name << " recover 10 AP and have = " << _ap << std::endl;
	}
}

std::ostream &operator<<(std::ostream & out, const Character & other)
{
	std::string nameWeapon = "NO";
	if (other.getWeapon() != NULL)
		nameWeapon = other.getWeapon()->getName();
	out << "I am " << other.getName() + ", my AP = " << other.getAP() << ", my weapon = " << nameWeapon << std::endl;
	return (out);
}

void Character::equip(AWeapon *aWeapon)
{
	_aWeapon = aWeapon;
	std::cout << _name << " has AP = " << _ap << " and equip: " << _aWeapon->getName() << std::endl;
}

void Character::attack(Enemy *enemy)
{
//	std::cout << "enter enemy " << enemy << std::endl;
	if (enemy != NULL && _aWeapon != NULL)
	{
		if (_ap > _aWeapon->getAPCost())
		{
			_ap -= _aWeapon->getAPCost();
			_aWeapon->attack();
			std::cout << _name << " lose " << _aWeapon->getAPCost() << " AP!" << std::endl;
			enemy->takeDamage(_aWeapon->getDamage());
		}
		else
			std::cout << "No AP , a have = " << _ap << std::endl;
		if (enemy->getHP() == 0)
		{
			enemy->setHP(-1);
			delete enemy;
			enemy = NULL;
		}
	}
}
