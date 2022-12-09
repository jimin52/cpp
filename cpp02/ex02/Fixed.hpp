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
	static const int	_FRACTIONAL_BIT_NUM = 8;

public:
	Fixed();
	Fixed( int src );
	Fixed( float src );
	~Fixed();
	Fixed(const Fixed & src);

	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	Fixed & operator=( const Fixed &src );

	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed & min(Fixed & lhs, Fixed & rhs);
	static const Fixed & min(const Fixed & lhs, const Fixed & rhs);

	static Fixed & max(Fixed & lhs, Fixed & rhs);
	static const Fixed & max(const Fixed & lhs, const Fixed & rhs);

	int getRawBits() const;
	void setRawBits( int raw );

	float toFloat() const;
	int toInt() const;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif //CPP_FIXED_HPP
