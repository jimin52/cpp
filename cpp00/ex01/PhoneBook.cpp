#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	this->contactCount = 0;
	std::cout << "PhoneBook Constructor called" << std::endl;

	return;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "PhoneBook Destructor called" << std::endl;

	return;
}


void	PhoneBook::AddContact( Contact contact ) {

	if ( contact.IsEmpty() == true )
		return;
	else {
		this->contact[contactCount % 8] = contact;
		++this->contactCount;
	}

	return;
}

void	PhoneBook::PrintHeader( void ) const {

	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-" << std::endl;
	std::cout << std::setw(10) << std::right <<  "firstName" << "|";
	std::cout << std::setw(10) << std::right <<  "LastName" << "|";
	std::cout << std::setw(10) << std::right <<  "phoneNum" << "|";
	std::cout << std::setw(10) << std::right <<  "secret" << "|" << std::endl;
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-" << std::endl;

	return;
}

void	PhoneBook::SearchContact( void ) const {

	this->PrintHeader();
	if (this->contactCount < 8)
		for (size_t i = 0; i < this->contactCount; i++)
			this->contact[i].PrintContactInLine();
	else
		for (size_t i = 0; i < 8; i++)
			this->contact[i].PrintContactInLine();
	std::cout << std::endl;

	return;
}
