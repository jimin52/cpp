//
// Created by jimin on 2022/12/06.
//

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {}

Point::Point(float f1, float f2) : x(Fixed(f1)), y(Fixed(f2)) {}


Point::~Point() {

}

Point::Point(const Point &src) : x(src.getX()), y(src.getY()) {}


Point &Point::operator=(const Point &rhs) {
	(void) rhs;
	return *this;
}

const Fixed &Point::getX() const {
	return x;
}

const Fixed &Point::getY() const {
	return y;
}

Point Point::operator-(const Point &rhs) const {
	return Point((this->getX() - rhs.getX()).toFloat(), (this->getY() - rhs.getY()).toFloat());
}

Point Point::operator+(const Point &rhs) const {
	return Point((this->getX() + rhs.getX()).toFloat(), (this->getY() + rhs.getY()).toFloat());
}

