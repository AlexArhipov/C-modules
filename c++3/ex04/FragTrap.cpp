//
// Created by Adeline Vivien on 4/7/21.
//

#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout << "Create a robot FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hit_point = 100;
	_max_hit_point = 100;
	//_energ_point = 100;
	//_max_energ_point = 100;
	//_level = 1;
	_mel_at = 30;
	_range_at = 20;
	_amor = 5;
	std::cout << "Create a robot FragTrap named " << _name << std::endl;
}

//FragTrap::FragTrap(std::string name):ClapTrap(name,100,100,100,100,1,30,20,5)
//{
//	std::srand (std::time (0));
//	std::cout << "Create a FragTrap named - Full constr " << _name << std::endl;
//}

FragTrap & FragTrap::operator=(const FragTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	std::cout << "robot FR4G-TP named " << _name << " copy"<< std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &other)
{
	_name = other._name;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	std::cout << "robot FR4G-TP named " << _name << " cloned"<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destructer - robot FragTrap named " << _name << " died"<< std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	(void)target;
	std::string types[] = {"\"Alale!\" - the battle cry of the Hellenes, which is believed to have been an imitation of the terrifying howl of an owl.",
						   "\"Baritus\" is the Roman name for the battle cry-song of the Germanic tribes of the time of Tacitus.",
						   "\"Nobiscum Deus\" (Latin God is with us!) Is the battle cry of the late Roman and Byzantine empires.",
						   "\"Aharai!\" - (Follow me!) In Hebrew - the battle cry of the ancient Jews.",
						   "\"Mara!\" - the battle cry of the Sarmatians.",
						   "\"Alga!\" (Kirg. Alga, Kaz. Alga - \"Forward\") - the battle cry of the Kazakhs, Kirghiz and Tatars).",
						   "\"Banzai!\" (\"10,000 years\") - Japanese battle cry.",
						   "\"Give me!\" - the battle cry of the soldiers of all sides during the civil war in Russia.",
						   "\"Geronimo!\" - the battle cry of the US airborne troops."};
	std::srand (std::time (0));
	int random = rand() % 9;
	std::cout << types[random]  << " !!!!!!!" << std::endl;
}