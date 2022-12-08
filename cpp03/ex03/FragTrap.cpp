//
// Created by jimin on 2022/12/08.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 100;
	attackDamange = 30;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " highfive!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destroctor called" << std::endl;
}

