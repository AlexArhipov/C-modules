#include "Phone_book.hpp"

int main()
{
	Phone_book phoneBook;
	std::string s;
	std::cout << "Hello! You have launched the phone book. You can use the \"ADD\", \"SEARCH\" and \"EXIT\" commands to work with a list of contacts." << std::endl;
	while (!std::cin.eof())
	{
		std::getline(std::cin, s);
		if (s.compare("ADD") == 0)
			phoneBook.ADD();
		else if (s.compare("SEARCH") == 0)
			phoneBook.SEARCH();
		else if (s.compare("EXIT") == 0)
			phoneBook.EXIT();
		else if (s.compare("") != 0)
				std::cout << "You entered the wrong command!" << std::endl;
		else
			std::cout << "You can use the \"ADD\", \"SEARCH\" and \"EXIT\" commands to work with a list of contacts" << std::endl;
	}
	return 0;
}
