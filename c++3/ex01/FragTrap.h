#include <iostream>

#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H


class FragTrap
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
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);
	~FragTrap();
	FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void beRelaxation(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_H
