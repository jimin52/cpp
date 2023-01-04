//
// Created by jimin on 2022/12/05.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed {

private:
	int	_rawBits;
	static const int	_MY_FRACTIONAL_BIT_NUM = 8;

public:
	//	orthodox canonical form
	Fixed();
	virtual ~Fixed();
	Fixed(const Fixed & src);
	Fixed & operator=(const Fixed &src);

	//	constructor
	Fixed(const int & src);
	Fixed(const float & src);

	//	getter && setter
	int getRawBits() const;
	void setRawBits( const int raw );

	//	member functions
	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif //CPP_FIXED_HPP
