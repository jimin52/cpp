#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>


class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	add( void );
	void	search( void );
	void	exit( void );
	void	AddContact( void );
	void	SearchContact( void ) const;
	void	PrintHeader( void ) const;
	void	PrintContactWithId( int ) const;
	Contact	InputToContact( void );

private:

	Contact	contact[8];
	std::size_t	contactCount;	
};

#endif
