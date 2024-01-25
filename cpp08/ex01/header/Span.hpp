#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class cantGetSpan : public std::exception {
	public:
		virtual const char * what() const throw();
};

class Span {
	private:
		unsigned int 				_N;
		std::vector<unsigned int>	_array;
		Span();

	public:
		Span(unsigned int N);
		~Span();
		Span(const Span & src);
		const Span& operator=(const Span & src);

		void			addNumber(unsigned int number);
		void			addMultipleNumber(std::vector<unsigned int>::iterator start,
							std::vector<unsigned int>::iterator end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

#endif