#include "ClapTrap.h"

#ifndef EX03_NINJATRAP_H
#define EX03_NINJATRAP_H


class NinjaTrap: public ClapTrap
{
private:
	std::string _name;

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &other);
	NinjaTrap &operator=(NinjaTrap const &other);
	~NinjaTrap();
	void ninjaShoebox(std::string const & target);
};


#endif //EX03_NINJATRAP_H
