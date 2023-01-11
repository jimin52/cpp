#include "Converter.hpp"


Converter::Converter(){
	std::cout << "Converter default Constructor called" << std::endl;
}

Converter::Converter(const Converter & src){
	std::cout << "Converter copy constructor called" << std::endl;
}

Converter & Converter::operator=(Converter const & rhs){
	std::cout << "Converter assign operator called" << std::endl;
	(void) rhs;
	return *this;
}

Converter::Converter(std::string input): str(input), flag(0) {
	std::cout << "Converter constructor called" << std::endl;
	if (str.size() == 1)
		flag |= CHAR_FLAG;
	if (!(flag & CHAR_FLAG) && str[str.back() - 1] == 'f')
		;



}

Converter::~Converter(){
	std::cout << "Converter destructed" << std::endl;
}

char Converter::strToChar(){
}

int Converter::strToInt(){
}

float Converter::strToFloat(){
}

double Converter::strToDouble(){
}
