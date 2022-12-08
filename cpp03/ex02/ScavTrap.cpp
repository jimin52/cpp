//
// Created by jimin on 2022/12/08.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 50;
	attackDamange = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << "destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " enters gatekeeping mode" << std::endl;
}
