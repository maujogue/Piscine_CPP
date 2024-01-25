#ifndef ALGO_TPP
# define ALGO_TPP

# include <iostream>
# include <algorithm>

template <typename T>
bool easyfind(T container, int n){
	typename T::iterator it = find(container.begin(), container.end(), n);
	if (it == container.end())
		return (false);
	return (true);
}

#endif