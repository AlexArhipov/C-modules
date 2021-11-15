
#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	_value = other._value;
	std::cout << "Copy constructor" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &other)
{
	_value = other._value;
	std::cout << "Assignation operator overload" << std::endl;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits" << std::endl;
	return _value;
}

void Fixed::setRawBits(const int raw)
{
	_value = raw;
	std::cout << "setRawBits" << std::endl;
}