//
// Created by jimin on 2022/12/04.
//

#include "MyException.hpp"

const char *MyException::what() const throw() {

	return MyException::message;
}

MyException::MyException(const char *message) : message(message) {}
