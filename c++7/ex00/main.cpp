#include <iostream>

template<class T>
void swap(T& a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template<class T>
T& ft_min(T& a, T& b)
{
	if (a > b)
		return b;
	return a;
}

template<class T>
T& ft_max(T& a, T& b)
{
	if (a > b)
		return a;
	return b;
}

int main()
{
	int a = 10;
	int b = 20;
	float f = 14.6;
	float ff = 234.887;
	std::string s1= "asfds";
	std::string s2= "e234";
	std::cout << "-------------------swap--------------------------- " << s2 << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a,b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "-------------------      --------------------------- " << s2 << std::endl;
	std::cout << "f = " << f << ", ff = " << ff << std::endl;
	swap(f,ff);
	std::cout << "f = " << f << ", ff = " << ff << std::endl;
	std::cout << "-------------------      --------------------------- " << s2 << std::endl;
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	swap(s1,s2);
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "-------------------MAX--------------------------- " << s2 << std::endl;
	std::cout << "a = " << a << ", b = " << b << ". MAX = " << ft_max(a, b) << std::endl;
	std::cout << "f = " << f << ", ff = " << ff << ". MAX = " << ft_max(f, ff) << std::endl;
	std::cout << "s1 = " << s2 << ", s2 = " << s2 << ". MAX = " << ft_max(s1, s2) << std::endl;
	std::cout << "-------------------MIN--------------------------- " << s2 << std::endl;
	std::cout << "a = " << a << ", b = " << b << ". MIN = " << ft_min(a, b) << std::endl;
	std::cout << "f = " << f << ", ff = " << ff << ". MIN = " << ft_min(f, ff) << std::endl;
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << ". MIN = " << ft_min(s1, s2) << std::endl;
	return 0;
}
