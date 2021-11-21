#include <iostream>
#include <vector>

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP


class Span
{
private:
	size_t _size;
	std::vector<int> _volume;
	Span();
public:
	~Span();
	Span(size_t size);
	Span(const Span &other);
	Span &operator=(const Span &other);

	class Error: public std::exception
	{
		virtual const char *what() const throw();
	};
	void addNumber(int volume);
	size_t shortestSpan();
	size_t longestSpan();
	int GetSize();
};

#endif //EX01_SPAN_HPP
