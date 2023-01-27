#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T & container, const T & value) {
	return std::find(container.begin(), container.end(), value);
}

template <typename T>
typename T::const_iterator easyfind(const T & container, const int & value) {
	return std::find(container.begin(), container.end(), value);
}

#endif
