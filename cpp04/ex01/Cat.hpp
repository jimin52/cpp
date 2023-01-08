//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:

	Brain* _brain;

public:

	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat & rhs);
	virtual ~Cat();

	void makeSound() const;
};


#endif //CPP_CAT_HPP
