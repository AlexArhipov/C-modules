
#include "Sorcerer.h"

Sorcerer::Sorcerer()
{
	std::cout << "Class Sorcerer default create" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << " is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::GetName()
{
	return _name;
}

std::string Sorcerer::GetTitle()
{
	return _title;
}

void Sorcerer::polymorph(const Victim &other) const
{
	other.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer &other)
{
	out << "I am " << other.GetName() << ", " << other.GetTitle() << " , and I like ponies!" << std::endl;
	return out;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &other)
{
	_name = other._name;
	return *this;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
	_name = other._name;
}