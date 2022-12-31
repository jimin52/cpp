//
// Created by jimin on 2022/12/05.
//

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char* argv[]) {

	if (argc == 1) {
		std::cout << "input in [INFO, DEBUG, WARNING, ERROR]" << std::endl;
		return 0;
	} else if (argc > 2) {
		std::cerr << "input one argument" << std::endl;
		return 1;
	}

	Harl	harl;
	harl.complainFilter(argv[1]);

	return 0;
}
