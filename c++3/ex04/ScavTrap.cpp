
#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout << "I was created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	std::cout << "I was created! And my name is " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructer - ahhhahaaaaa.....hhh.... " << _name << " died"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	std::cout << "My name is " << _name << " and I was cloned !!!"<< std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	std::cout << "My name is " << _name << " and I was copy !!!"<< std::endl;
	return *this;
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