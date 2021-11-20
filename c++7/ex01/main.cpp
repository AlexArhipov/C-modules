#include <iostream>

template <class T>
void iter(T *mass, size_t size, void (func)(T &f))
{
	size_t i = -1;
	while(++i < size)
	{
		func(mass[i]);
	}
}

template <class T>
void print(T pr)
{
	std::cout << pr << std::endl;
}

int main()
{
	int mass[] = { 0, 1, 2, 3, 4 };

	iter(mass, 5, print);
	return 0;
}
