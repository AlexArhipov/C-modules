#include "Contact.hpp"


Contact::Contact()
{
	name[0] = "first name";
	name[1] = "last name";
	name[2] = "nickname";
	name[3] = "login";
	name[4] = "postal address";
	name[5] = "email address";
	name[6] = "phone number";
	name[7] = "birthday date";
	name[8] = "favorite meal";
	name[9] = "underwear color";
	name[10] = "darkest secret";
}

void Contact::add(void)
{
	int i = -1;
	std::string s;
	std::cout<< "You cat create contact" << std::endl;
	while (++i < 11)
	{
		std::cout<< "Enter value into :" << this->name[i] << std::endl;
		if (!std::cin.eof())
		{
			std::getline(std::cin, s);
			this->value[i] = s;
		}
		else
			return;
	}
	std::cout<< "Contact successfully created. Choose the next action" << std::endl;
}

void Contact::out_4(int caunt)
{
	int i = -1;
	std::cout << std::setw(10) << caunt << "|";
	while (++i < 3)
	{
		if (value[i].length() <= 10)
			std::cout << std::setw(10) << value[i] << "|";
		else
			std::cout << std::setw(9) << value[i].substr(0,9) << ".|";
	}
	std::cout << std::endl;
}

void Contact::heder_4(void)
{
	int i = -1;
	std::cout << std::setw(10) << "Number" << "|";
	while (++i < 3)
		if (name[i].length() <= 10)
			std::cout << std::setw(10) << name[i] << "|";
	std::cout << std::endl;
}


void Contact::out_all(int caunt)
{
	int i = -1;
	std::cout  << "Number" << "|"  << caunt << "|" << std::endl;
	while (++i < 11)
		std::cout  << name[i] << "|"  << value[i] << "|" << std::endl;
}

Contact::~Contact()
{}