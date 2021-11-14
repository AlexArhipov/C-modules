#include "ZombieEvent.h"

ZombieEvent::ZombieEvent(std::string type_in)
{
	type = type_in;
	std::cout<< "I'm create ZombieEvent my type is " << type << std::endl;
}

ZombieEvent::ZombieEvent(void)
{
	std::cout<< "I'm create ZombieEvent " << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout<< "I'm kill ZombieEvent" << std::endl;
}
ZombieEvent ZombieEvent::setZombieType()
{
	std::string types[] = {"Leaders", "Unkillable zombies", "Screamers", "Spitters", "Kamikaze", "The Drowned", "Thugs", "Zombie workers", "Regenerators", "Zombie soldiers", "Zombie dogs", "Zombie Sharks", "Zombie monkeys", "Zombie Crawlers", "Chemical defenders", "Zombie Police", "Giants"};
	std::srand (std::time (0));

	int random_types = rand() % 16;
	ZombieEvent zombieEvent(types[random_types]);
	return zombieEvent;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	zombie->SetType(setZombieType().type);
	return zombie;
}

void ZombieEvent::randomChump()
{
	std::cout << "Start ZombieEvent" << std::endl;
	Zombie *zombie;
	std::string name[] = {"Abraham", "Adam", "Adrian", "Albert", "Alfred", "Anderson", "Andrew", "Anthony", "Arnold", "Arthur", "Ashley", "Austen", "Benjamin", "Bernard", "Brian", "Caleb", "Calvin", "Carl", "Chad"};
	std::srand (std::time (0));
	int random_name= rand() % 18;
	zombie = newZombie(name[random_name]);
	zombie->hello();
	delete(zombie);
}