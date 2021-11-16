
#include "ClapTrap.h"
#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);
	~FragTrap();
	FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX02_FRAGTRAP_H
