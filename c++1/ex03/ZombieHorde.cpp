#include "ZombieHorde.h"

ZombieHorde::ZombieHorde(int N)
{
	int i = -1;
	_n = N;
	_hore = new Zombie[N];
	std::srand (std::time (0));
	std::string name[] = {"Abraham", "Adam", "Adrian", "Albert", "Alfred", "Anderson", "Andrew", "Anthony", "Arnold", "Arthur", "Ashley", "Austen", "Benjamin", "Bernard", "Brian", "Caleb", "Calvin", "Carl", "Chad"};
	while (++i < N)
	{
		int random_name= rand() % 18;
		_hore[i].SetName(name[random_name]);
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "delete ZombieHorde" <<  std::endl;
	delete[]_hore;
}

void ZombieHorde::announce()
{
	int i = _n;
	while (i-- > 0)
		_hore[i].announce();
}