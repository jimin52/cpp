//
// Created by jimin on 2022/12/12.
//

#include "AForm.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/

AForm::AForm() : name(""), sign(false), signGrade(150), execGrade(150){
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &src) : name(src.name), sign(src.sign), signGrade(src.signGrade), execGrade(src.execGrade) {
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &rhs) {
	std::cout << "AForm operator= called" << std::endl;
	(void) rhs;
	return *this;
}

/*********************************************/
/******	        my constructor          ******/
/*********************************************/

AForm::AForm(const std::string &name,
			 const int signGrade,
			 const int execGrade)
		: name(name),
		sign(false),
		signGrade(signGrade),
		execGrade(execGrade) {

	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm constructor called" << std::endl;
}

/*********************************************/
/******				getter				******/
/*********************************************/

const std::string &AForm::getName() const {
	return name;
}

bool AForm::isSign() const {
	return sign;
}

const int AForm::getSignGrade() const {
	return signGrade;
}

const int AForm::getExecGrade() const {
	return execGrade;
}

/*********************************************/
/******	     Required functions         ******/
/*********************************************/

bool AForm::beSigned(const Bureaucrat &bureau) {
	if (bureau.getGrade() <= signGrade)
		sign = true;
	return sign;
}

bool AForm::isExecutable(const Bureaucrat &executor) const {
	if (execGrade >= executor.getGrade())
		return true;
	else
		return false;
}

/*********************************************/
/******      exception override         ******/
/*********************************************/

const char *AForm::GradeTooHighException::what() const throw() {
	return "AForm Grade Too High !!!";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "AForm Grade Too Low !!!";
}

const char *AForm::GradeNotEnoughException::what() const throw() {
	return "Executor's Grade Is Not Enough";
}
/*********************************************/
/******	     outstream operator         ******/
/*********************************************/

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	return os << "name " << form.getName()
	<< ", signed: " << form.isSign()
	<< ", sign grade: " << form.getSignGrade()
	<< "< exec grade: " << form.getExecGrade()
	<< std::endl;
}

