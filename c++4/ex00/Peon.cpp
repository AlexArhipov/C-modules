
#include "Peon.h"
#include "Victim.h"

Peon::Peon()
{
	std::cout << "Class Victim default create" << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::string Peon::GetName()
{
	return _name;
}

std::ostream &operator<<(std::ostream &out, Peon &other)
{
	out << "I am " << other.GetName() << "  and I like otters! " << std::endl;
	return out;
}

void Peon:: getPolymorphed() const
{
	std::cout << _name << "  has been turned into a pink pony!" << std::endl;
}

Peon & Peon::operator=(const Peon &other)
{
	_name = other._name;
	return *this;
}

Peon::Peon(const Peon &other)
{
	_name = other._name;
}