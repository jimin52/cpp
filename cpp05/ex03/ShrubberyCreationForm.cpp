//
// Created by jimin on 2022/12/12.
//

#include "ShrubberyCreationForm.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("SCF", SCF_SIGN_GRADE, SCF_EXEC_GRADE), target("default") {
	std::cout << "ShruberryCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form("SCF", SCF_SIGN_GRADE, SCF_EXEC_GRADE), target(src.getTarget()) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs) {
	(void) rhs;
	return *this;
}

/*********************************************/
/******	       required function        ******/
/*********************************************/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("SCF", SCF_SIGN_GRADE, SCF_EXEC_GRADE), target(target) {
	std::cout << "ShrubberyCreationForm " << target << " constructor called" << std::endl;
}

/*********************************************/
/******	      overrodded function       ******/
/*********************************************/

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
	if (isExecutable(executor) == false)
		throw FileIOexception();
	std::string fileName(target + "_shrubbery");
	std::ofstream ofs(fileName.c_str());
	if (ofs.fail())
		throw FileIOexception();
	ofs << "                                          \n"
		   "  ,d                                      \n"
		   "  88                                      \n"
		   "MM88MMM 8b,dPPYba,  ,adPPYba,  ,adPPYba,  \n"
		   "  88    88P'   \"Y8 a8P_____88 a8P_____88  \n"
		   "  88    88         8PP\"\"\"\"\"\"\" 8PP\"\"\"\"\"\"\"  \n"
		   "  88,   88         \"8b,   ,aa \"8b,   ,aa  \n"
		   "  \"Y888 88          `\"Ybbd8\"'  `\"Ybbd8\"'  " << std::endl;
	ofs.close();
}

const std::string &ShrubberyCreationForm::getTarget() const {
	return target;
}
