//
// Created by jimin on 2022/12/05.
//

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char* argv[]) {

	if (argc != 2)
		std::cerr << "invalid input" << std::endl;

	Harl	harl;
	std::string keyWord[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string input = argv[1];
	int level;

	level = -1;
	for (int i = 0; i < 4; i++) {
		if (input == keyWord[i]) {
			level = i;
			break;
		}
	}
	switch (level) {
		case 0:
			std::cout << "[DEBUG]" << std::endl;
			harl.debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[INFO]" << std::endl;
			harl.info();
			std::cout << std::endl;
		case 2:
			std::cout << "[WARNING]" << std::endl;
			harl.warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ERROR]" << std::endl;
			harl.error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}