#include "ISpaceMarine.h"

#ifndef EX02_ASSAULTTERMINATOR_H
#define EX02_ASSAULTTERMINATOR_H

class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator &operator=(const AssaultTerminator &other);
	ISpaceMarine *clone(void) const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_H
