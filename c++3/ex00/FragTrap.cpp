
#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout << "Create a robot FR4G-TP"<< std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hit_point = 100;
	_max_hit_point = 100;
	_energ_point = 100;
	_max_energ_point = 100;
	_level = 1;
	_mel_at = 30;
	_range_at = 20;
	_amor = 5;
	std::cout << "Create a robot FR4G-TP named " << _name << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &other)
{
	_name = other._name;
	_max_hit_point = other._max_hit_point;
	_max_energ_point = other._max_energ_point;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_amor = other._amor;
	std::cout << "robot FR4G-TP named " << _name << " copy"<< std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &other)
{
	_name = other._name;
	_max_hit_point = other._max_hit_point;
	_max_energ_point = other._max_energ_point;
	_mel_at = other._mel_at;
	_range_at = other._range_at;
	_energ_point = other._energ_point;
	_level = other._level;
	_hit_point = other._hit_point;
	_amor = other._amor;
	std::cout << "robot FR4G-TP named " << _name << " cloned"<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destructer - robot FR4G-TP named " << _name << " died"<< std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	if (_energ_point >= 25)
	{
		_energ_point -= 25;
		std::cout << "a robot FR4G-TP named " << _name << " dealt " << _mel_at << " melee damage to " << target
				  << " and lose " << _energ_point << " energy point" << std::endl;
	}
	else
		std::cout << "robot FR4G-TP needs rest, he have " << _energ_point << " energy point" << std::endl;
}

void FragTrap::rangedAttack(const std::string &target)
{
	if (_energ_point >= 25)
	{
		_energ_point -= 25;
		std::cout << "a robot FR4G-TP named " << _name << " dealt " << _range_at << " range damage to " << target
				  << " and lose " << _energ_point << " energy point" << std::endl;
	}
	else
		std::cout << "robot FR4G-TP needs rest, he have " << _energ_point << " energy point" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount -= _amor;
	if (amount < 0)
		amount = 0;
	if (int(_hit_point - amount) > 0)
	{
		_hit_point -= amount;
		std::cout << "robot FR4G-TP named " << _name << " took " << amount << " damage and has " << _hit_point << " hit point left" << std::endl;
	}
	else
	{
		_hit_point = 0;
		std::cout << "robot FR4G-TP named " << _name << " died"<< std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_hit_point == 0)
	{
		std::cout << "the robot came to life and it's a miracle!!!" << std::endl;
		_hit_point = amount;
	}
	else
	{
		if (amount + _hit_point > _max_hit_point)
			amount = _max_hit_point - _hit_point;
		_hit_point += amount;
		std::cout << "robot FR4G-TP named " << _name << " restored " << amount << " hit point and he have " << _hit_point << " hit point" << std::endl;
	}
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