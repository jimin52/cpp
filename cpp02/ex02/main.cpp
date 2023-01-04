//
// Created by jimin on 2022/12/06.
//
#include <iostream>
#include "Fixed.hpp"

void	printA(Fixed a) {
	std::cout << a.getRawBits() << std::endl;
}

int main( void ) {
	{
		/*****************************************/
		/********    Subject test         ********/
		/*****************************************/
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		Fixed c(20);
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << Fixed::max(a, c).toInt() << std::endl;
	}
	{
		/*****************************************/
		/********    explicit test        ********/
		/*****************************************/

		int	a = 42;
		//Fixed f1 = a;

		Fixed f1(a);
	}
	return 0;
}
