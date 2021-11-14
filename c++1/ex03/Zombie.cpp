#include "Zombie.h"

void Zombie::announce()
{
	std::cout<< "Nice to meet you, my name is " << _name << ". May I eat your brain?" << std::endl;
}


Zombie::Zombie()
{
	std::cout<< "I'm alive " << _name << "." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Die " << _name <<  std::endl;
}

void Zombie::SetName(std::string name)
{
	_name = name;
}