#include <iostream>
#include "AMateria.h"
#include "Ice.h"
#include "Cure.h"

#ifndef EX03_IMATERIASOURCE_H
#define EX03_IMATERIASOURCE_H


class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //EX03_IMATERIASOURCE_H
