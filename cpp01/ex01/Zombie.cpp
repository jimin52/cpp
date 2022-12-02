//
// Created by jimin on 2022/12/02.
//

#include "Zombie.h"

Zombie::Zombie() {
	std::cout << "Zombie constructed" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " Zombie destructed" << std::endl;
}

void Zombie::Announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}

const std::string &Zombie::getName() const {
	return name;
}

void Zombie::setName(const std::string &name) {
	Zombie::name = name;
}
