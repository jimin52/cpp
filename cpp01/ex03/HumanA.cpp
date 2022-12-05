//
// Created by jimin on 2022/12/02.
//

#include "HumanA.hpp"

HumanA::HumanA( const std::string & name, Weapon & weapon ) : name( name ), myWeapon( weapon ) {
	std::cout << HumanA::name << " constructed" << std::endl;
}

HumanA::~HumanA() {
	std::cout << HumanA::name << " destructed" << std::endl;
}

void HumanA::attack() {
	std::cout << HumanA::name << " attack with their " << HumanA::myWeapon.getType() << std::endl;
}
