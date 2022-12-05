//
// Created by jimin on 2022/12/02.
//

#include "Replacer.hpp"
#include "MyException.hpp"

int	main( int argc, char* argv[]) {

	try {
		if (argc != 4) {
			throw MyException("Invalid Argument");
		} else {
			Replacer replacer(argv[1], argv[2], argv[3]);
			replacer.ReplaceText();
		}
	} catch (MyException e) {
		std::cerr << e.what() << std::endl;
	} catch (std::exception e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
