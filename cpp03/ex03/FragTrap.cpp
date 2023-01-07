//
// Created by jimin on 2022/12/08.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;

}

FragTrap::FragTrap(const FragTrap &src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	if (this != &src) {
		*this = src;
	}
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap assign operator called" << std::endl;
	if (this != &src) {
		hitPoint = src.hitPoint;
		energyPoint = src.energyPoint;
		attackDamange = src.attackDamange;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destroctor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDamange = 30;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " highfive!" << std::endl;
}

