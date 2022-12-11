//
// Created by jimin on 2022/12/11.
//

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal() {
	std::cout << "WrongDog constructor called" << std::endl;
	this->type = "WrongDog";
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &src) : WrongAnimal(src){
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = src;
}

WrongDog &WrongDog::operator=(const WrongDog &rhs) {
	std::cout << "WrongDog operator= called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void WrongDog::makeSound() const{
	std::cout << "bark bark" << std::endl;
}
