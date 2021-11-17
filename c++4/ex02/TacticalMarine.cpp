
#include "TacticalMarine.h"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "attacks with a bolter" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "attacks with a chainsword" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine &other)
{
	(void)other;
	std::cout << "Tactical Marine =" << std::endl;
	return *this;
}

TacticalMarine::TacticalMarine(const TacticalMarine &other)
{
	//*this = other;
	(void) other;
}

ISpaceMarine *TacticalMarine::clone(void) const
{
	TacticalMarine *tacticalMarine = new TacticalMarine(*this);
	std::cout << "Tactical Marine copy" << std::endl;
	return tacticalMarine;
}

