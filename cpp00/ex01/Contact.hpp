#ifndef CONTACT_HPP
# define CONTACT_HPP 

# include <iostream>
# include <iomanip>

class Contact {

public:

	Contact();
	Contact( std::string firstName,
			std::string lastName,
			std::string phoneNumber,
			std::string darkestSecret );
	~Contact( void );

	void	PrintContact( void ) const ;
	void	PrintContactInLine( void ) const ;
	bool	IsEmpty( void ) const ;

private:

	std::string	firstName;
	std::string	lastName;
	std::string	phoneNumber;
	std::string	darkestSecret;

};


#endif
