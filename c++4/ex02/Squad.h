#include "ISquad.h"

#ifndef EX02_SQUAD_H
#define EX02_SQUAD_H

class Squad: public ISquad
{
private:
	typedef struct _s_Squad
	{
		ISpaceMarine* _unit;
		struct _s_Squad* next;
	}				_t_Squad;
	int _count;
	_s_Squad* _squad;

public:
	Squad();
	~Squad();
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
	Squad(const Squad &other);
	Squad &operator=(const Squad &other);
};


#endif //EX02_SQUAD_H
