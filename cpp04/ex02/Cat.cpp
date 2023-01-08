//
// Created by jimin on 2022/12/11.
//

#include "Cat.hpp"

Cat::Cat() : AAnimal(){
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &src) : AAnimal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat operator= called" << std::endl;
	if (this != &rhs) {
		*_brain = *rhs._brain;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
	_brain = NULL;
}

void Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}
