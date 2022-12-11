//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_WRONGDOG_HPP
#define CPP_WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
public:
	WrongDog(const WrongAnimal &src);
	WrongDog();
	WrongDog &operator=(const WrongDog & rhs);
	WrongDog(const WrongDog &src);
	~WrongDog();

	void makeSound() const;
};


#endif //CPP_WRONGDOG_HPP
