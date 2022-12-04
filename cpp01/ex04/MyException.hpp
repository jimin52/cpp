//
// Created by jimin on 2022/12/04.
//

#ifndef CPP_MYEXCEPTION_HPP
#define CPP_MYEXCEPTION_HPP

#include <exception>
#include <iostream>

class MyException : std::exception {
public:
	explicit MyException(const char *message);
	const char *what() const throw() ;

private:
	const char*	message;

};


#endif //CPP_MYEXCEPTION_HPP
