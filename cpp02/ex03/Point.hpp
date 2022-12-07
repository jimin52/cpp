//
// Created by jimin on 2022/12/06.
//

#ifndef CPP_POINT_HPP
#define CPP_POINT_HPP

#include "Fixed.hpp"

class Point {

private:
	Fixed const x;
	Fixed const y;

public:

	Point();
	Point(float f1, float f2);

	Point(const Point & src);

	Point & operator=( const Point & src );

	virtual ~Point();

	Point operator-( const Point & rhs) const;
	Point operator+( const Point & rhs) const;
	const Fixed &getX() const;
	const Fixed &getY() const;
};


#endif //CPP_POINT_HPP
