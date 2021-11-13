#ifndef EX01_CONTACT_HPP
#define EX01_CONTACT_HPP

#include <iostream>
#include <string.h>
#include <iostream>
#include <iomanip>


class Contact
{
private:
	std::string name[11];
	std::string value[11];
public:
	Contact();
	~Contact();
	void add(void);
	void out_4(int i);
	void out_all(int i);
	void heder_4(void);
};

#endif //EX01_CONTACT_HPP