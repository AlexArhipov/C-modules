
#include "Brain.h"

Brain::Brain(void)
{
	std::cout << " Brain create" << std::endl;
}

Brain *Brain::identify()
{
	return this;
}

Brain::~Brain()
{
	std::cout << " Brain delete" << std::endl;
}