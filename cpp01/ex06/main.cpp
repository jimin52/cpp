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
	std::string input = argv[1];
	int level;

	level = harl.get_level(input);
	switch (level) {
		case 0:
			harl.debug();
			std::cout << std::endl;
		case 1:
			harl.info();
			std::cout << std::endl;
		case 2:
			harl.warning();
			std::cout << std::endl;
		case 3:
			harl.error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return 0;
}
