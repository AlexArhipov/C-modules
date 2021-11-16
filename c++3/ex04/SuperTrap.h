#include "FragTrap.h"
#include "NinjaTrap.h"

#ifndef EX04_SUPERTRAP_H
#define EX04_SUPERTRAP_H

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &other);
	SuperTrap &operator=(SuperTrap const &other);
	~SuperTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //EX04_SUPERTRAP_H
