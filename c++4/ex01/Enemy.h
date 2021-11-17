
#ifndef INC_01_ENEMY_H
#define INC_01_ENEMY_H
#include <iostream>

class Enemy
{
protected:
	int _HP;
	std::string _type;
public:
	Enemy(int hp, std::string const & type);
	Enemy();
	virtual ~Enemy() {}
	Enemy(Enemy &other);
	Enemy &operator=(const Enemy &other);
	std::string getType() const;
	int getHP() const;
	void setHP(int HP);

	virtual void takeDamage(int) = 0;
};

#endif //INC_01_ENEMY_H
