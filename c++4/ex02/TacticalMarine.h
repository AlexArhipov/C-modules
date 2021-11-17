#include "ISpaceMarine.h"

#ifndef EX02_TACTICALMARINE_H
#define EX02_TACTICALMARINE_H

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine &operator=(const TacticalMarine &other);
	ISpaceMarine *clone(void) const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_H
