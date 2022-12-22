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
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******          intern test             ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat b1("seongyle", 5);
			Intern i1;

			Form* f1;
			f1 = i1.makeForm("presidential pardon", "abcd");
			b1.signForm(*f1);
			b1.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}
		try {
			Bureaucrat b1("ywee", 5);
			Intern i1;

			Form* f1;
			f1 = i1.makeForm("robotomy request", "1234");
			b1.signForm(*f1);
			b1.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}
		try {
			Bureaucrat b1("jaekim", 5);
			Intern i1;

			Form* f1;
			f1 = i1.makeForm("shrubbery creation", "tree");
			b1.signForm(*f1);
			b1.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}
		try {
			Bureaucrat b1("jimin", 5);
			Intern i1;

			Form* f1;
			f1 = i1.makeForm("wrong name", "wrong");
			b1.signForm(*f1);
			b1.executeForm(*f1);

		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	return 0;
}