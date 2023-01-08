//
// Created by jimin on 2022/12/11.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src): type(src.getType()){
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "AAnimal operator= called" << std::endl;
	if (this != &rhs)
		type = rhs.getType();
	return *this;
}

AAnimal::AAnimal(std::string type): type(type) {
	std::cout << "Animal default constructor called" << std::endl;
}

std::string AAnimal::getType() const {
	return type;
}
