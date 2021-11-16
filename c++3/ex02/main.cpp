#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	ScavTrap bobbi("Bobbi");
	bobbi.challengeNewcomer("Bear");
	bobbi.meleeAttack("Bear");
	bobbi.rangedAttack("Bear");
	bobbi.rangedAttack("Bear");
	bobbi.takeDamage(33);
	bobbi.beRepaired(11);
	FragTrap gosha("Grisha");
	gosha.vaulthunter_dot_exe("Godzilla");
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.takeDamage(19);
	gosha.beRepaired(21);
	gosha.beRepaired(21);
	gosha.beRepaired(21);
	gosha.beRepaired(21);
	gosha.beRepaired(21);
	gosha.beRepaired(21);
	gosha.beRepaired(21);
	gosha.rangedAttack("Godzilla");
	gosha.meleeAttack("Godzilla");
	return 0;
}
