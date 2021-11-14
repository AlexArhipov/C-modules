#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("baseball bat");
		bob.attack();
	}
	std::cout << "Part 2 " << std::endl;
	{
		Weapon club = Weapon("flamethrower");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Swiss knife");
		jim.attack();
	}
}