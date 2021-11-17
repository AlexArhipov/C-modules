//
// Created by Adeline Vivien on 4/10/21.
//

#include "Victim.h"

Victim::Victim()
{
	std::cout << "Class Victim default create" << std::endl;
}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::GetName()
{
	return _name;
}

std::ostream &operator<<(std::ostream &out, Victim &other)
{
	out << "I am " << other.GetName() << " and I like otters! " << std::endl;
	return out;
}

void Victim:: getPolymorphed() const
{
	std::cout << _name << "  has been turned into a cute little sheep!" << std::endl;
}

Victim & Victim::operator=(const Victim &other)
{
	_name = other._name;
	return *this;
}

Victim::Victim(const Victim &other)
{
	_name = other._name;
}