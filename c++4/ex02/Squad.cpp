
#include "Squad.h"

Squad::Squad()
{
	_count = 0;
	_squad = NULL;
	std::cout << "Create Squad" << std::endl;
}

Squad::~Squad()
{
	_t_Squad *temp;
	while (_squad)
	{
		temp = _squad->next;
		delete _squad->_unit;
		delete _squad;
		_squad = temp;
	}
	std::cout << "Delete Squad" << std::endl;
}

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine * Squad::getUnit(int caunt) const
{
	_t_Squad *temp = _squad;
	if (caunt < 0 || caunt > _count)
		return NULL;
	while (caunt--)
		temp = _squad->next;
	return temp->_unit;
}

int Squad::push(ISpaceMarine *spaceMarine)
{
	_t_Squad *temp = _squad;
	if (_squad)
	{
		while (temp->next)
		{
			if (temp->_unit == spaceMarine)
				return _count;
			temp = temp->next;
		}
		temp->next = new _t_Squad;
		temp->next->next = NULL;
		temp->next->_unit = spaceMarine;
	}
	else
	{
		_squad = new _t_Squad ;
		_squad->next = NULL;
		_squad->_unit = spaceMarine;
	}
	_count++;
	return _count;
}

Squad::Squad(const Squad &other)
{
	int i = -1;
	while (++i < other._count)
		push(other.getUnit(i)->clone());
	std::cout << "Copy Squad" << std::endl;
}

Squad & Squad::operator=(const Squad &other)
{
	_t_Squad *temp;
	int i = -1;
	if (this != &other)
	{
		while (_squad)
		{
			temp = _squad->next;
			delete _squad->_unit;
			delete _squad;
			_squad = temp;
		}
		while (++i < _count)
			push(other.getUnit(i)->clone());
		_count = other._count;
		std::cout << "Delete Squad" << std::endl;
	}
	return *this;
}
