//
// Created by jimin on 2022/12/12.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

private:
	std::string target;
	static const int PPF_SIGN_GRADE = 25;
	static const int PPF_EXEC_GRADE = 5;

	//	orthodox canonical form
	PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

public:
	//	orthodox canonical form
	PresidentialPardonForm();
	explicit PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();

	// override functions
	virtual void execute(const Bureaucrat &executor) const;

	//	getter
	const std::string &getTarget() const;
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
