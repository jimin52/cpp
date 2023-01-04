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
		std::cout << std::endl;
		std::cout << "/*****************************************/" << std::endl;
		std::cout << "/********    Subject test       **********/" << std::endl;
		std::cout << "/*****************************************/" << std::endl;
		std::cout << std::endl;
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
		std::cout << std::endl;
		std::cout << "/*****************************************/" << std::endl;
		std::cout << "/********    explicit test      **********/" << std::endl;
		std::cout << "/*****************************************/" << std::endl;
		std::cout << std::endl;

		int	a = 42;
		//Fixed f1 = a;

		Fixed f1(a);
	}
	{
		std::cout << std::endl;
		std::cout << "/*****************************************/" << std::endl;
		std::cout << "/********        My test        **********/" << std::endl;
		std::cout << "/*****************************************/" << std::endl;
		std::cout << std::endl;

		Fixed f1(42);
		Fixed f2(42.42f);

		std::cout << "f1.getRawBits: " << f1.getRawBits() << std::endl;
		std::cout << "f2.getRawBits: " << f2.getRawBits() << std::endl;

		std::cout << std::endl;
		std::cout << "f1 = f2" << std::endl;
		f1 = f2;
		std::cout << "f1.getRawBits: " << f1.getRawBits() << std::endl;
		std::cout << "f2.getRawBits: " << f2.getRawBits() << std::endl;
		if (f1 == f2)
			std::cout << "f1 == f2" << std::endl;
		else
			std::cout << "f1 != f2" << std::endl;

		std::cout << std::endl;
		std::cout << "f2.setRawBits(10000);" << std::endl;
		f2.setRawBits(10000);
		std::cout << "f1.getRawBits: " << f1.getRawBits() << std::endl;
		std::cout << "f2.getRawBits: " << f2.getRawBits() << std::endl;

		if (f1 == f2)
			std::cout << "f1 == f2" << std::endl;
		else
			std::cout << "f1 != f2" << std::endl;

	}
	return 0;
}
