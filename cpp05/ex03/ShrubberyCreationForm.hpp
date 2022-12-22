//
// Created by jimin on 2022/12/12.
//

#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form {
private:
	std::string target;
	static const int SCF_SIGN_GRADE = 145;
	static const int SCF_EXEC_GRADE = 137;

public:
	//	orthodox caninical form
	ShrubberyCreationForm();
	explicit ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm & rhs);

	//	required function
	ShrubberyCreationForm(const std::string &target);

	//	overridden function
	void execute(const Bureaucrat &executor) const;

	//	getter
	const std::string &getTarget() const;

	class FileIOexception : public std::exception {
		virtual const char* what() const throw(){
			return ("Error occurs while control file !!!!");
		}
	};
};


#endif //CPP_SHRUBBERYCREATIONFORM_HPP
