#include "Converter.hpp"
#include <cmath>


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
	convertInit();
}

Converter::~Converter(){
	std::cout << "Converter destructed" << std::endl;
}

void	Converter::convertInit() {

	int strSize = str.size();
	char *pEnd;

	switch (strSize) {
		case 0:
			flag |= ERR_EMPTY_FLAG;
			break;
		case 1:
			if (!std::isdigit(str[0]))
				casted_double = static_cast<double>(str.at(0));
			else
				casted_double = std::strtod(str.c_str(), &pEnd);
			break;
		default:
			if (str[str.back() - 1] == 'f')
				str.pop_back();
			casted_double = std::strtod(str.c_str(), &pEnd);
			if (isnan(casted_double))
				flag |= NAN_FLAG;
			if (casted_double == 0)
				flag |= ERR_NOT_NUMBER_FLAG;
			break;
	}
	convert();
}

void Converter::strToChar(){

	if (flag & NAN_FLAG 
			|| casted_double > std::numeric_limits<char>::max()
			|| casted_double < std::numeric_limits<char>::min())
		charString = "Impossible";
	if (!std::isprint(casted_double)) {
		charString = "Non Displayable";
		return;
	}
	charString = static_cast<char>(casted_double);
}

void Converter::strToInt(){

	if (flag & NAN_FLAG) {
		intString = "Impossible";
		return;
	}
	if (casted_double > std::numeric_limits<int>::max()
			|| casted_double < std::numeric_limits<int>::min()) {
		intString = "Overflow";
		return;
	}
	std::stringstream ss;
	int i = static_cast<int>(casted_double);
	ss << i;
	intString = ss.str();
}

void Converter::strToFloat(){

	float i = static_cast<float>(casted_double);
	std::stringstream ss;
	ss << i;
	floatString = ss.str();
	if (intString == ss.str())
		floatString += ".0";
	floatString += 'f';

}

void Converter::strToDouble(){

	std::stringstream ss;
	ss << casted_double;
	if (intString == ss.str())
		ss << ".0";
	doubleString = ss.str();
}

void	Converter::convert(){
	if (flag & ERR_NOT_NUMBER_FLAG || flag & ERR_EMPTY_FLAG) {
		charString = "Impossible";
		intString = "Impossible";
		floatString = "Impossible";
		doubleString = "Impossible";
	} else { 
		strToChar();
		strToInt();
		strToFloat();
		strToDouble();
	}
}

void	Converter::Print() {
	convert();
	std::cout << "charString: " << charString << std::endl;
	std::cout << "intString: " << intString << std::endl;
	std::cout << "floatString: " << floatString << std::endl;
	std::cout << "doubleString: " << doubleString << std::endl;
}

