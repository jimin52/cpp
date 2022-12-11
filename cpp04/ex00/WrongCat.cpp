//
// Created by jimin on 2022/12/11.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	*this = src;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	std::cout << "WrongCat operator= called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}
