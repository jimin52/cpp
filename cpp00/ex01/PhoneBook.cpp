#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	std::cout << "PhoneBook Constructor called" << std::endl;

	return;
}
	

PhoneBook::~PhoneBook( void ) {

	std::cout << "PhoneBook Destructor called" << std::endl;

	return;
}


void	PhoneBook::AddContact(Contact *contact) {

	delete this->contact[contactCount % 8];
	this->contact[contactCount % 8] = contact;
	++this->contactCount;

	return;
}

void	PhoneBook::SearchContact( void ) const {

	if (this->contactCount < 8)
		for (int i = 0; i < this->contactCount; i++)
			this->contact[i]->PrintContactSmall();
	else
		for (int i = 0; i < 8; i++)
			this->contact[i]->PrintContactSmall();

	return;
}
