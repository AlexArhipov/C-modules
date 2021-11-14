
#ifndef EX02_ZOMBIEEVENT_H
#define EX02_ZOMBIEEVENT_H
#include "Zombie.h"

class ZombieEvent
{
private:
	std::string type;
public:
	ZombieEvent(std::string type_in);
	ZombieEvent(void);
	~ZombieEvent();

	ZombieEvent setZombieType();
	Zombie* newZombie(std::string name);
	void randomChump();
};


#endif //EX02_ZOMBIEEVENT_H
