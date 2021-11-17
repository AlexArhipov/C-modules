#include <iostream>
#include "Victim.h"

#ifndef EX00_SORCERER_H
#define EX00_SORCERER_H


class Sorcerer
{
private:
	std::string _name;
	std::string _title;
public:
	Sorcerer();
	~Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &other);
	Sorcerer &operator=(Sorcerer const &other);
	std::string GetName();
	std::string GetTitle();
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer &other);

#endif //EX00_SORCERER_H
