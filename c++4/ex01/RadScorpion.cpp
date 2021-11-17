#include "RadScorpion.h"

RadScorpion::RadScorpion():Enemy(80, "Rad Scorpion")
{
	std::cout << "RadScorpion: * click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "RadScorpion death: * SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &other)
{
	_type = other._type;
	_HP = other._HP;
	std::cout << "= RadScorpion" << std::endl;
	return *this;
}

RadScorpion::RadScorpion(RadScorpion &other)
{
	_type = other._type;
	_HP = other._HP;
	std::cout << "Copy RadScorpion" << std::endl;
}

void RadScorpion::takeDamage(int dam)
{
	if (dam > 0)
	{
		if (_HP - dam > 0)
		{
			_HP -= dam;
			std::cout << "RadScorpion: * PLUP *  HP = " << _HP << std::endl;
		}
		else
			_HP = 0;
	}
}