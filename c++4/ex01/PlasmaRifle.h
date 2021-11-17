#include "AWeapon.h"

#ifndef INC_01_PLASMARIFLE_H
#define INC_01_PLASMARIFLE_H


class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(PlasmaRifle &other);
	PlasmaRifle &operator=(const PlasmaRifle &other);

	void attack() const;
};


#endif //INC_01_PLASMARIFLE_H
