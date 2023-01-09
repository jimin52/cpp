//
// Created by jimin on 2022/12/12.
//

#include "Form.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/

Form::Form() : name(""), sign(false), signGrade(150), execGrade(150){
	std::cout << "Form default constructor called" << std::endl;
}


Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &src) : name(src.name), sign(src.sign), signGrade(src.signGrade), execGrade(src.execGrade) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs) {
	std::cout << "Form operator= called" << std::endl;
	(void ) rhs;
	return *this;
}

/*********************************************/
/******	        my constructor          ******/
/*********************************************/

Form::Form(const std::string &name,
		   const int signGrade,
		   const int execGrade)
		: name(name),
		  sign(false),
		  signGrade(signGrade),
		  execGrade(execGrade) {

	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

/*********************************************/
/******				getter				******/
/*********************************************/

std::string Form::getName() const {
	return name;
}

bool Form::isSign() const {
	return sign;
}

int Form::getSignGrade() const {
	return signGrade;
}

int Form::getExecGrade() const {
	return execGrade;
}

/*********************************************/
/******	     Required functions         ******/
/*********************************************/

bool Form::beSigned(const Bureaucrat &bureau) {
	if (bureau.getGrade() <= signGrade)
		sign = true;
	return sign;
}

/*********************************************/
/******      exception override         ******/
/*********************************************/

const char *Form::GradeTooHighException::what() const throw() {
	return "Form Grade Too High !!!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form Grade Too Low !!!";
}

/*********************************************/
/******	     outstream operator         ******/
/*********************************************/

std::ostream &operator<<(std::ostream &os, const Form &form) {
	return os << "name " << form.getName()
	<< ", signed: " << form.isSign()
	<< ", sign grade: " << form.getSignGrade()
	<< ", exec grade: " << form.getExecGrade()
	<< std::endl;
}
