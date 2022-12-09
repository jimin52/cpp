//
// Created by jimin on 2022/12/05.
//

#include "Fixed.hpp"

/*********************************************/
/******			Constructor				******/
/*********************************************/

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor Called" << std::endl;
}

Fixed::Fixed(const int src) {
	_rawBits = src << _FRACTIONAL_BIT_NUM;
	std::cout << "Int constructor Called" << std::endl;
}

Fixed::Fixed(const float src) {
	_rawBits = static_cast<int>(std::roundf(src * (1 << _FRACTIONAL_BIT_NUM)));
	std::cout << "Float constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed & src) {
	*this = src;
	std::cout << "Copy constructor Called" << std::endl;
}

/*********************************************/
/******			Destructor				******/
/*********************************************/

Fixed::~Fixed() {
	std::cout << "Destructed Called" << std::endl;
}

/*********************************************/
/******			getter,setter			******/
/*********************************************/

int Fixed::getRawBits() const {
	return _rawBits;
}

void Fixed::setRawBits(const int raw) {
	_rawBits = raw;
}

/*********************************************/
/******			operator				******/
/*********************************************/

Fixed & Fixed::operator=(const Fixed & rhs) {
	if (this != &rhs)
		setRawBits(rhs._rawBits);
	std::cout << "Copy assignment operator Called" << std::endl;
	return *this;
}

bool Fixed::operator<(const Fixed &rhs) const {
	return _rawBits < rhs._rawBits;
}

bool Fixed::operator>(const Fixed &rhs) const {
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const {
	return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const {
	return !(*this < rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());

}

Fixed Fixed::operator-(const Fixed &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

// a++;
Fixed Fixed::operator++(int) {
	Fixed* temp(this);
	++_rawBits;
	return *temp;
}

// ++a;
Fixed Fixed::operator++() {
	++_rawBits;
	return *this;
}

// a--;
Fixed Fixed::operator--(int) {
	Fixed* temp(this);
	--_rawBits;
	return *temp;
}
// --a;
Fixed Fixed::operator--() {
	--_rawBits;
	return *this;
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs )
		return lhs;
	return rhs;
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	if (lhs < rhs )
		return lhs;
	return rhs;
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs > rhs )
		return lhs;
	return rhs;
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	if (lhs > rhs )
		return lhs;
	return rhs;
}
std::ostream & operator<<(std::ostream &os, const Fixed &rhs) {
	os << rhs.toFloat();
	return os;
}

/*********************************************/
/******			member functions		******/
/*********************************************/

float Fixed::toFloat() const {
	return float(_rawBits) / float(1 << _FRACTIONAL_BIT_NUM);
}

int Fixed::toInt() const {
	return _rawBits >> _FRACTIONAL_BIT_NUM;
}




