#include "AMateria.h"
#include "Character.h"

Character::Character()
{
	std::cout << "Create Character def. const" << std::endl;
}

Character::Character(std::string NAME)
{
	int i = -1;
	_name= NAME;
	while(++i < 4)
		_invent[i] = NULL;
}

Character::~Character()
{
	std::cout << "Delete Character" << std::endl;
	int i = -1;
	while(++i < 4)
	{
		if (_invent[i])
			delete (_invent[i]);
		_invent[i] = NULL;
	}
}

const std::string & Character::getName() const
{
	return _name;
}

Character & Character::operator=(const Character &other)
{
	int i = -1;
	_name= other._name;
	while(++i < 4)
	{
		if (_invent[i])
			delete(_invent[i]);
		if (other._invent[i])
			_invent[i] = other._invent[i];
		else
			_invent[i] = NULL;
	}
	return *this;
}

Character::Character(Character const &other)
{
	int i = -1;
	_name= other._name;
	while(++i < 4)
	{
		if (_invent[i])
			delete(_invent[i]);
		if (other._invent[i])
			_invent[i] = other._invent[i];
		else
			_invent[i] = NULL;
	}
}

void Character::equip(AMateria *m)
{
	int i = -1;
	while(++i < 4)
		if (_invent[i] == NULL)
		{
		//	std::cout << "_invent " << i << " imat "<< m << std::endl;
			_invent[i] = m;
			return;
		}
	std::cout << "All slots are occupied!" << std::endl;
}

void Character::unequip(int idx)
{
	if (_invent[idx])
		_invent[idx] = NULL;
	else
		std::cout << "There is no such slot or it is already empty!" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (_invent[idx])
		_invent[idx]->use(target);
	else
		std::cout << "it is impossible to use matter!" << std::endl;
}