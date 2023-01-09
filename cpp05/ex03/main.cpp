//
// Created by jimin on 2022/12/12.
//

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main( void ) {
	{
		Intern i1;
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******          intern test             ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		try {
			Bureaucrat seongyle("seongyle", 5);

			Form* f1;
			f1 = i1.makeForm("presidential pardon", "abcd");
			seongyle.signForm(*f1);
			seongyle.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}

		std::cout << "" << std::endl;
		try {
			Bureaucrat ywee("ywee", 5);

			Form* f1;
			f1 = i1.makeForm("robotomy request", "1234");
			ywee.signForm(*f1);
			ywee.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}

		std::cout << "" << std::endl;
		try {
			Bureaucrat jaekim("jaekim", 5);

			Form* f1;
			f1 = i1.makeForm("shrubbery creation", "tree");
			jaekim.signForm(*f1);
			jaekim.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}

		std::cout << "" << std::endl;
		try {
			Bureaucrat jimin("jimin", 5);

			Form* f1;
			f1 = i1.makeForm("wrong name", "wrong");
			jimin.signForm(*f1);
			jimin.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	return 0;
}
