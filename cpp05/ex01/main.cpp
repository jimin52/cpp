//
// Created by jimin on 2022/12/12.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main( void ) {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******      Form basic test             ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {

			Bureaucrat b1("jimin", 30);
			Form f1("homework", 40, 40);
			Form f2("cpp08", 20, 20);
			Form f3("과제", 30, 30);

			b1.signForm(f1);
			b1.signForm(f2);
			std::cout << b1 << std::endl;
			b1.signForm(f3);

		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******     Form decrement error test    ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {

			Bureaucrat b1("baby", 40);
			Form f1("hoemwork1", 50, 50);
			Form f2("hoemwork2", 50, 50);

			b1.signForm(f1);
			b1.gradeDecrement(50);
			std::cout << b1 << std::endl;
			b1.signForm(f2);

		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	return 0;
}
