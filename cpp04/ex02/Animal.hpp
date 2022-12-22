//
// Created by jimin on 2022/12/10.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string type;

public:
	//	orthodox canonical form;
	Animal();
	Animal(const Animal & src);
	virtual ~Animal();
	Animal &operator=(const Animal & rhs);

	//	requested function
	virtual void makeSound() const;

	//	getter
	const std::string &getType() const;
};


#endif //CPP_ANIMAL_HPP
