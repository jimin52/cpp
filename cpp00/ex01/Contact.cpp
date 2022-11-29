#include <iostream>
#include <iomanip>
#include "Contact.hpp"


Contact::Contact(){};

Contact::Contact( std::string firstName, std::string lastName, 
		std::string phoneNumber, std::string darkestSecret ) 
	: firstName( firstName ), lastName( lastName ), 
	phoneNumber( phoneNumber ), darkestSecret( darkestSecret ) {
		std::cout << "Contact Constructor called" << std::endl;
		return;

	}

Contact::~Contact( void ) {
	
	std::cout << "Contact Destructor called" << std::endl;

	return;

}



void	Contact::PrintContact( void ) const {

	std::cout << "firstName = " << this->firstName << std::endl;
	std::cout << "lastName = " << this->lastName << std::endl;
	std::cout << "phoneNumber = " << this->phoneNumber << std::endl;
	std::cout << "darkestSecret = " << this->darkestSecret << std::endl;

	return;
}

void	Contact::PrintContactSmall( void ) const {

	std::cout << std::setw(10) << std::right <<  this->firstName << "|";
	std::cout << std::setw(10) << std::right <<  this->lastName << "|";
	std::cout << std::setw(10) << std::right <<  this->phoneNumber << "|";
	std::cout << std::setw(10) << std::right <<  this->darkestSecret << std::endl;

	return;

}
