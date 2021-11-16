#include <iostream>

#ifndef EX02_CLAPTRAP_H
#define EX02_CLAPTRAP_H


class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &other);
	ClapTrap &operator=(ClapTrap const &other);
	ClapTrap(std::string name, int hit_point, int max_hit_point, int energ_point, int max_energ_point, int level, int mel_at, int range_at, int amor);
	~ClapTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void beRelaxation(unsigned int amount);
	void show(void);
	int get_hit_point(void);

};


#endif //EX02_CLAPTRAP_H
