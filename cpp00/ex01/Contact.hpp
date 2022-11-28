#ifndef CONTACT_HPP
# define CONTACT_HPP 

# include <string>

class Contact {

public:

	Contact( std::string firstName, std::string lastName,
			std::string phoneNumber, std::string darkestSecret );
	~Contact( void );

	void	PrintContact( void );
	void	PrintContactSmall( void );

private:

	std::string	firstName;
	std::string	lastName;
	std::string	phoneNumber;
	std::string	darkestSecret;

};


#endif
