//
// Created by jimin on 2022/12/12.
//

#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:

	const std::string	name;
	bool	sign;
	const int	signGrade;
	const int	execGrade;

	//	orthodox canonical form
	Form & operator=(const Form &rhs);
	Form(const Form & src);

public:
	//	orthodox canonical form
	Form();
	virtual ~Form();

	Form(const std::string &name, const int signGrade, const int execGrade);

	//	getter
	std::string getName() const;
	bool isSign() const;
	int getSignGrade() const;
	int getExecGrade() const;

	//	exception classes
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};

	//	requested function
	bool beSigned(const Bureaucrat & bureau);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //CPP_FORM_HPP
