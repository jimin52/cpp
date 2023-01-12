//
// Created by jimin on 2023/01/10.
//

#include "Data.hpp"

Data::Data(): thisIsData(0) {
	std::cout << "Data constructed" << std::endl;
}

Data::~Data() {
	std::cout << "Data destructed" << std::endl;
}

Data::Data(const Data &src) {
	std::cout << "Data copy constructor called" << std::endl;
}

Data &Data::operator=(const Data &rhs) {
	std::cout << "Data assign operator called" << std::endl;
	(void) rhs;
	return *this;
}

Data::Data(int thisIsData) : thisIsData(thisIsData) {}

void Data::hiThisIsData() {
	std::cout << "Hi! this is data:" << thisIsData << std::endl;
}


