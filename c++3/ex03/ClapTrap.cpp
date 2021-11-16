
#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	_hit_point = 0;
	_max_hit_point = 0;
	_energ_point = 0;
	_max_energ_point = 0;
	_level = 0;
	_mel_at = 0;
	_range_at = 0;
	_amor = 0;
	std::cout << "Create a ClapTrap"<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_point = 0;
	_max_hit_point = 0;
	_energ_point = 0;
	_max_energ_point = 0;
	_level = 0;
	_mel_at = 0;
	_range_at = 0;
	_amor = 0;
	std::cout << "Create a ClapTrap named " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit_point, int max_hit_point, int energ_point, int max_energ_point, int level, int mel_at, int range_at, int amor)
{
	_name = name;
	_hit_point = hit_point;
	_max_hit_point = max_hit_point;
	_energ_point = energ_point;
	_max_energ_point = max_energ_point;
	_level = level;
	_mel_at = mel_at;
	_range_at = range_at;
	_amor = amor;
	std::cout << "Create a FULL ClapTrap named " << _name << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_max_energ_point = other._max_energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_max_hit_point = other._max_hit_point;
	_amor = other._amor;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	std::cout << "robot FR4G-TP named " << _name << " copy"<< std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_max_energ_point = other._max_energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_max_hit_point = other._max_hit_point;
	_amor = other._amor;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	std::cout << "robot FR4G-TP named " << _name << " cloned"<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructer - ClapTrap" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	if (_energ_point >= 25)
	{
		_energ_point -= 25;
		std::cout << "a robot FR4G-TP named " << _name << " dealt " << _mel_at << " melee damage to " << target
				  << "and lose " << _energ_point << " energy point" << std::endl;
	}
	else
		std::cout << "robot FR4G-TP needs rest, he have " << _energ_point << " energy point" << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target)
{
	if (_energ_point >= 25)
	{
		_energ_point -= 25;
		std::cout << "a robot FR4G-TP named " << _name << " dealt " << _range_at << " range damage to " << target
				  << " and lose " << _energ_point << " energy point" << std::endl;
	}
	else
		std::cout << "robot FR4G-TP needs rest, he have " << _energ_point << " energy point" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount -= _amor;
	if (amount < 0)
		amount = 0;
	if (int(_hit_point - amount) > 0)
	{
		_hit_point -= amount;
		std::cout << "robot FR4G-TP named " << _name << " took " << amount << " damage and has " << _hit_point << " hit point left" << std::endl;
	}
	else
	{
		_hit_point = 0;
		std::cout << "robot FR4G-TP named " << _name << " died"<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_point == 0)
	{
		std::cout << "the robot came to life and it's a miracle!!!" << std::endl;
		_hit_point = amount;
	}
	else
	{
		if (amount + _hit_point > _max_hit_point)
			amount = _max_hit_point - _hit_point;
		_hit_point += amount;
		std::cout << "robot FR4G-TP named " << _name << " restored " << amount << " hit point and he have " << _hit_point << " hit point" << std::endl;
	}
}

int ClapTrap::get_hit_point()
{
	return _hit_point;
}
int ClapTrap::get_max_hit_point()
{
	return _max_hit_point;
}
int ClapTrap::get_energ_point()
{
	return _energ_point;
}
int ClapTrap::get_max_energ_point()
{
	return _max_energ_point;
}
int ClapTrap::get_level()
{
	return _level;
}
int ClapTrap::get_range_at()
{
	return _range_at;
}
int ClapTrap::get_mel_at()
{
	return _mel_at;
}
int ClapTrap::get_amor()
{
	return _amor;
}