#include "Converc.hpp"

int main(int ac, char **av)
{
	std::string s = av[1];
	Converc c(s);
//	ac =2;
	if (ac != 2)
	{
		std::cout << "Error arguments"<< std::endl;
		return 1;
	}
	c.ToChar();
	c.ToInt();
	c.ToFloat();
	c.toDouble();
	return 0;
}
