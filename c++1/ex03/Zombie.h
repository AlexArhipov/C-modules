
#ifndef EX02_ZOMBIE_H
#define EX02_ZOMBIE_H

#include <iostream>
#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string _name;
	std::string _type;
public:
	void announce();
	void SetName(std::string name);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

#endif //EX02_ZOMBIE_H
