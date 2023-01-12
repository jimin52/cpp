//
// Created by jimin on 2023/01/10.
//

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base & base) {
	try {
		A &classA = dynamic_cast<A &>(base);
		std::cout << "A in ref" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		B &classB = dynamic_cast<B &>(base);
		std::cout << "B in ref" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		C &classC = dynamic_cast<C &>(base);
		std::cout << "C in ref" << std::endl;
	} catch (std::exception &e) {
	}
}

void identify(Base * base) {
	A* classA;
	B* classB;
	C* classC;

	if ((classA = dynamic_cast<A *>(base))) {
		std::cout << "A in ptr" << std::endl;
		return;
	}

	if ((classB = dynamic_cast<B *>(base))) {
		std::cout << "B in ptr" << std::endl;
		return;
	}

	if ((classC = dynamic_cast<C *>(base))) {
		std::cout << "C in ptr" << std::endl;
		return;
	}
}

Base * generate(void) {

	int* ptr;
	Base *returnBase;

	std::srand((std::time(0)));
	int switchCase = rand() % 3;

	switch(switchCase) {
		case 0:
			return (new A('a'));
		case 1:
			return (new B('b'));
		case 2:
			return (new C('c'));
		default:
			return (new A('a'));
	}
}

int main(void) {

	Base* base = generate();

	identify(base);
	identify(*base);

	delete base;
}
