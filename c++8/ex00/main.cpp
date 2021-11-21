#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> myvector;
		myvector.push_back(10);
		myvector.push_back(3);
		myvector.push_back(6);
		std::cout << easyfind(myvector, 10) << std::endl;
	}
	catch(const std::exception& ex)
	{
		std::cout << std::endl << ex.what() << std::endl;
	}
	return 0;
}
