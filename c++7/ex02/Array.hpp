#include <iostream>
#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

template <class T>
class Array
{
private:
	size_t _size;
	T *_mass;
public:
	Array()
	{
		_size = 0;
		_mass = NULL;
		std::cout << "Default constructor" << std::endl;
	}

	Array(size_t size)
	{
		if (size > 0)
		{
			_size = size;
			_mass = new T[_size];
			size_t i = -1;
			while (++i < _size)
				_mass[i] = 0;
		}
		else
		{
			_size = 0;
			_mass = NULL;
		}
		std::cout << "Advanced constructor (+ size mass)" << std::endl;
	}

	~Array()
	{
		if (_size > 0)
			delete [] _mass;
	}

	Array(Array<T> const &other)
	{
		_size = 0;
		_mass = NULL;
		*this = other;
	}

	Array<T> &operator=(Array<T> const &other)
	{
		_size = other._size;
		if (_size > 0 && _mass != NULL)
		{
			delete [] _mass;
			_mass = NULL;
		}
		if (other._size > 0)
		{
			_size = other._size;
			_mass = new T[other._size];
			size_t i = -1;
			while (++i < other._size)
				_mass[i] = other._mass[i];
		}
		return *this;
	}

	T &operator[](size_t i)
	{
		if (i >= _size)
			throw ErrorException();
		return _mass[i];
	}

	size_t GetSize() const
	{
		return _size;
	}

	class ErrorException: public std::exception
	{
		const char *what() const throw();
	};

	T* GetMass() const
	{
		return _mass;
	}
};

template<class T>
const char* Array<T>::ErrorException::what() const throw()
{
	return "Error";
}

#endif //EX02_ARRAY_HPP
