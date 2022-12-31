//
// Created by jimin on 2022/12/12.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <sys/time.h>


class RobotomyRequestForm : public Form{
private:
	std::string target;
	static const int RRF_SIGN_GRADE = 72;
	static const int RRF_EXEC_GRADE = 45;

	//	orthodox canonical form
	RobotomyRequestForm& operator=(const RobotomyRequestForm & rhs);

public:
	//	orthodox canonical form
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& src);
	virtual ~RobotomyRequestForm();

	//	requested function
	explicit RobotomyRequestForm(const std::string &target);

	//	overridden function
	void execute(const Bureaucrat &executor) const;

	const std::string &getTarget() const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
