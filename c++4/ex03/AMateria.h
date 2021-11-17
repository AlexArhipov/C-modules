#include "Character.h"

#ifndef EX03_AMATERIA_H
#define EX03_AMATERIA_H

class AMateria
{
private:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria &other);
	AMateria &operator=(AMateria const &other);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	void setXP(int XP);
	void setTYPE(std::string const TYPE);
	virtual AMateria* clone() const = 0;
	void UpExp(void);
	virtual void use(ICharacter &other);
};


#endif //EX03_AMATERIA_H
