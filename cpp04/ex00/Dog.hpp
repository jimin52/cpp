//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

public:
	Dog();
	explicit Dog(const Dog &src);
	Dog &operator=(const Dog & rhs);
	~Dog();

	void makeSound() const;
};


#endif //CPP_DOG_HPP
