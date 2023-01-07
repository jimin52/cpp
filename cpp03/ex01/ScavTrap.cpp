//
// Created by jimin on 2022/12/08.
//

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamange = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap enters gatekeeping mode" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "ScavTrap copy operator called" << std::endl;
	if (this != &rhs) {
		name = rhs.getName();
		hitPoint = rhs.hitPoint;
		energyPoint = rhs.getEnergyPoint();
		attackDamange = rhs.getAttackDamange();
	}
	return *this;
}

void ScavTrap::print(const std::string & variableName) const {
	std::cout << "ScavTrap " << variableName
			  << " name: " << name
			  << " HitPoint: " << hitPoint
			  << " Energy Point : " << energyPoint
			  << " attack damage : " << attackDamange << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (energyPoint == 0 || hitPoint == 0)
		std::cout << name << " can't attack " << std::endl;
	else {
		--energyPoint;
		std::cout << "Scavtrap " << name << " attacks " << target
		<<" causing " << attackDamange << " points of a damange!" << std::endl;
	}
}
