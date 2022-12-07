//
// Created by jimin on 2022/12/06.
//

#include "ClapTrap.hpp"

/*********************************************/
/******		orthodox canonical form		******/
/*********************************************/
ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoint(10), energyPoint(10), attackDamange(0) {
	std::cout << "Claptrap " << getName() << " constructed" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap " << getName() << " destructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap copy operator called" << std::endl;
	if (this != &rhs) {
		this->name = rhs.getName();
		this->setHitPoint(rhs.getHitPoint());
		this->setEnergyPoint(rhs.getEnergyPoint());
		this->setAttackDamange(rhs.getAttackDamange());
	}
	return *this;
}

/*********************************************/
/******				setter				******/
/*********************************************/

void ClapTrap::setEnergyPoint(unsigned int energyPoint) {
	ClapTrap::energyPoint = energyPoint;
}


void ClapTrap::setHitPoint(unsigned int hitPoint) {
	ClapTrap::hitPoint = hitPoint;
}

void ClapTrap::setAttackDamange(unsigned int attackDamange) {
	ClapTrap::attackDamange = attackDamange;
}

/*********************************************/
/******				getter				******/
/*********************************************/


const std::string &ClapTrap::getName() const {
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
	if (getEnergyPoint() == 0 || getHitPoint() == 0)
		std::cout << getName() << " can't attack " << std::endl;
	else {
		--energyPoint;
		std::cout << "Claptrap " << name << " attack " << target
		<<" causing " << attackDamange << " points of a damange!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	unsigned int damage = getSafeDamageInput(amount);
	if (getHitPoint() > 0) {
		hitPoint - damage;
		std::cout << "Claptrap " << name << " take " << damage << " damage" << std::endl;
	} else {
		std::cout << "Claptrap " << name << " have no Hit Point" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoint() == 0) {
		std::cout << "Claptrap " << name << " have no Energy Point" << std::endl;
	} else {
		--energyPoint;
		hitPoint += amount;
		std::cout << "Claptrap " << name << " be repared " << amount << " Hit Point" << std::endl;
	}
}

/*********************************************/
/******			My function				******/
/*********************************************/

void ClapTrap::print(const std::string & variableName) const {
	std::cout << "ClapTrap " << variableName << " name: " << this->name << " HitPoint: " << this->hitPoint << " Energy Point : " << this->energyPoint << std::endl;
}

unsigned int ClapTrap::getSafeDamageInput(unsigned int amount) {
	unsigned int damage;
	if (hitPoint < amount)
		damage = amount - hitPoint;
	else
		damage = amount;
	return damage;
}
