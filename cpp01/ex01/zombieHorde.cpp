//
// Created by jimin on 2022/12/02.
//

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie* hordeArr;

	hordeArr = new Zombie[N];
	for (int i = 0; i < N; i++) {
		hordeArr[i].setName(name);
	}

	return hordeArr;
}