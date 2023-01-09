//
// Created by jimin on 2022/12/12.
//

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main( void ) {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******            SCF test              ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat jimin("jimin", 10);
			ShrubberyCreationForm s1("abcd");
			jimin.signForm(s1);
			jimin.executeForm(s1);


		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******            PPF test              ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat jimin("jimin", 3);
			PresidentialPardonForm p1("abcd");
			jimin.signForm(p1);
			jimin.executeForm(p1);


		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******            RRF test              ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat jimin("jimin", 3);
			RobotomyRequestForm r1("abcd");
			jimin.signForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);
			jimin.executeForm(r1);


		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
