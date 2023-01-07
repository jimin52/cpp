//
// Created by jimin on 2022/12/08.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap defulat constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	if (this != &src) {
		*this = src;
	}
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
	std::cout << "DiamondTrap assign operator called" << std::endl;
	if (this != &src) {
		name = src.name;
		hitPoint = src.hitPoint;
		energyPoint = src.energyPoint;
		attackDamange = src.attackDamange;
	}
	return *this;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") {

}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {

}
