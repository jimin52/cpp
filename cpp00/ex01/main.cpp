#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdio>
#include <iostream>
#include <string>


int	main( void ) {

	PhoneBook	phoneBook;
	std::string	input;

	while ( true ) {
		std::cout << "enter SEARCH or ADD or EXIT: ";
		while (!std::getline(std::cin, input) || input == "") {
			std::cout << "enter SEARCH or ADD or EXIT: ";
		}
		if ( input.compare("SEARCH") == 0) {
			phoneBook.search();
		}
		else if ( input.compare("ADD") == 0) {
			phoneBook.add();
		}
		else if ( input.compare("EXIT") == 0 ) {
			std::exit(0);
		}
	}
	return 0;
}
