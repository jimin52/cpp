//
// Created by jimin on 2022/12/02.
//

#include <iostream>

int	main() {

	std::string	stringString = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string	&stringREF = stringString;

	stringPTR = &stringString;

	std::cout << "stringString 주소: " << &stringString << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout << "stringString 값: " << stringString << std::endl;
	std::cout << "stringPTR이 가리키는 값: " << *stringPTR << std::endl;
	std::cout << "stringREF가 가리키는 값 값: " << stringREF << std::endl;
}