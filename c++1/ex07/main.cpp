#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		return (1);
	}
	std::string s1= av[2];
	std::string s2= av[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Empty string!" << std::endl;
		return (1);
	}
	std::ifstream input_file;
	input_file.open(av[1]);
	if (!input_file.is_open())
	{
		std::cout << "Invalid file name!" << std::endl;
		return (1);
	}
	std::ofstream output_file;
	std::string name = av[1];
	output_file.open(name + ".replace");
	std::string s;
	size_t index;
	while(getline(input_file, s))
	{
		index = 0;
		while ((index = s.find(s1, index)) != std::string::npos)
		{
			s.erase(index, s1.length());
			s.insert(index, s2);
			index += s2.length();
		}
		output_file << s << std::endl;
	}
	input_file.close();
	output_file.close();
	return 0;
}
