#include <iostream>

#ifndef EX00_VICTIM_H
#define EX00_VICTIM_H


class Victim
{
protected:
	std::string _name;
public:
	Victim();
	~Victim();
	Victim(std::string name);
	Victim(Victim const &other);
	std::string GetName();
	Victim &operator=(Victim const &other);
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim &other);

#endif //EX00_VICTIM_H
