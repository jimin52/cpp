//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
 
	Brain* _brain;

public:

	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat & rhs);
	~Cat();

	void makeSound() const;
};


#endif //CPP_CAT_HPP
