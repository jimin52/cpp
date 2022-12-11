//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	//	orthodox canonical form;
	WrongAnimal();
	WrongAnimal(const WrongAnimal & src);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal & rhs);

	//	requested function
	void makeSound() const;

	//	getter
	const std::string &getType() const;
};


#endif //CPP_WRONGANIMAL_HPP
