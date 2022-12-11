//
// Created by jimin on 2022/12/11.
//

#include "Cat.hpp"

Cat::Cat() : Animal(){
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat operator= called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}
