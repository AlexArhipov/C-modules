#include <iostream>

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP


class Fixed
{
private:
	int _value;
	static const int _liter = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //EX00_FIXED_HPP
