//
// Created by jimin on 2022/12/12.
//

#include "Bureaucrat.hpp"
#include <iostream>

int main( void ) {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******            basic test            ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat b1("baby", 10);

			std::cout << b1 << std::endl;
			b1.gradeIncrement(5);
			std::cout << b1 << std::endl;
			b1.gradeDecrement(50);
			std::cout << b1 << std::endl;

		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******       increment error test       ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat b1("baby", 10);

			std::cout << b1 << std::endl;
			b1.gradeIncrement(20);
			std::cout << b1 << std::endl;

		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******      construct error test        ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat b2("error", 160);

			std::cout << b2 << std::endl;

		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	return 0;
}
