#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook( void ) {

	this->contactCount = 0;
	std::cout << "PhoneBook Constructor called" << std::endl;

	return;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "PhoneBook Destructor called" << std::endl;

	return;
}


void	PhoneBook::add() {
	 
	Contact output;
	output = InputToContact();
	if ( output.IsEmpty() == false )
	{
		this->contact[contactCount % 8] = output; 
		++contactCount;
	}

	return;
}

void	PhoneBook::search( void ) {

	int			input_int;

	SearchContact();
	std::cout << "enter the ID you want to find: ";
	std::cin >> input_int;
	if (std::cin.fail()) {
		std::cout << "WRONG INPUT" << std::endl;
		std::cin.clear();
	}
	else {
		if (input_int >= 0 && input_int < static_cast<int> (contactCount))
			contact[input_int].PrintContact();
		else {
			std::cout << "ID 범위 안의 수를 입력해주세요" << std::endl;
		}
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return;
}


void	PhoneBook::SearchContact( void ) const {

	this->PrintHeader();
	if (this->contactCount <= 8) {
		for (size_t i = 0; i < this->contactCount; i++) {
			std::cout << std::setw(10) << std::to_string(i) << "|";
			this->contact[i].PrintContactInLine();
		}
	}
	else
		for (size_t i = 0; i < 8; i++) {
			std::cout << std::setw(10) << std::to_string(i) << "|";
			this->contact[i].PrintContactInLine();
		}

	return;
}

void	PhoneBook::PrintHeader( void ) const {

	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-" << std::endl;
	std::cout << std::setw(10) << std::right <<  "ID" << "|";
	std::cout << std::setw(10) << std::right <<  "FirstName" << "|";
	std::cout << std::setw(10) << std::right <<  "LastName" << "|";
	std::cout << std::setw(10) << std::right <<  "Nickname" << "|";
	std::cout << std::setw(10) << std::right <<  "phoneNum" << "|" << std::endl;
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-";
	std::cout << std::setw(10) << std::right <<  "----------" << "-" << std::endl;

	return;
}


Contact	PhoneBook::InputToContact( void )
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "input your first name: ";
	if (!std::getline(std::cin, firstName) || firstName == "") {
		std::cout << "Don't empty input" << std::endl;
		std::cin.clear();
		return Contact();
	}
	if ( std::cin.fail() ) {
		std::cout << "WRONG INPUT" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return Contact();
	}
		
	std::cout << "input your last name: ";
	if (!std::getline(std::cin, lastName) || lastName == "") {
		std::cout << "Don't empty input" << std::endl;
		std::cin.clear();
		return Contact();
	}
	std::cout << "input your nickname: ";
	if (!std::getline(std::cin, nickName) || nickName == "") {
		std::cout << "Don't empty input" << std::endl;
		std::cin.clear();
		return Contact();
	}
	std::cout << "input your phone number: ";
	if (!std::getline(std::cin, phoneNumber) || phoneNumber == "") {
		std::cout << "Don't empty input" << std::endl;
		std::cin.clear();
		return Contact();
	}
	std::cout << "input your darkest secret: ";
	if (!std::getline(std::cin, darkestSecret) || darkestSecret == "") {
		std::cout << "Don't empty input" << std::endl;
		std::cin.clear();
		return Contact();
	}

	return Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
} 
