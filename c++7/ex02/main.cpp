#include "Array.hpp"

int main()
{
	std::cout << "------- init mass1 ------" << std::endl;
	Array<int> mass1(0);
	std::cout << "------- init mass2 ------" << std::endl;
	Array<int> mass2(10);
	try
	{
		std::cout << "------- show mass1 ------" << std::endl;
		std::cout << "mass1 size = " << mass1.GetSize() << std::endl;
		std::cout << "mass1 volume: " << std::endl;
		size_t i = -1;
		std::cout << "------- show mass2 ------" << std::endl;
		while (++i < mass1.GetSize())
			std::cout << "mass1["<< i<<"] = " << mass1[i] << std::endl;
		std::cout << "mass2 size = " << mass1.GetSize() << std::endl;
		std::cout << "mass2 volume: " << std::endl;
		i = -1;
		while (++i < mass2.GetSize())
			std::cout << "mass2["<< i<<"] = " << mass2[i] << std::endl;
		std::cout << "------- mass2 enter data ------" << std::endl;
		i = -1;
		while (++i < mass2.GetSize())
			mass2[i] = 2 * (i + 1);
		std::cout << "mass2 size = " << mass1.GetSize() << std::endl;
		std::cout << "mass2 volume: " << std::endl;
		i = -1;
		while (++i < mass2.GetSize())
			std::cout << "mass2["<< i<<"] = " << mass2[i] << std::endl;
	}
	catch(const std::exception& ex)
	{
		std::cout << std::endl << ex.what() << std::endl;
	}
	return (0);
}
