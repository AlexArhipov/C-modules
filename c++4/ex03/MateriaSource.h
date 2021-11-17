#include "IMateriaSource.h"

#ifndef EX03_MATERIASOURCE_H
#define EX03_MATERIASOURCE_H


class MateriaSource: public IMateriaSource
{
private:
	AMateria * _stek[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource &operator=(MateriaSource const &other);
	virtual ~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};


#endif //EX03_MATERIASOURCE_H
