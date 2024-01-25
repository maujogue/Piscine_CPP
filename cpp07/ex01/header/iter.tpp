#ifndef ITER_TPP
# define ITER_TPP

# include <iostream>

template <typename A>
void iter(A const *array, int const max, void f(const A &arg)){
	for (int i = 0; i < max; i++)
		f(array[i]);
}

template <typename A>
void iter(A *array, int const max, void f(A &arg)){
	for (int i = 0; i < max; i++)
		f(array[i]);
}


#endif