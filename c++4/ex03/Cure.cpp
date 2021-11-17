#include "Cure.h"

Cure::Cure():AMateria("cure")
{
//	std::cout << "Create Cure" << std::endl;
}

Cure::~Cure()
{
//	std::cout << "Delete Cure" << std::endl;
}

void Cure::use(ICharacter &target)
{
	UpExp();
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure & Cure::operator=(const Cure &other)
{
	setXP(other.getXP());
	setTYPE(other.getType());
	return *this;
}

Cure::Cure(const Cure &other):AMateria(other)
{
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}