
#include "AMateria.h"

const std::string & AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

AMateria::~AMateria()
{

}

AMateria::AMateria(const std::string &type)
{
	_type=type;
	_xp=0;
}

void AMateria::UpExp()
{
	_xp +=10;
}

void AMateria::setXP(int XP)
{
	_xp= XP;
}

void AMateria::setTYPE(std::string const TYPE)
{
	_type=TYPE;
}

AMateria::AMateria(const AMateria &other)
{
	_xp = other._xp;
	_type = other._type;
}

AMateria & AMateria::operator=(const AMateria &other)
{
	_xp= other.getXP();
	return *this;
}

void AMateria::use(ICharacter &target)
{
	(void) target;
}