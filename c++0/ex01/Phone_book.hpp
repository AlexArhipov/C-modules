
#ifndef EX01_PHONE_BOOK_HPP
#define EX01_PHONE_BOOK_HPP

#include "Contact.hpp"

class Phone_book
{
private:
	int caunt;
	Contact contact[8];
public:
	Phone_book();
	~Phone_book();
	void EXIT(void);
	void ADD(void);
	void SEARCH(void);
};

#endif //EX01_PHONE_BOOK_HPP
