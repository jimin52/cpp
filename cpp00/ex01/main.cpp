#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

Contact	InputToContact( void )
{
	Contact	contact;
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "input your first name: ";
	std::getline(std::cin, firstName);
	std::cout << "input your last name: ";
	std::getline(std::cin, lastName);
	std::cout << "input your phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "input your darkest secret: ";
	std::getline(std::cin, darkestSecret);
	contact = Contact(firstName, lastName, phoneNumber, darkestSecret);
	
	return contact;
}

int	main( void ) {

	PhoneBook	phoneBook;
	Contact		contact;
	std::string	input;

	while ( true ) {
		std::cout << "input SEARCH or ADD or EXIT" << std::endl;
		std::getline(std::cin, input);
		if ( input.compare("SEARCH") == 0)
			phoneBook.SearchContact();
		else if ( input.compare("ADD") == 0) {
			contact = InputToContact();
			if ( contact.IsEmpty() == false)
				phoneBook.AddContact(contact);
		}
		else if ( input.compare("EXIT") == 0 ) {
			break;
		}
	}
	return 0;
}
