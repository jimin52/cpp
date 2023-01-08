//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_AANIMAL_HPP
#define CPP_AANIMAL_HPP



#include <iostream>
#include "Brain.hpp"

class AAnimal {
protected:

	std::string type;
	explicit AAnimal(std::string type);

public:

	//	orthodox canonical form;
	AAnimal();
	AAnimal(const AAnimal & src);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal & rhs);

	//	requested function
	virtual void makeSound() const = 0;

	//	getter
	std::string getType() const;
};


#endif //CPP_AANIMAL_HPP
