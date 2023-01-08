//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
private:

	Brain* _brain;

public:

	Dog();
	Dog &operator=(const Dog & rhs);
	Dog(const Dog &src);
	~Dog();

	void makeSound() const;
};


#endif //CPP_DOG_HPP
