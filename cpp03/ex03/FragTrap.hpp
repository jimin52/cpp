//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:
	//	orthodox canonical form
	FragTrap();
	FragTrap(FragTrap const &src);
	FragTrap & operator=(FragTrap const &src);
	virtual ~FragTrap();

	explicit FragTrap(const std::string &name);

	void highFivesGuys();
};


#endif //CPP_FRAGTRAP_HPP
