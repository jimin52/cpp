//
// Created by jimin on 2023/01/10.
//

#ifndef CPP_B_HPP
#define CPP_B_HPP

#include <iostream>

#include "Base.hpp"

class B: public Base {

private:
	int a;
public:
	B(int a);
	void iAmB();

};


#endif //CPP_B_HPP
