//
// Created by jimin on 2022/12/02.
//

#include "Replacer.hpp"

int	main( int argc, char* argv[]) {

	if (argc != 4) {
		std::cerr << "invalid input" << std::endl;
		return 1;
	}
	try {
		Replacer replacer(argv[1], argv[2], argv[3]);
		replacer.ReplaceText();
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
