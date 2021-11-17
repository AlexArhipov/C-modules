#include "Character.h"
#include "RadScorpion.h"
#include "PlasmaRifle.h"
#include "PowerFist.h"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->attack(b);
	me->recoverAP();
	me->attack(b);
	me->recoverAP();
	me->attack(b);
	std::cout << *me;

	delete(pr);
	delete(pf);
	delete(me);
	return 0;
}
