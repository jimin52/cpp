//
// Created by jimin on 2022/12/22.
//

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP


#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {
private:
	std::string formNameArray[3];

	//	my function
	Form* makePresidentialPardonForm(const std::string &target);
	Form* makeRobotomyRequestForm(const std::string &target);
	Form* makeShrubberyCreationForm(const std::string &target);

public:
	//	orthodox canonical form
	Intern();
	virtual ~Intern();
	Intern(const Intern & src);
	Intern & operator=(const Intern &rhs);

	//	requested function
	Form* makeForm(const std::string &formName, const std::string &formTarget);
};


#endif //CPP_INTERN_HPP
