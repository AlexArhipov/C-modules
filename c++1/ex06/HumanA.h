

#ifndef EX06_HUMANA_H
#define EX06_HUMANA_H

#include "Weapon.h"

class HumanA
{
private:
	Weapon& _weapon;
	std::string _name;
public:
	~HumanA();
	HumanA(std::string name, Weapon& weapon);
	void attack();
};


#endif //EX06_HUMANA_H
