//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {

public:

	//	orthodox canonical form
	ScavTrap();
	explicit ScavTrap(const std::string &name);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &rhs);

	// required function
	void guardGate();

/*********************************************/
/******			My function				******/
/*********************************************/

};

#endif //CPP_SCAVTRAP_HPP
