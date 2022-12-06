//
// Created by jimin on 2022/12/05.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP


#include <ostream>

class Fixed {

private:
	int	_rawBits;
	static const int	_MY_FRACTIONAL_BIT_NUM = 8;

public:
	Fixed();
	Fixed(const int src);
	Fixed(const float src);

	virtual ~Fixed();

	Fixed(const Fixed & src);

	Fixed & operator=(const Fixed &src);

	int getRawBits() const;

	void setRawBits( const int raw );

	float toFloat( void ) const;

	int toInt( void ) const;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif //CPP_FIXED_HPP
