
#ifndef EX06_HUMANB_H
#define EX06_HUMANB_H

#include "Weapon.h"

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(std::string name);
	void setWeapon(Weapon& weapon);
	void attack();
	~HumanB();
};


#endif //EX06_HUMANB_H
