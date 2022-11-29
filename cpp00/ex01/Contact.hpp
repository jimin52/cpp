#ifndef CONTACT_HPP
# define CONTACT_HPP 

# include <string>

class Contact {

public:

	Contact();
	Contact( std::string firstName, std::string lastName,
			std::string phoneNumber, std::string darkestSecret );
	~Contact( void );

	void	PrintContact( void ) const ;
	void	PrintContactSmall( void ) const ;

private:

	std::string	firstName;
	std::string	lastName;
	std::string	phoneNumber;
	std::string	darkestSecret;

};


#endif
