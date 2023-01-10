//
// Created by jimin on 2023/01/10.
//

#ifndef CPP_C_HPP
#define CPP_C_HPP

#include <iostream>

#include "Base.hpp"

class C: public Base {

private:
	int a;

public:
	C(int a);
	void iAmC();

};


#endif //CPP_C_HPP
