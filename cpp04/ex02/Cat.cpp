//
// Created by jimin on 2022/12/11.
//

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : AAnimal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &src) {
		*_brain = *src._brain;
	}
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat operator= called" << std::endl;
	if (this != &rhs) {
		if (_brain)
			*_brain = *rhs._brain;
		else
			_brain = new Brain(*rhs._brain);
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
