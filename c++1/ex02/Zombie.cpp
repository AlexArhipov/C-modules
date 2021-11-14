#include "Zombie.h"

void Zombie::hello()
{
	std::cout<< "Nice to meet you, my name is " << name << ", my type is " << type <<". May I eat your brain?" << std::endl;
}
Zombie::Zombie()
{
	std::cout<< "I'm alive " << name << ", my type is " << type << std::endl;
}

Zombie::Zombie(std::string name_in)
{
	name = name_in;
	std::cout << "I'm alive " << name <<  std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Die " << name <<  std::endl;
}

void Zombie::SetType(std::string type_in)
{
	type = type_in;
}