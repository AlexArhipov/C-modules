#include <iostream>

#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H


class ScavTrap
{
private:
	std::string _name;
	unsigned int _hit_point;
	unsigned int _max_hit_point;
	unsigned int _energ_point;
	unsigned int _max_energ_point;
	unsigned int _level;
	unsigned int _mel_at;
	unsigned int _range_at;
	unsigned int _amor;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};


#endif //EX01_SCAVTRAP_H
