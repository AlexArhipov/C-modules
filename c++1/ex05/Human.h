
#ifndef EX5_HUMAN_H
#define EX5_HUMAN_H
#include "Brain.h"

class Human
{
private:
	Brain _brein;
public:
	Human();
	~Human();
	Brain *identify();
	Brain &getBrain();
};

#endif //EX5_HUMAN_H
