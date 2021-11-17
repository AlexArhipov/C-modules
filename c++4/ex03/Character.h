#include "ICharacter.h"

#ifndef EX03_CHARACTER_H
#define EX03_CHARACTER_H


class Character: public ICharacter
{
private:
	AMateria *_invent[4];
	std::string _name;
public:
	Character();
	~Character();
	Character(std::string NAME);
	Character(Character const &other);
	Character &operator=(Character const &other);
	std::string const & getName() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //EX03_CHARACTER_H
