#include <iostream>
#include <iomanip>

#ifndef EX00_CONVERC_HH
#define EX00_CONVERC_HH


class Converc
{
private:
	std::string _str;
	char _c;
	float _f;
	int _i;
	double _d;
public:
	Converc(std::string str);
	Converc();
	~Converc();
	Converc(Converc &other);
	Converc &operator=(Converc &other);
	void toDouble();
	void ToFloat();
	void ToInt();
	void ToChar();
	void chek(std::string str);
	class ErrorException: public std::exception
	{
		const char *what() const throw();
	};
//	class GradeTooLowException: public std::exception
//	{
//		virtual const char *what() const throw();
//	};
};


#endif //EX00_CONVERC_HH
