//
// Created by jimin on 2022/12/12.
//

#include "PresidentialPardonForm.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PPF", PPF_SIGN_GRADE, PPF_EXEC_GRADE), target("default") {
	std::cout << "PPF default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : target(src.getTarget()) {
	std::cout << "PPF Copy constructor called " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PPF destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	std::cout << "PPF operator= called" << std::endl;
	(void) rhs;
	return *this;
}

/*********************************************/
/******	     required function          ******/
/*********************************************/

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PPF", PPF_SIGN_GRADE, PPF_EXEC_GRADE), target(target) {
	std::cout << "PPF constructor called" << std::endl;
}

/*********************************************/
/******		Overridden function  		******/
/*********************************************/

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	if (isExecutable(executor) == false)
		throw GradeNotEnoughException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/*********************************************/
/******	           getter               ******/
/*********************************************/

const std::string &PresidentialPardonForm::getTarget() const {
	return target;
}




