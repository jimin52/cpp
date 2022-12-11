//
// Created by jimin on 2022/12/11.
//

#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain & src);
	virtual ~Brain();
	Brain &operator=(const Brain & rhs);
};


#endif //CPP_BRAIN_HPP
