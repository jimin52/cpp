#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>

class Array {

private:

	T* 	_array;
	size_t	_size;

public:

	Array<T>(): _array(new T[0]), _size(0){
	}

	virtual ~Array<T>() {
		if (_array)
			delete[] _array;
	}

	Array<T>(const Array<T> & src) {
		_array = NULL;
		*this = src;
	}

	Array<T> &operator=(const Array<T> & rhs) {
		if (_array) 
			delete[] _array;
		_size = rhs._size;
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++){
			_array[i] = rhs._array[i];
		}
		return *this;
	}

	Array<T>(unsigned int n): _array(new T[n]), _size(n){
	}

	T & operator[](const size_t index) {
		if (index >= _size)
			throw std::out_of_range("out of range exception");
		return _array[index];
	}

	const T & operator[](const size_t index) const {
		if (index >= _size)
			throw std::out_of_range("out of range exception");
		return _array[index];
	}

	size_t size(){
		return _size;
	}
};

#endif
