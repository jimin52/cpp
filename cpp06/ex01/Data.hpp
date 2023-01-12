//
// Created by jimin on 2023/01/10.
//

#ifndef CPP_DATA_HPP
#define CPP_DATA_HPP

#include <iostream>

class Data {
private:

	int	thisIsData;

	Data(Data const & src);
	Data & operator=(Data const & rhs);


public:

	Data();
	virtual ~Data();

	explicit Data(int thisIsData);
	void hiThisIsData();

};


#endif //CPP_DATA_HPP
