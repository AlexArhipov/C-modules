//
// Created by Adeline Vivien on 4/7/21.
//

#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout << "Create a robot FR4G-TP" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	_name = name;
	std::cout << "Create a robot FR4G-TP named " << _name << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &other)
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
	std::cout << "robot FR4G-TP named " << _name << " copy"<< std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &other)
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
	std::cout << "robot FR4G-TP named " << _name << " cloned"<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destructer - robot FR4G-TP named " << _name << " died"<< std::endl;
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