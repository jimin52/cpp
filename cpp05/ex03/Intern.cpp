//
// Created by jimin on 2022/12/22.
//

#include "Intern.hpp"


Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
	formNameArray[0] = "presidential pardon";
	formNameArray[1] = "robotomy request";
	formNameArray[2] = "shrubbery creation";
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &src) {
	std::cout << "Intern copy constructor called" << std::endl;
	(void) src;
}

Intern &Intern::operator=(const Intern &rhs) {
	if (this != &rhs)
		(void) rhs;
	return *this;
}

Form* Intern::makeForm(const std::string &formName, const std::string &formTarget) {

	static Form * ( Intern::*func[3] )( const std::string & ) = {
			&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm
	};
	for(int i = 0; i < 3; i++){
		if (formNameArray[i] == formName) {
			return ((this->*func[i])(formTarget));
		}
	}
	std::cerr << "Form Name is Wrong!!!" << std::endl;
	throw Intern::MakeFormError();
}


Form *Intern::makePresidentialPardonForm(const std::string &target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::makeRobotomyRequestForm(const std::string &target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::makeShrubberyCreationForm(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

const char *Intern::MakeFormError::what() const throw() {
	return "Form Name is Wrong !!!";
}
