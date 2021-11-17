#include <iostream>
#include "ISpaceMarine.h"

#ifndef EX02_ISQUAD_H
#define EX02_ISQUAD_H


class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};


#endif //EX02_ISQUAD_H
