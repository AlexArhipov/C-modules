#include "AWeapon.h"

#ifndef INC_01_POWERFIST_H
#define INC_01_POWERFIST_H


class PowerFist: public AWeapon
{
public:
	PowerFist();
	~PowerFist();
	PowerFist(PowerFist &other);
	PowerFist &operator=(const PowerFist &other);

	void attack() const;
};


#endif //INC_01_POWERFIST_H
