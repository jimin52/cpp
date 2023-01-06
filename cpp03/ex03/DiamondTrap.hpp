//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_DIAMONDTRAP_HPP
#define CPP_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:

	std::string name;

public:

	//	orthodox canonical form
	DiamondTrap();
	virtual ~DiamondTrap();
	explicit DiamondTrap(DiamondTrap const & src);
	DiamondTrap & operator=(DiamondTrap const & src);

	//	constructor
	explicit DiamondTrap(std::string name);

	void attack(const std::string& target);
	void whoAmI();
};


#endif //CPP_DIAMONDTRAP_HPP
