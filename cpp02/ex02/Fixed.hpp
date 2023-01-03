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
	~Fixed();
	Fixed(const Fixed & src);
	Fixed & operator=( const Fixed &src );

	//	constructor
	explicit Fixed(const int & src);
	explicit Fixed(const float & src);

	//	getter && setter
	const int & getRawBits() const;
	void setRawBits( const int & raw );

	//	operator override
	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;

	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	Fixed operator++(int);	// a++;
	Fixed operator++();		// ++a;
	Fixed operator--(int);	// a--; 
	Fixed operator--();		// --a;

	//	member functions
	static const Fixed & min(const Fixed & lhs, const Fixed & rhs);
	static const Fixed & max(const Fixed & lhs, const Fixed & rhs);
	float toFloat() const;
	int toInt() const;

};

std::ostream &operator<<(std::ostream & os, const Fixed & fixed);

#endif //CPP_FIXED_HPP
