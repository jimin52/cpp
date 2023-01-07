//
// Created by jimin on 2022/12/08.
//

#include "FragTrap.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = src.name;
	this->hitPoint = src.hitPoint;
	this->energyPoint = src.energyPoint;
	this->attackDamange = src.attackDamange;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDamange = 30;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "FragTrap copy operator called" << std::endl;
	if (this != &rhs) {
		name = rhs.getName();
		hitPoint = rhs.getHitPoint();
		energyPoint = rhs.getEnergyPoint();
		attackDamange = rhs.getAttackDamange();
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destroctor called" << std::endl;
}

/*********************************************/
/******			required function		******/
/*********************************************/

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " highfive!" << std::endl;
}

/*********************************************/
/******			My function				******/
/*********************************************/

void FragTrap::print(const std::string &variableName) const{
	std::cout << "FragTrap " << variableName
			  << " name: " << name
			  << " HitPoint: " << hitPoint
			  << " Energy Point : " << energyPoint
			  << " attack damage : " << attackDamange << std::endl;
}
