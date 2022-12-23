//
// Created by jimin on 2022/12/02.
//

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), myWeapon(NULL) {
	std::cout << HumanB::name << " constructed" << std::endl;
}

HumanB::HumanB(const std::string &name, Weapon *weapon) : name(name), myWeapon(weapon) {
	std::cout << HumanB::name << " constructed" << std::endl;
}

void HumanB::attack() {
	if (myWeapon == NULL) {
		std::cout << name << " doesn't have weapon" << std::endl;
		return;
	}
	std::cout << HumanB::name << " attack with their " << HumanB::myWeapon->getType() << std::endl;
}

HumanB::~HumanB() {
	std::cout << HumanB::name << " destructed" << std::endl;
}

void HumanB::setWeapon(Weapon &myWeapon) {
	std::cout << name << " set weapon: " << myWeapon.getType() << std::endl;
	HumanB::myWeapon = &myWeapon;
}
