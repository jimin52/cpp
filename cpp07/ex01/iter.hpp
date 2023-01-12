#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* addr, size_t len, void (*f) (T const & src)) {
	if (!addr || !f)
		return;
	for (size_t i = 0; i < len; i++)
		f(addr[i]);
}

template<typename T>
void print1(T const & i) {
	std::cout << i << '\n';
}

#endif
