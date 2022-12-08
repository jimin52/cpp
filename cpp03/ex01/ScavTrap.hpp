//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	explicit ScavTrap(const std::string &name);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &rhs);

	void print(const std::string &variableName) const;

	void guardGate();

};

#endif //CPP_SCAVTRAP_HPP
