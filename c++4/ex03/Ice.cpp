#include "Ice.h"

Ice::Ice():AMateria("ice")
{
//	std::cout << "Create Ice" << std::endl;
}

Ice::~Ice()
{
//	std::cout << "Delete Ice" << std::endl;
}

void Ice::use(ICharacter &target)
{
	UpExp();
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(const Ice &other):AMateria(other)
{
}

Ice & Ice::operator=(const Ice &other)
{
	setXP(other.getXP());
	setTYPE(other.getType());
	return *this;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}