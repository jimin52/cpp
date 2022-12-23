//
// Created by jimin on 2022/12/05.
//

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char* argv[]) {

	if (argc != 2) {
		std::cerr << "invalid input" << std::endl;
		return 1;
	}

	Harl	harl;
	harl.complainFilter(argv[1]);

	return 0;
}
