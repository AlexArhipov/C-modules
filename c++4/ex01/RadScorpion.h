#include "Enemy.h"

#ifndef INC_01_RADSCORPION_H
#define INC_01_RADSCORPION_H


class RadScorpion: public Enemy
{
public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion &other);
	RadScorpion &operator=(const RadScorpion &other);

	void takeDamage(int);
};


#endif //INC_01_RADSCORPION_H
