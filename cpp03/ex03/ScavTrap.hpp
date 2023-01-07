//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	//	orthodox canonical form
	ScavTrap();
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & src);
	~ScavTrap();

	explicit ScavTrap(const std::string &name);
	void guardGate();

};


#endif //CPP_SCAVTRAP_HPP
