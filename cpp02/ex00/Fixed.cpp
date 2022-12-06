//
// Created by jimin on 2022/12/05.
//

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : rawBits(0) {
	std::cout << "Fixed Constructed" << std::endl;
}

int Fixed::getRawBits() const {
	return rawBits;
}

void Fixed::setRawBits(int rawBits) {
	Fixed::rawBits = rawBits;
}

Fixed::~Fixed() {
	std::cout << "Fixed Destructed" << std::endl;
}

Fixed::Fixed(const Fixed & src) {
	*this = src;
}

Fixed & Fixed::operator=(const Fixed & src) {
	if (this != &src)
		setRawBits(src.rawBits);
	return *this;
}