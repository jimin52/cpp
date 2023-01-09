//
// Created by jimin on 2022/12/10.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <iostream>

class Animal {

protected:

	std::string type;
	explicit Animal(std::string type);
	explicit Animal(const Animal & src);
	Animal &operator=(const Animal & rhs);

public:

	//	orthodox canonical form;
	Animal();
	virtual ~Animal();

	//	requested function
	virtual void makeSound() const;

	//	getter
	std::string getType() const;

};


#endif //CPP_ANIMAL_HPP
