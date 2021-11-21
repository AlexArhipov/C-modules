#include <iostream>
#include <algorithm>
#include <vector>

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP


class Error : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Element not found");
	}
};

template<class T>
int easyfind(T &container, int val)
{
	typename T::iterator iterator = std::find(container.begin(), container.end(), val);
	if (iterator != container.end())
		return *iterator;
	else
		throw Error();
	return 0;
}

#endif //EX00_EASYFIND_HPP
