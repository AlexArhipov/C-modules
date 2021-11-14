#include <iostream>
#include <iostream>
#include <iomanip>

#ifndef EX00_PONY_H
#define EX00_PONY_H

class Pony
{
private:
	std::string name;
	std::string color;
	std::string type;
	int age;
public:
	Pony(std::string name_in, std::string color_in, std::string type_in, int age_in);
	void hello();
	Pony();
	~Pony();
};

#endif //EX00_PONY_H
