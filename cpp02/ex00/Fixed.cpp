//
// Created by jimin on 2022/12/05.
//

#include "Fixed.hpp"
#include <iostream>

/*********************************************/
/******    Orthodox Canonical Form      ******/
/*********************************************/

Fixed::Fixed() : rawBits(0) {
	std::cout << "Fixed Constructed" << std::endl;
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

/*********************************************/
/******			getter,setter			******/
/*********************************************/

const int & Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return rawBits;
}

void Fixed::setRawBits(int const & rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	Fixed::rawBits = rawBits;
}
