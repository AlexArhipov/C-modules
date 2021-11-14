#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *point = &s;
	std::string &ref = s;
	std::cout << "THIS IS point: "<< *point << std::endl;
	std::cout << "THIS IS reference: " << ref << std::endl;
	return 0;
}
