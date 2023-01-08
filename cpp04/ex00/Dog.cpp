//
// Created by jimin on 2022/12/11.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src.getType()){
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog operator= called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

void Dog::makeSound() const{
	std::cout << "bark bark" << std::endl;
}
