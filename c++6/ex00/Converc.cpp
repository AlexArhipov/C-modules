
#include "Converc.hpp"
#include <limits>

void Converc::chek(std::string str)
{
	if (str == "-inff" || str == "nanf" || str == "+inff" || str == "nan" || str == "+inf" || str == "-inf")
		throw ErrorException();
}


Converc::Converc()
{
	std::cout << "Default constructor!" << std::endl;
}

Converc::Converc(std::string str)
{
	_str = str;
}

Converc::~Converc()
{
//	std::cout << "Default destructor!" << std::endl;
}

Converc & Converc::operator=(Converc &other)
{
	_str = other._str;
	_c = other._c;
	_f = other._f;
	_d = other._d;
	_i = other._i;
	return *this;
}

Converc::Converc(Converc &other)
{
	*this = other;
}
void Converc::ToChar()
{
	try
	{
		chek(_str);
		if (_str.length() > 5 || std::stoi(_str) > 127 || std::stoi(_str) < -1)
			throw ErrorException();
		std::cout << "Char: ";
		_c = static_cast<char>(std::stoi(_str));
		if (std::isprint(_c))
			std::cout << _c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Error data" << std::endl;
	}
}

void Converc::toDouble()
{
	try
	{
		std::cout << "Double: ";
		_d = static_cast<double>(std::stod(_str));
		std::cout << std::fixed << std::setprecision(1) << _d << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Error data" << std::endl;
	}
}

void Converc::ToFloat()
{
	try
	{
		std::cout << "Float: ";
//		if (std::stof(_str) > MAX)
//			throw ErrorException();
		_f = static_cast<float>(std::stod(_str));
		std::cout << std::fixed << std::setprecision(1) << _f << "f" << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Error data" << std::endl;
	}
}

void Converc::ToInt()
{
	try
	{
		chek(_str);
		if (_str.length() > 12 || std::stoi(_str) >= 2147483647 || std::stoi(_str) <= -2147483648)
			throw ErrorException();
		std::cout << "Integer: ";
		_i = static_cast<int>(std::stof(_str));
		std::cout << _i << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Error data" << std::endl;
	}
}

const char* Converc::ErrorException::what() const throw()
{
	return "impossible";
}