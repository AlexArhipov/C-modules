#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i = 0;
	while (++i < ac)
	{
		size_t j = -1;
		std::string s = av[i];
		while(++j < s.length())
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
			std::cout << av[i][j];
		}
	}
	std::cout << std::endl;
	return (0);
}
