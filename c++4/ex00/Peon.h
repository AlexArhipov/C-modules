#include "Victim.h"

#ifndef EX00_PEON_H
#define EX00_PEON_H


class Peon: public Victim
{
public:
	Peon();
	~Peon();
	Peon(std::string name);
	Peon(Peon const &other);
	std::string GetName();
	Peon &operator=(Peon const &other);
	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Peon &other);

#endif //EX00_PEON_H
