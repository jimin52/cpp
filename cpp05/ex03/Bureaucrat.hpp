//
// Created by jimin on 2022/12/12.
//

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP

#include <string>
#include <ostream>
#include "AForm.hpp"

class Form;

class Bureaucrat {
private:
	const std::string	name;
	int	grade;
public:
	//	orthodox canonical form
	Bureaucrat();
	virtual ~Bureaucrat();
	Bureaucrat(const Bureaucrat & src);
	Bureaucrat& operator=(const Bureaucrat & rhs);

	//	my constructor
	Bureaucrat(const std::string &name, int grade);

	//	getter
	std::string getName() const;
	int getGrade() const;

	//	grade increment, decrement
	void gradeIncrement(int value);
	void gradeDecrement(int value);

	//	exception classes
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};

	//	required function
	void signForm(Form & form);
	void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //CPP_BUREAUCRAT_HPP
