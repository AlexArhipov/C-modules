#include "ClapTrap.h"

#ifndef EX02_SCAVTRAP_H
#define EX02_SCAVTRAP_H

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);
	~ScavTrap();
	ScavTrap();
	void challengeNewcomer(const std::string &target);
};


#endif //EX02_SCAVTRAP_H
