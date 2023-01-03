//
// Created by jimin on 2022/12/05.
//

#include <iostream>
#include "Fixed.hpp"

void printA(Fixed a) {
	std::cout << a.getRawBits() << std::endl;
}
int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
