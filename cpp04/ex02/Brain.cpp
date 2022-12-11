//
// Created by jimin on 2022/12/11.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "Brain operator= called" << std::endl;
	if (this != &rhs) {
		for(int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}
	return *this;
}
