//
// Created by jimin on 2022/12/10.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &src): type(src.getType()){
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal operator= called" << std::endl;
	if (this != &rhs)
		type = rhs.getType();
	return *this;
}

Animal::Animal(std::string type): type(type) {
	std::cout << "Animal default constructor called" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "animal sound" << std::endl;
}
