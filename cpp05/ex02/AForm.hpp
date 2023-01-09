//
// Created by jimin on 2022/12/12.
//

#ifndef CPP_AFORM_HPP
#define CPP_AFORM_HPP

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

public:
	//	orthodox canonical form
	Form();
	Form(const Form & src);
	virtual ~Form();

	//	my constructor
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
	class GradeNotEnoughException : public std::exception {
	public:
		const char *what() const throw();
	};

	//	requested function
	bool beSigned(const Bureaucrat & bureau);
	virtual void execute(Bureaucrat const & executor) const = 0;

	//	my function
	bool isExecutable(const Bureaucrat & executor) const;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //CPP_AFORM_HPP
