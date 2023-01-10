//
// Created by jimin on 2023/01/10.
//

#ifndef CPP_A_HPP
#define CPP_A_HPP

#include <iostream>

#include "Base.hpp"

class A: public Base {
private:
	int a;
public:
	A(int a);
	void iAmA();

};


#endif //CPP_A_HPP
