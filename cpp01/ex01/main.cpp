//
// Created by jimin on 2022/12/02.
//

#include "Zombie.h"

int main() {

	Zombie* zombie;
	int zombieNum;

	zombieNum = 5;
	zombie = zombieHorde(zombieNum, "zomzom");

	for (int i = 0; i < zombieNum; i++) {
		zombie[i].Announce();
	}

	delete[] zombie;

	return 0;
}