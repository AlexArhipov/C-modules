#include "Pony.hpp"

void ponyOnTheHeap(std::string name_in, std::string color_in, std::string type_in, int age_in)
{
	std::cout << "Making ponies on a heap"  << std::endl;
	Pony pony = Pony(name_in, color_in, type_in, age_in);
	pony.hello();
}
void ponyOnTheStack(std::string name_in, std::string color_in, std::string type_in, int age_in)
{
	std::cout << "Making ponies on a stack" << std::endl;
	Pony *pony = new Pony(name_in, color_in, type_in, age_in);
	pony->hello();
	delete(pony);
}

int main()
{
	ponyOnTheStack("Yasya", "blue", "Stak", 18);
	std::cout << std::endl;
	ponyOnTheHeap("Alisa", "black", "Heap", 17);
	return 0;
}
