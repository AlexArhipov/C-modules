
#include "SuperMutant.h"

SuperMutant::SuperMutant():Enemy(170, "Super Mutant")
{
	std::cout << "SuperMutant: Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "SuperMutant: Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=(const SuperMutant &other)
{
	_type = other._type;
	_HP = other._HP;
	std::cout << "= SuperMutant" << std::endl;
	return *this;
}

SuperMutant::SuperMutant(SuperMutant &other)
{
	_type = other._type;
	_HP = other._HP;
	std::cout << "Copy SuperMutant" << std::endl;
}

void SuperMutant::takeDamage(int dam)
{
	dam -=3;
	if (dam > 0)
	{
		if (_HP - dam > 0)
		{
			_HP -= dam;
			std::cout << "SuperMutant: Gaaaaaaaaaaaah!!!!! My HP = " << _HP << std::endl;
		}
		else
			_HP = 0;
	}
}