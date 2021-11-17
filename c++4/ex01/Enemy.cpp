
#include "Enemy.h"

Enemy::Enemy()
{
	std::cout << "Create Enemy" << std::endl;
}

//Enemy::~Enemy()
//{
//	std::cout << "Delete Enemy" << std::endl;
//}

Enemy & Enemy::operator=(const Enemy &other)
{
	_type = other._type;
	_HP = other._HP;
	std::cout << "= Enemy" << std::endl;
	return *this;
}

Enemy::Enemy(Enemy &other)
{
	_type = other._type;
	_HP = other._HP;
	std::cout << "Copy Enemy" << std::endl;
}

std::string Enemy::getType() const
{
	return _type;
}
int Enemy::getHP() const
{
	return _HP;
}

void Enemy::setHP(int HP)
{
	_HP = HP;
}

Enemy::Enemy(int hp, const std::string &type)
{
	_type = type;
	_HP = hp;
}