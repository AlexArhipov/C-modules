#include "AWeapon.h"
#include "Enemy.h"
#include <iostream>

#ifndef INC_01_CHARACTER_H
#define INC_01_CHARACTER_H

class Character
{
private:
	std::string _name;
	int _ap;
	AWeapon *_aWeapon;

public:
	Character(std::string const & name);
	Character();
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	int getAP() const;
	AWeapon* getWeapon() const;
	Character(Character &other);
	Character &operator=(const Character &other);
};

std::ostream & operator<<(std::ostream &out, const Character &other);

#endif //INC_01_CHARACTER_H
