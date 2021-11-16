#include "ClapTrap.h"
#ifndef EX02_SCAVTRAP_H
#define EX02_SCAVTRAP_H

class ScavTrap : public ClapTrap
{
private:
	unsigned int _energ_point;
	unsigned int _max_energ_point;
	unsigned int _mel_at;
	unsigned int _range_at;
	unsigned int _amor;
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);
	~ScavTrap();
	ScavTrap();
	void challengeNewcomer(const std::string &target);
};


#endif //EX02_SCAVTRAP_H
