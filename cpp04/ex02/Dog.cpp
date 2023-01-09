//
// Created by jimin on 2022/12/11.
//

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &src) : AAnimal(src){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog operator= called" << std::endl;
	if (this != &rhs) {
		if (_brain)
			*_brain = *rhs._brain;
		else
			_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "bark bark" << std::endl;
}
