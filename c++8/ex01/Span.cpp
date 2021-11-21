
#include "Span.hpp"

Span::~Span()
{
	_volume.clear();
}

Span::Span(size_t size)
{
	_size = size;
}

Span & Span::operator=(const Span &other)
{
	_volume.clear();
	_volume = other._volume;
	_size = other._size;
	return (*this);
}

Span::Span(const Span &other)
{
	_volume = other._volume;
}

size_t Span::longestSpan()
{
	if (_size < 2 || _volume.size() < 2)
		throw Error();
	return ((size_t)(*std::max_element(_volume.begin(),_volume.end()) - *std::min_element(_volume.begin(),_volume.end())));
}

size_t Span::shortestSpan()
{
	if (_size < 2 || _volume.size() < 2)
		throw Error();
	int i = 0;
	size_t res = (size_t)(_volume[i] - _volume[i + 1]);
	while (++i < (int)(_volume.size() - 1))
		if ((size_t)(_volume[i] - _volume[i + 1]) < res)
			res = _volume[i] - _volume[i + 1];
	return res;
}

void Span::addNumber(int volume)
{
	if (_size <= _volume.size())
		throw Error();
	else
		_volume.push_back(volume);
}

const char* Span::Error::what() const throw()
{
	return "Error";
}

int Span::GetSize()
{
	return _size;
}