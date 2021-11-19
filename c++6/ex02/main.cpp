#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate (void)
{
	srand(time(NULL));
	int random = rand() % 3;
	if (random == 0)
		return (new A);
	if (random == 1)
		return (new B);
	return (new C);

}

void identify_from_pointer (Base * p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "Type: 'A'";
		return;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "Type: 'B'";
		return;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "Type: 'C'";
		return;
	}
}

void identify_from_reference (Base & p)
{
	identify_from_pointer(&p);
}

int main()
{
	Base *p = generate();
	std::cout << "identify_from_pointer: ";
	identify_from_pointer(p);
	std::cout << ", identify from reference: ";
	identify_from_reference(*p);
	delete(p);
	return 0;
}
