#include "Pony.hpp"

Pony::Pony(std::string name_in, std::string color_in, std::string type_in, int age_in)
{
	name = name_in;
	color = color_in;
	type = type_in;
	age = age_in;
}

Pony::Pony()
{
	name = "No name";
	color = "No color";
	type = "No type";
	age = 0;
}

void Pony::hello()
{
	std::cout << "Hello! My name is " << name << ", my color is " << color << ", my type is " << type << ", I am " << age << " years old" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Bye! Bye! " << "My name is " << name << ", my type " << type << std::endl;
}