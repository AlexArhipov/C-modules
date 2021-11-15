#include <iostream>
#include <cmath>

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP


class Fixed
{
private:
	int _value;
	static const int _liter = 8;
public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	int toInt() const;
	float toFloat() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &other);

#endif //EX00_FIXED_HPP
