
#include "AssaultTerminator.h"


AssaultTerminator::AssaultTerminator()
{
	std::cout << "teleports from space" << std::endl;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &other)
{
	(void)other;
	std::cout << "Assault Terminator =" << std::endl;
	return *this;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other)
{
	*this = other;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
	AssaultTerminator *assaultTerminator = new AssaultTerminator(*this);
	std::cout << "Assault Terminator copy" << std::endl;
	return assaultTerminator;
}
