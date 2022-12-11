//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat &operator=(const WrongCat & rhs);

	~WrongCat();

	void makeSound() const;
};


#endif //CPP_WRONGCAT_HPP
