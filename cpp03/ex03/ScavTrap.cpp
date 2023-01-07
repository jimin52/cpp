//
// Created by jimin on 2022/12/08.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	if (this != &src) {
		*this = src;
	}
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap assign operator called" << std::endl;
	if (this != &src) {
		hitPoint = src.hitPoint;
		energyPoint = src.energyPoint;
		attackDamange = src.attackDamange;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 50;
	attackDamange = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}


void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " enters gatekeeping mode" << std::endl;
}

