#include <iostream>

#ifndef INC_01_AWEAPON_H
#define INC_01_AWEAPON_H

class AWeapon
{
protected:
	std::string _name;
	int _damage;
	int _apcost;
public:
	AWeapon();
	virtual ~AWeapon();
	AWeapon(AWeapon &other);
	AWeapon &operator=(const AWeapon &other);

	AWeapon(std::string const & name, int apcost, int damage);
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif //INC_01_AWEAPON_H
