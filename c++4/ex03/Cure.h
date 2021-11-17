#include "AMateria.h"

#ifndef EX03_CURE_H
#define EX03_CURE_H


class Cure: public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &);
	Cure &operator=(Cure const &other);

	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //EX03_CURE_H
