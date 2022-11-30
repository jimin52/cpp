#include "Contact.hpp"

Contact::Contact(){};

Contact::Contact( std::string firstName, std::string lastName, std::string nickName, 
		std::string phoneNumber, std::string darkestSecret ) 
	: firstName( firstName ), lastName( lastName ), nickName( nickName ),
	phoneNumber( phoneNumber ), darkestSecret( darkestSecret ) {

//		std::cout << "Contact Constructor called" << std::endl;

		return;

	}

Contact::~Contact( void ) {
	
//	std::cout << "Contact Destructor called" << std::endl;

	return;

}


void	Contact::PrintContact( void ) const {

	std::cout << "firstName = " << this->firstName << std::endl;
	std::cout << "lastName = " << this->lastName << std::endl;
	std::cout << "nickName = " << this->nickName << std::endl;
	std::cout << "phoneNumber = " << this->phoneNumber << std::endl;
	std::cout << "darkestSecret = " << this->darkestSecret << std::endl;

	return;
}

std::string	SummaryTenWords(std::string str) {
	
	std::string	returnString;

	returnString = str.substr(0,10);
	if (str.size() > 10) {
		returnString.replace(9, 1, ".");
	}
	return returnString;
}

void	Contact::PrintContactInLine( void ) const {

	std::cout << std::setw(10) << std::right <<  SummaryTenWords(this->firstName) << "|";
	std::cout << std::setw(10) << std::right <<  SummaryTenWords(this->lastName) << "|";
	std::cout << std::setw(10) << std::right <<  SummaryTenWords(this->nickName) << "|";
	std::cout << std::setw(10) << std::right <<  SummaryTenWords(this->phoneNumber) << "|";
	std::cout << std::endl;

	return;

}

bool	Contact::IsEmpty( void ) const {

	if ( this->firstName.empty() == 1)
		return true;
	if ( this->lastName.empty() == 1)
		return true;
	if ( this->phoneNumber.empty() == 1)
		return true;
	if ( this->darkestSecret.empty() == 1)
		return true;
	return false;
}

void	Contact::setContact(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret) {

	firstName = fName;
	lastName = lName;
	nickName = nName;
	phoneNumber = pNumber;
	darkestSecret = dSecret;

	return;
}
