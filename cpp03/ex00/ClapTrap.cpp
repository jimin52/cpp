//
// Created by jimin on 2022/12/06.
//

#include "ClapTrap.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/

ClapTrap::ClapTrap(): name(""), hitPoint(0), energyPoint(0), attackDamange(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap " << name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap copy operator called" << std::endl;
	if (this != &rhs) {
		name = rhs.name;
		hitPoint = rhs.hitPoint;
		energyPoint = rhs.energyPoint;
		attackDamange = rhs.attackDamange;
	}
	return *this;
}

/*********************************************/
/******	        Constructor             ******/
/*********************************************/

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoint(10), energyPoint(10), attackDamange(0) {
	std::cout << "Claptrap " << name << " constructor called" << std::endl;
}

/*********************************************/
/******				getter				******/
/*********************************************/

std::string ClapTrap::getName() const {
	return name;
}

unsigned int ClapTrap::getHitPoint() const {
	return hitPoint;
}

unsigned int ClapTrap::getEnergyPoint() const {
	return energyPoint;
}

unsigned int ClapTrap::getAttackDamange() const {
	return attackDamange;
}

/*********************************************/
/******			required function		******/
/*********************************************/

void ClapTrap::attack(const std::string &target) {
	if (energyPoint == 0 || hitPoint == 0)
		std::cout << name << " can't attack " << std::endl;
	else {
		--energyPoint;
		std::cout << "Claptrap " << name << " attacks " << target
		<<" causing " << attackDamange << " points of a damange!" << std::endl;
	}
}

void ClapTrap::takeDamage(const unsigned int & amount) {
	unsigned int damage = getSafeDamageInput(amount);
	if (hitPoint > 0) {
		hitPoint -= damage;
		std::cout << "Claptrap " << name << " take " << damage << " damage" << std::endl;
	} else {
		std::cout << "Claptrap " << name << " have no Hit Point" << std::endl;
	}
}

void ClapTrap::beRepaired(const unsigned int & amount) {
	if (hitPoint == 0) {
		std::cout << "Claptrap " << name << " have no Hit Point" << std::endl;
		return;
	}
	if (energyPoint == 0) {
		std::cout << "Claptrap " << name << " have no Energy Point" << std::endl;
		return;
	}
	--energyPoint;
	hitPoint += amount;
	std::cout << "Claptrap " << name << " be repared " << amount << " Hit Point" << std::endl;
}

/*********************************************/
/******			My function				******/
/*********************************************/

void ClapTrap::print(const std::string & variableName) const {
	std::cout << "ClapTrap " << variableName
		<< " name: " << name
		<< " HitPoint: " << hitPoint
		<< " Energy Point : " << energyPoint
		<< " attack damage : " << attackDamange << std::endl;
}

unsigned int ClapTrap::getSafeDamageInput(unsigned int amount) const {
	if (hitPoint < amount)
		return hitPoint;
	else
		return amount;
}
