#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>


class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	AddContact( Contact contact );
	void	SearchContact( void ) const;
	void	PrintHeader( void ) const;

private:

	Contact	contact[8];
	std::size_t	contactCount;	
};

#endif
