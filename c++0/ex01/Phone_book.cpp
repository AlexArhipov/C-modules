#include "Phone_book.hpp"


Phone_book::Phone_book()
{
	caunt = 0;
}

void Phone_book::ADD()
{
	if (caunt < 8)
	{
		contact[caunt].add();
		caunt++;
	}
	else
		std::cout << "This phonebook cannot contain more than 8 contacts" << std::endl;
}

void Phone_book::EXIT()
{
	exit(0);
}

void Phone_book::SEARCH()
{
	int i = -1;
	int s;

	if (caunt == 0)
	{
		std::cout << "The phone book is empty!" << std::endl;
		return;
	}
	contact->heder_4();
	while (++i < caunt)
		contact[i].out_4(i);
	std::cout << "Select contact" << std::endl;
	std::cin >> s;
	if (s >= 0 && s < caunt)
		contact[s].out_all(s);
	else
		std::cout << "There is no such contact!" << std::endl;
}

Phone_book::~Phone_book()
{
}