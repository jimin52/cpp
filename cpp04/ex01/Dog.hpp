//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:

	Brain* _brain;

public:

	Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog & rhs);
	virtual ~Dog();

	void makeSound() const;
};


#endif //CPP_DOG_HPP
