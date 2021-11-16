
#include "NinjaTrap.h"

NinjaTrap::NinjaTrap()
{
	std::srand (std::time (0));
	std::cout << "Create a NinjaTrap named " << std::endl;
}

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name,60,60,120,120,1,60,5,0)
{
	std::srand (std::time (0));
	std::cout << "Create a NinjaTrap named " << _name << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_max_energ_point = other._max_energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_max_hit_point = other._max_hit_point;
	_amor = other._amor;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	std::cout << "NinjaTrap named " << _name << " copy"<< std::endl;
	return *this;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_max_energ_point = other._max_energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_max_hit_point = other._max_hit_point;
	_amor = other._amor;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	std::cout << "NinjaTrap named " << _name << " cloned"<< std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "destructer - NinjaTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(std::string const & target)
{
	(void)target;
	std::string types[] = {"sh.....",
						   "........",
						   "silence"};
	int random = rand() % types->size();
	std::cout << types[random]  << " !!!!!!!" << std::endl;
}