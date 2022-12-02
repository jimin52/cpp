//
// Created by jimin on 2022/12/02.
//

#include "HumanB.h"

HumanB::HumanB(const std::string &name) : name(name), myWeapon(NULL) {
	std::cout << HumanB::name << " constructed" << std::endl;
}

void HumanB::attack() {
	std::cout << HumanB::name << " attack with their " << HumanB::myWeapon->getType() << std::endl;
}

HumanB::~HumanB() {
	std::cout << HumanB::name << " destructed" << std::endl;
}

void HumanB::setWeapon(Weapon &myWeapon) {
	HumanB::myWeapon = &myWeapon;
}
