#include "SuperTrap.h"

SuperTrap::SuperTrap()
{
	std::cout << "Create a SuperTrap named " << std::endl;
}

SuperTrap::SuperTrap(std::string name):  FragTrap(name), NinjaTrap(name)
{
	_hit_point = FragTrap::_hit_point;
	_max_hit_point = FragTrap::_max_hit_point;
	_energ_point = NinjaTrap::_energ_point;
	_max_energ_point = NinjaTrap::_max_energ_point;
	_level = NinjaTrap::_level;
	_mel_at = FragTrap::_mel_at;
	_range_at = FragTrap::_range_at;
	_amor = FragTrap::_amor;
	std::cout << "Create a SuperTrap named " << _name << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap &other)
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
	std::cout << "SuperTrap named " << _name << " copy"<< std::endl;
	return *this;
}

SuperTrap::SuperTrap(const SuperTrap &other)
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
	std::cout << "SuperTrap named " << _name << " cloned"<< std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "destructer - SuperTrap" << std::endl;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}
void SuperTrap::meleeAttack(std::string const & target)
{
	FragTrap::meleeAttack(target);
}
void SuperTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
}
void SuperTrap::beRepaired(unsigned int amount)
{
	FragTrap::beRepaired(amount);
}