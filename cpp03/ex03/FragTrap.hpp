//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap{

public:
	explicit FragTrap(const std::string &name);

	~FragTrap();

	void highFivesGuys();
};


#endif //CPP_FRAGTRAP_HPP
