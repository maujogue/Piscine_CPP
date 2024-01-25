#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template< typename T >
T const &max(T const & x, T const & y) {
	return (x > y ? x : y);
}

template< typename T >
T const &min(T const & x, T const & y) {
	return (x < y ? x : y);
}

template< typename T>
void	swap(T & t1, T & t2){
	T t3 = t1;
	t1 = t2;
	t2 = t3;
}

#endif