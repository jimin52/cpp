//
// Created by jimin on 2022/12/05.
//

#include "Harl.hpp"
#include <iostream>

int main() {

	Harl	harl;

	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("Isdlkfj");
	harl.complain("");
	harl.complain("INFODEBUGERROR");
	return 0;
}
