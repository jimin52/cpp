//
// Created by jimin on 2022/12/12.
//

#include "RobotomyRequestForm.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/

RobotomyRequestForm::RobotomyRequestForm() : Form("RRF", RRF_SIGN_GRADE, RRF_EXEC_GRADE) , target("default") {
	std::cout << "RRF default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RRF destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : target(src.getTarget()) {
	std::cout << "RRF Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	(void) rhs;
	return *this;
}

/*********************************************/
/******	     required function          ******/
/*********************************************/

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RRF", RRF_SIGN_GRADE, RRF_EXEC_GRADE), target(target) {
	std::cout << "RRF constructor called" << std::endl;
}

/*********************************************/
/******		Overridden function  		******/
/*********************************************/

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	if (isExecutable(executor) == false)
		throw GradeNotEnoughException();
	std::cout << "drrrrrrrrrril.... drrrrrrrrrril...." << std::endl;
	struct timeval t;
	gettimeofday(&t, NULL);
	srand(t.tv_usec);
	int random = rand();
	if (random % 2 == 0)
		std::cout << target << "has been robotomized successfully" << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;
}

/*********************************************/
/******	           getter               ******/
/*********************************************/

const std::string &RobotomyRequestForm::getTarget() const {
	return target;
}
