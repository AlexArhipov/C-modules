#include <iostream>
#include <stack>

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

template<class T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {};
	MutantStack(MutantStack const &other): std::stack<T>(other) {};
	~MutantStack(){};
	MutantStack operator=(MutantStack const &other);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}
	iterator end()
	{
		return (std::stack<T>::c.end());
	}

};


#endif //EX02_MUTANTSTACK_HPP
