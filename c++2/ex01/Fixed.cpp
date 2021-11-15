
#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(int value)
{
	_value = value << _liter;
	std::cout << "Default constructor fot integer" << std::endl;
}

Fixed::Fixed(float value)
{
	_value = (int)roundf(value * (1 << _liter));
	std::cout << "Default constructor fot float" << std::endl;
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
int Fixed::toInt() const
{
	return (_value >> _liter);
}

float Fixed::toFloat() const
{
	return ((float)_value/(1 << _liter));
}

Fixed & Fixed::operator=(const Fixed &other)
{
	_value = other._value;
	std::cout << "Assignation operator overload" << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &other)
{
	out << other.toFloat();
	return out;
}

