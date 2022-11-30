#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>


int	main( void ) {

	PhoneBook	phoneBook;
	std::string	input;

	std::cout << "enter SEARCH or ADD or EXIT: ";
	while ( std::getline(std::cin, input) ) {
		if ( input.compare("SEARCH") == 0) {
			phoneBook.search();
		}
		else if ( input.compare("ADD") == 0) {
			phoneBook.add();
		}
		else if ( input.compare("EXIT") == 0 ) {
			std::exit(0);
		}
		std::cout << "enter SEARCH or ADD or EXIT: ";
	}
	return 0;
}
