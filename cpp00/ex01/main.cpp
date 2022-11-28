#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main( void ) {

	PhoneBook	phoneBook;

	phoneBook.AddContact( new Contact("abc", "def", "ghi" ,"123"));
	phoneBook.SearchContact();

	return 0;
}
