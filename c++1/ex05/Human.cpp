
#include "Human.h"
#include "Brain.h"

Human::Human()
{
	std::cout << " Human create" << std::endl;
}

Human::~Human()
{
	std::cout << " Human delete" << std::endl;
}

Brain* Human::identify()
{
	return _brein.identify();
}

Brain &Human::getBrain()
{
	return _brein;
}