//
// Created by jimin on 2022/12/02.
//

#include "Zombie.h"

Zombie::Zombie( std::string name ) : name(name) {
	std::cout << this->name << " is constructed" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " is destructed" << std::endl;
}

void Zombie::Announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}
