#include "Enemy.h"

#ifndef INC_01_SUPERMUTANT_H
#define INC_01_SUPERMUTANT_H


class SuperMutant: public Enemy
{
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant &other);
	SuperMutant &operator=(const SuperMutant &other);

	void takeDamage(int);
};

#endif //INC_01_SUPERMUTANT_H
