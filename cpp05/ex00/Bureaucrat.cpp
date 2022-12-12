//
// Created by jimin on 2022/12/12.
//

#include <iostream>
#include "Bureaucrat.hpp"


const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::gradeIncrement(int value) {
	if (grade - value < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade -= value;
}

void Bureaucrat::gradeDecrement(int value) {
	if (grade + value > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade += value;
}

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << "Bureaucrat operator= called" << std::endl;
	if (this != &rhs) {
		const_cast<std::string &>(name) = rhs.name;
		grade = rhs.grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat name: " << name << " grade: " << std::to_string(grade) << " constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	return os << bureaucrat.getName() << ", bureaucrat grade " << std::to_string(bureaucrat.getGrade());
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat Grade Too High !!!";
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat Grade Too Low !!!";
}
