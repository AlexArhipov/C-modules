#ifndef EX03_ZOMBIEHORDE_H
#define EX03_ZOMBIEHORDE_H

#include "Zombie.h"

class ZombieHorde
{
private:
	Zombie* _hore;
	int _n;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();
	ZombieHorde setZombieType();
};


#endif //EX03_ZOMBIEHORDE_H
