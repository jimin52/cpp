//
// Created by jimin on 2022/12/02.
//

#include "Zombie.h"

Zombie *newZombie( std::string name ) {

	Zombie *zombie;

	zombie = new Zombie(name);

	return zombie;

}