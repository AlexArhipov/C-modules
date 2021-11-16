
#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	_name = "";
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
	_hit_point = 100;
	_max_hit_point = 100;
	_energ_point = 100;
	_max_energ_point = 100;
	_level = 1;
	_mel_at = 30;
	_range_at = 20;
	_amor = 5;
	std::cout << "Create a ClapTrap named " << _name << std::endl;
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

void ClapTrap::beRelaxation(unsigned int amount)
{
	if (amount + _energ_point > _max_energ_point)
		amount = _max_energ_point - _energ_point;
	_energ_point += amount;
	std::cout << "robot FR4G-TP named " << _name << " restored " << amount << " energy point and he have " << _energ_point << " energy point" << std::endl;
}