
#ifndef EX02_ZOMBIE_H
#define EX02_ZOMBIE_H

#include <iostream>
#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	void hello();
	void SetType(std::string type_in);
	Zombie();
	Zombie(std::string name_in);
	~Zombie();
};

#endif //EX02_ZOMBIE_H
