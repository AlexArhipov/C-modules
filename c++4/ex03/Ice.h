#include "AMateria.h"

#ifndef EX03_ICE_H
#define EX03_ICE_H


class Ice: public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &);
	Ice &operator=(Ice const &other);

	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //EX03_ICE_H
