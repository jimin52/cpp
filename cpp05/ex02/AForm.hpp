//
// Created by jimin on 2022/12/12.
//

#ifndef CPP_AFORM_HPP
#define CPP_AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const std::string	name;
	bool	sign;
	const int	signGrade;
	const int	execGrade;

	//	orthodox canonical form
	AForm & operator=(const AForm &rhs);

public:
	//	orthodox canonical form
	AForm();
	AForm(const AForm & src);
	virtual ~AForm();

	//	my constructor
	AForm(const std::string &name, const int signGrade, const int execGrade);

	//	getter
	const std::string &getName() const;
	bool isSign() const;
	const int getSignGrade() const;
	const int getExecGrade() const;

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

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif //CPP_AFORM_HPP
