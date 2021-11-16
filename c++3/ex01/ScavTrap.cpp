//
// Created by Adeline Vivien on 4/6/21.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout << "Create a robot"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hit_point = 100;
	_max_hit_point = 100;
	_energ_point = 50;
	_max_energ_point = 50;
	_level = 1;
	_mel_at = 20;
	_range_at = 15;
	_amor = 3;
	std::cout << "I was created! And my name is " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructer - ahhhahaaaaa.....hhh.... " << _name << " died"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	_name = other._name;
	_max_hit_point = other._max_hit_point;
	_max_energ_point = other._max_energ_point;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_amor = other._amor;
	std::cout << "My name is " << _name << " and I was cloned !!!"<< std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other)
{
	_name = other._name;
	_max_hit_point = other._max_hit_point;
	_max_energ_point = other._max_energ_point;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_amor = other._amor;
	std::cout << "My name is " << _name << " and I was copy !!!"<< std::endl;
	return *this;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	if (_energ_point >= 25)
	{
		_energ_point -= 25;
		std::cout << _name << " dealt " << _mel_at << " melee damage to " << target
				  << " and lose " << _energ_point << " energy point" << std::endl;
	}
	else
		std::cout << "robot needs rest, he have " << _energ_point << " energy point" << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target)
{
	if (_energ_point >= 25)
	{
		_energ_point -= 25;
		std::cout << _name << " dealt " << _range_at << " range damage to " << target
				  << " and lose " << _energ_point << " energy point" << std::endl;
	}
	else
		std::cout << "robot needs rest, he have " << _energ_point << " energy point" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	amount -= _amor;
	if (amount < 0)
		amount = 0;
	if (int(_hit_point - amount) > 0)
	{
		_hit_point -= amount;
		std::cout << _name << " took " << amount << " damage and has " << _hit_point << " hit point left" << std::endl;
	}
	else
	{
		_hit_point = 0;
		std::cout << _name << " died"<< std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
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
		std::cout << _name << " restored " << amount << " hit point and he have " << _hit_point << " hit point" << std::endl;
	}
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	(void)target;
	std::string types[] = {"Opening the refrigerator every minute, hoping that something tasty has appeared there.",
						   "Put your finger in your cat's mouth when it yawns.",
						   "First, take food, and then choose a movie for a long time, under which you will eat it.",
						   "Grunt quietly when a TV show participant does something stupid.",
						   "Forgetting to put on your headphones before getting up abruptly from the table.",
						   "Delete a post on a social network if it is not liked in the first few minutes.",
						   "Build blankets and pillows.",
						   "Glue corn sticks.",
						   "Bring the cat to the mirror and say: \"Look, it's you\"."};
	std::srand (std::time (0));
	int random = rand() % 9;
	std::cout << types[random] << std::endl;
}