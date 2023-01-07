//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:
	// orthodox canonical form
	FragTrap();
	FragTrap(const FragTrap &src);
	FragTrap &operator=(FragTrap const & rhs);
	~FragTrap();

	//	constructor
	explicit FragTrap(const std::string &name);

	//	required function
	void highFivesGuys();

	//	my function
	virtual void print(const std::string & variableName) const;
};


#endif //CPP_FRAGTRAP_HPP
