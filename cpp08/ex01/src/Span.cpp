#include "../header/Span.hpp"

Span::Span( void ) : _N(0) {}

Span::Span( unsigned int N ): _N(N) {}

Span::~Span() {}

Span::Span( const Span& src ) : _N(src._N), _array(src._array) {}

const Span& Span::operator=( const Span& src ) {
	if (this != &src)
	{
		this->_N = src._N;
		this->_array = src._array;
	}
	return (*this);
}

void	Span::addNumber(unsigned int number) {
	if (this->_array.size() >= this->_N)
		throw cantGetSpan();
	this->_array.push_back(number);
}

void	Span::addMultipleNumber(std::vector<unsigned int>::iterator start,
							std::vector<unsigned int>::iterator end) {
	if (this->_array.size() + std::distance(start, end) > this->_N)
		throw cantGetSpan();
	this->_array.insert(this->_array.end(), start, end);
}


unsigned int	Span::longestSpan() {
	if (this->_N < 2)
		throw cantGetSpan();
	unsigned int min = *(std::min_element(this->_array.begin(), this->_array.end()));
	unsigned int max = *(std::max_element(this->_array.begin(), this->_array.end()));
	return (max - min);
}


unsigned int	Span::shortestSpan() {
	if (this->_N < 2)
		throw cantGetSpan();
	std::vector<unsigned int>::iterator it = this->_array.begin();
	std::vector<unsigned int>::iterator it_end = this->_array.end();
	std::sort(it, it_end);
	unsigned int min = 2147483647;

	for (; it != it_end; it++)
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	return (min);
}

const char * cantGetSpan::what() const throw() {
	return ("Error: Cannot return a span.");
	};