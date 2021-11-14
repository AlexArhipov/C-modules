#include <iostream>

#ifndef EX06_WEAPON_H
#define EX06_WEAPON_H


class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	const std::string getType(void);
};


#endif //EX06_WEAPON_H
