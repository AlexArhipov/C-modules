
#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
	int i = -1;
	while(++i < 4)
	{
		_stek[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	int i = -1;
	while(++i < 4)
	{
		delete(_stek[i]);
		_stek[i] = NULL;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other)
{
	int i = -1;
	while(i < 4)
	{
		if (other._stek[i])
			_stek[i] = other._stek[i]->clone();
		else
			_stek[i] = NULL;
	}
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	int i = -1;
	while(++i < 4)
	{
		if (other._stek[i])
			_stek[i] = other._stek[i]->clone();
		else
			_stek[i] = NULL;
	}
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
	int i = -1;
	while(++i < 4)
	{
		if (_stek[i] != NULL && _stek[i]->getType() == type)
		{
			return _stek[i]->clone();
		std::cout << "++ materiz " << std::endl;}
	//	if (_stek[i] != NULL)
	//		std::cout << "++ materi type " <<_stek[i]->getType() <<  std::endl;
	//	std::cout << "-- incoming type " << type <<  std::endl;
	}
	return NULL;
}

void MateriaSource::learnMateria(AMateria *aMateria)
{
	int i = -1;
	while(++i < 4)
	{
		if (_stek[i] == NULL)
		{
			_stek[i] = aMateria;
		//	std::cout << i << " = i +++ materi type " << _stek[i]->getType() <<  std::endl;
			return;
		}
	}
}